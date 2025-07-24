// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
                
    vector<int> arr{1,2,3,5,1,2,3,5};
    vector<int> brr{10,20,30,40,50,60};
    
    vector<int> ans;
    
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
    }
    
    for(int i=0; i<brr.size(); i++){
        ans.push_back(brr[i]);
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
        
    return 0;
}