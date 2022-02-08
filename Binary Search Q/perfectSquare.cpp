// valid perfect square

#include<iostream>
using namespace std;

int getPerfectSquare(int n){
    int start = 0;
    int end = 1e4;

    while(start<=end){
        int mid = start + (end - start)/2;
        if(mid * mid == n){
            return true;
        }else if(mid * mid > n){
            end = mid  - 1;
        }else{
            start = mid + 1;
        }
    }
    return false;
}

int main(){

    int n;
    cin>>n;

    int ans = getPerfectSquare(n);
    cout<<ans<<endl;
}