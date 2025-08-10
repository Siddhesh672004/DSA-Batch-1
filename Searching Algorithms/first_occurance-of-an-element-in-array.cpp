// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int target){
    //3 Steps
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int temp = -1;
    
    while(start <= end){
        //1st Condition
        if(arr[mid] == target){
            temp = mid;
            end = mid - 1;
        }
        //2nd Condition --> Right Half
        else if(target > arr[mid]){
            start = mid + 1;
        }
        //3rd Condition --> Left Half
        else if(target < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    
    return temp;
}

int main() {
    
    int arr[] = {2,3,4,4,4,5,6,35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int ans = firstOccurence(arr, size, target);
    
    if(ans == -1){
        cout<<"Element is not present in array";
    }
    else{
        cout<<"First Occurrance 0f element is present at index "<<ans;    
    }
    

    return 0;
}