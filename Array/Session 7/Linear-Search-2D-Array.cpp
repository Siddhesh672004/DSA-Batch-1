
    #include <iostream>
    using namespace std;

    bool linearSearch(int arr[][3], int rows, int cols, int key){
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(arr[i][j] == key){
                    return true;
                }
            }
        }
        
        return false;
    }

    int main() {
    
    int arr[3][3] = {{1,2,3}, 
                    {4,5,6},
                    {7,8,9}};
                    
    int rows = 3;
    int cols = 3;
    int key;
    
    cout<<"Enter the key: ";
    cin>>key;
    
    bool ans = linearSearch(arr, rows, cols, key);
    
    if(ans){
        cout<<"Key Found";
    }
    else{
        cout<<"Key not found";
    }

    return 0;
    }
    