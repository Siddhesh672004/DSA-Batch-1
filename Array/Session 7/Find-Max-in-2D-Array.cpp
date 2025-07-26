
    #include <iostream>
    #include <climits>
    using namespace std;
    int findMax(int arr[][3])
    {
        int maxi = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] > maxi)
                {
                    maxi = arr[i][j];
                }
            }
        }
        return maxi;
    }
    int main()
    {
        int arr[3][3] = {{1, 2, 3},
                        {7, 5, 6},
                        {7, 8, 9}};
        cout << "Maximum no: " << findMax(arr);
        return 0;
    }
    