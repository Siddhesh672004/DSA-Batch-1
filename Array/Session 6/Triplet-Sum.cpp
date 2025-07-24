// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
                
    vector<int> arr{1,2,3,4,5,6,1,2};
    int ans = 6;
    
    for(int i=0; i< arr.size(); i++){
        for(int j=i+1; j< arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == ans){
                    cout<<"Pair : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl; 
                }
            }
        }
    }
    return 0;
}

