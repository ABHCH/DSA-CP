#include<iostream>
using namespace std;

void printPattern5(int n){
    int row = 1;
    while(row <= n){
        int space = n - row;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col <= row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern5(n);
}