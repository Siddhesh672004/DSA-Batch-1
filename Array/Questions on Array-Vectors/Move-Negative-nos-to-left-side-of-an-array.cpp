// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sortNegative(int arr[], int n){
    int low = 0;
    int high = n-1;
    
    while(low <= high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    
    int arr[] = {1,-3,7,9,-4,8,-2};
    int n = sizeof(arr) / sizeof(int); // 7
    
    sortNegative(arr, n);
    
    
    return 0;
    
}










