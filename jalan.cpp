#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int M[N];

    char arah[4] = {'T', 'U', 'B', 'S'};

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }

    vector<char> langkah;
    int pos[2];
    for (int i = 0; i < N; i++)
    {
        langkah.clear();
        pos[0] = 0;
        pos[1] = 0;
        int s = 0;
        int w = 0;
        int a = 0;
        while (s < 1)
        {
            for (int j = 0; j <= w; j++)
            {
                if (langkah.size() == M[i])
                {
                    break;
                }
                langkah.push_back(arah[a]);
                int b = langkah.size() - 1;
                if (langkah[b] == 'T')
                {
                    pos[0] = pos[0] + 1;
                }
                else if (langkah[b] == 'U')
                {
                    pos[1] = pos[1] + 1;
                }
                else if (langkah[b] == 'B')
                {
                    pos[0] = pos[0] - 1;
                }
                else if (langkah[b] == 'S')
                {
                    pos[1] = pos[1] - 1;
                }
            }
            w += 1;
            if (a == 3)
            {
                a = 0;
            }
            else
            {
                a += 1;
            }

            if (langkah.size() == M[i])
            {
                break;
            }
        }

        cout << pos[0] << " " << pos[1] << endl;
    }

    return 0;
}