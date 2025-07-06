#include <iostream>
using namespace std;

int main() {
    
    int rowCount, colCount;
    cin>>rowCount;
    cin>>colCount;
    
    for(int row=0; row<rowCount; row+=1){
        for(int col=0; col<colCount; col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}