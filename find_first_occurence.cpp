#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"enter target element : ";
    cin>>target;
    int n=10;
    int arr[n]={1,3,5,7,7,7,9,9,20,29};
    int high = n-1;
    int low = 0;
    bool flag = false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target){
                high = mid-1;
            }
            else{
            flag = true;
            cout<<mid;
            break;
            }
        }
        else if(arr[mid]<target) low = mid+1;
        else high = mid-1;
    }
    if(flag == false) cout<<"-1";
}