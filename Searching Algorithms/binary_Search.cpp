// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target){
    //3 Steps
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    
    while(start <= end){
        //1st Condition
        if(arr[mid] == target){
            return mid;
        }
        //2nd Condition --> Right Half
        else if(target > arr[mid]){
            start = mid + 1;
        }
        //3rd Condition --> Left Half
        else if(target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main() {
    
    int arr[] = {2,3,5,8,10,15,20,35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    
    int ans = binary_search(arr, size, target);
    
    cout<<"Element is present at index "<<ans;

    return 0;
}