#include<iostream>
using namespace std;

void printPattern4(int n){
    int row = n;
    while(row >= 1){
        int col = 1;
        while(col <= row){
            cout<<"*";
            col++;
        } 
        cout<<endl;
        row--;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern4(n);
}