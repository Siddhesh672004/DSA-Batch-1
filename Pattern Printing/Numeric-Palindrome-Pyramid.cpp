// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row=0; row<n; row+=1){
        int col;
        for(col=0; col<row+1; col+=1){
            cout<<col+1;
        }
        
        for(col=row; col>=1; col-=1){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}
