#include<iostream>
using namespace std;

void printPattern3(int n){
    int row = 1;
    while(row <= n){
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

    printPattern3(n);
}