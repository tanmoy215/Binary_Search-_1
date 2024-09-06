#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={1,3,4,6,7,9,13,16,18,20};
    int x;
    cout<<"enter target value : ";
    cin>>x;
    bool flag = false;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false) cout<<arr[low];
}