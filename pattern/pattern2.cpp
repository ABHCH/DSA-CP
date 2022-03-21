#include<iostream>
using namespace std;

void printPattern2(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            if(row == 1 || row == n || col == 1 || col == n){
                cout<<"*";
            }else{
                cout<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern2(n);
}