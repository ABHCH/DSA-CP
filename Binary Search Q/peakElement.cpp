#include<iostream>
using namespace std;

int getPeak(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else if(arr[mid] < arr[mid - 1]){
            end = mid;
        }
    }
    return end;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getPeak(arr, n);
    cout<<ans<<endl;
}