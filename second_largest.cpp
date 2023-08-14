//smallest element in array
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int min = INT_MAX;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << min;

    return 0;
}
