// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
int main() {
    // Write C++ code here
    
    int n;
    cin>>n;
    
    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            cout<<row+1;
            if(col != row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row; col+=1){
            cout<<n-row;
            if(col != n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}