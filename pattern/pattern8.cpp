#include<iostream>
using namespace std;

void printPattern8(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
}

int main(){

    int n;
    cin >> n;

    printPattern8(n);
}