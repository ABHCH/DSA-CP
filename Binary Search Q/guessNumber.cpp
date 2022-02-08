// guess my number

#include<iostream>
using namespace std;

int getNumber(int n){

    int start = 1;
    int end = n;

    while(start<=end){
        int mid = start + (end - start)/2;

        if(mid == 0){
            return mid;
        }else if(mid == -1){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return 1;
}

int main(){

    int n;
    cin>>n;

    int ans = getNumber(n);
    cout<<ans<<endl;
}