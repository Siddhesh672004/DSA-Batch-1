// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper part
    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        for(int col=0; col<2*row+1; col+=1){
            cout<<" ";
        }
        for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower part (upside down)
    for(int row=n-1; row>=0; row-=1){
        for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        for(int col=0; col<2*row+1; col+=1){
            cout<<" ";
        }
        for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
