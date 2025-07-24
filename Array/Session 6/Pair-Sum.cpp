// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
                
    vector<int> arr{1,2,3,4,5,6};
    int ans = 5;
    
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == ans){
                cout<<"Pair: "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
    
        
    return 0;
}