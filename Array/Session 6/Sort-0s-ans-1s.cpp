#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}