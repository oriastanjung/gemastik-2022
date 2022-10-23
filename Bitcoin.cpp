#include <iostream>

using namespace std;

void solve(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    int hariBeli = 0;
    int hariJual = 0;
    int keuntungan = 0;

    for (int j = hariJual; j < n; j++)
    {

        for (int i = hariJual; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                hariBeli = i;
            }
            if (arr[i] > max)
            {
                max = arr[i];
                hariJual = i;
            }
        }

        keuntungan += abs(max - min);
        hariJual++;
        j = hariJual;
        min = arr[hariJual];
        max = arr[hariJual];

        if (hariBeli == n - 1)
        {
            keuntungan = 0;
            break;
        }
    }
    cout << keuntungan << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n);
    return 0;
}
