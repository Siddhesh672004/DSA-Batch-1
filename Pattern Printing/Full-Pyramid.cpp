// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int row=0; row<n; row+=1){ 
        for(int col=0; col < n-row-1; col+=1){
            cout<<" ";
        }
         for(int k = 0; k < 2 * row + 1; k++) {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
} 