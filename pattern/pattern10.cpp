#include<iostream>
using namespace std;

void printPattern10(int n){
    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<<count;
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern10(n);
}