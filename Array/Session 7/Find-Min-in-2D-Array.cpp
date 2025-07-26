
    #include <iostream>
    #include <climits>
    using namespace std;
    int findMin(int arr[][3])
    {
        int mini = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] < mini)
                {
                    mini = arr[i][j];
                }
            }
        }
        return mini;
    }
    int main()
    {
        int arr[3][3] = {{1, 2, 3},
                        {7, 5, 6},
                        {7, 8, 9}};
        cout << "Minimum no: " << findMin(arr);
        return 0;
    }