#include<iostream>
using namespace std;

void printPattern1(int n){
     int row = 1;
     while(row <= n){
         int col = 1;
         while(col <= n){
             cout<<" * ";
             col++;
         }
         cout<<endl;
         row++;
     }
}

int main(){
    int n;
    cin >> n;


    printPattern1(n);
}