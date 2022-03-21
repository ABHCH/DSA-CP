#include<iostream>
using namespace std;

void printPattern6(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<< col ;
            col ++;
        }
        cout<<endl;
        row++;
    }
}

int main(){
    int n;
    cin >> n;

    printPattern6(n);
}