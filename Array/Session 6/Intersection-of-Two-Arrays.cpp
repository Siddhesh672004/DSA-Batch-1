// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
                
    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{7,8,9};
    
   vector<int> ans;
   
   //Arr
   for(int i=0; i<arr.size(); i++){
       //for brr
       int element = arr[i];
       for(int j=0; j<brr.size(); j++){
           if(element == brr[j]){
               ans.push_back(arr[i]);
           }
       }
   }
   
   for(int i=0; i<ans.size(); i++){
       cout<<ans[i]<<" ";
   }
    return 0;
}