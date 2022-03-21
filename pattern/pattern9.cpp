#include<iostream>
using namespace std;

void printPattern9(int n){
    int row = n;
    while(row >= 1){
        int col = 1;
        while(col <= row){
            cout<< n - row + 1;
            col++;
        }
        cout<<endl;
        row--;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern9(n);
}