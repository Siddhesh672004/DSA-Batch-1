// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int row=0; row<n; row+=1){ 
        for(int col=0; col<row; col+=1){
            cout<<"  ";
        }
        
         for(int k = 0; k < 2*(n-row)-1; k+=1) {
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
} 