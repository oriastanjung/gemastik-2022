#include <iostream>
#include <vector>
using namespace std;

void solve(int *bnyk_musuh, int k, int n)
{

    int koneksi[k][2];
    int node;

    int pindahPortal = 1;
    int totalTenaga = 0;
    int nodePortalSaatIni = 0;

    for (int i = 0; i < k; i++)
    {
        for (int m = 0; m < 2; m++)
        {
            cin >> node;
            koneksi[i][m] = node;
        }
    }

    int nodeKoneksiAwal = 0;
    int nodeKoneksiAkhir = 0;

    while (true)
    {
        nodePortalSaatIni = koneksi[nodeKoneksiAwal][nodeKoneksiAkhir]; // 0, 1, 2, 3, 4
        totalTenaga += pindahPortal * bnyk_musuh[nodePortalSaatIni - 1];

        if (nodeKoneksiAkhir == 1)
        {
            if (nodePortalSaatIni != koneksi[nodeKoneksiAwal + 1][0] && nodePortalSaatIni < n - 1)
            {
                pindahPortal += 1;
                nodeKoneksiAkhir = 0;
                nodeKoneksiAwal += 1;
            }
            else
            {
                pindahPortal += 0;
                nodeKoneksiAkhir = 1;
                nodeKoneksiAwal += 1;
            }
        }
        else
        {

            nodeKoneksiAkhir += 1;
        }
        if (nodePortalSaatIni > n - 1)
        {
            break;
        }
    }

    cout << totalTenaga;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> bnyk_musuh;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        bnyk_musuh.push_back(x);
    }

    solve(&bnyk_musuh[0], k, n);
    return 0;
}