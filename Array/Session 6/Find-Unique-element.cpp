// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int findUnique(vector<int> arr){
    int ans = 0;        
    
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
                
    vector<int> arr{1,2,3,5,1,2,3,5};
    
    int unique = findUnique(arr);
    
    cout<<"Unique element: "<<unique;
    
    return 0;
}