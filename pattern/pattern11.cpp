#include<iostream>
using namespace std;

void printPattern10(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            if((row + col)%2 == 0){
                cout<<"1";
            }else{
                cout<<"0";
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

    printPattern10(n);
}