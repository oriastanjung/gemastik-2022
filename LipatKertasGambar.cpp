#include <iostream>
#include <algorithm>
using namespace std;

void solve(int arr[][3], int n)
{

    int result[2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= arr[i][2]; j++)
        {
            if (arr[i][0] > arr[i][1])
            {
                arr[i][0] = arr[i][0] / 2;
            }
            else
            {
                arr[i][1] = arr[i][1] / 2;
            }
            result[0] = arr[i][0];
            result[1] = arr[i][1];
        }
        sort(result, result + 2, greater<int>());
        cout << result[0] << " " << result[1] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    solve(arr, n);
    return 0;
}
