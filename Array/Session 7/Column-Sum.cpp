  // Online C++ compiler to run C++ program online
  #include <iostream>
  using namespace std;

  void printSum(int arr[][3], int rows, int cols){
    //Rows
    for(int i=0; i<rows; i++){
        //Cols
        int ans=0;           
        for(int j=0; j<cols; j++){
            ans += arr[j][i];
        }
        cout<<"Column Sum: "<<ans<<endl;
    }
  }

  int main() {
    
    int arr[3][3] = {{1,2,3}, 
                    {4,5,6},
                    {7,8,9}};
                    
    int rows = 3;
    int cols = 3;
    
    printSum(arr, rows, cols);
    
      return 0;
  }