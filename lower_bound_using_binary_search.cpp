#include<iostream>
using namespace std;
int main(){
    int n=9;
    int arr[n]={2,4,6,8,10,18,21,23,25};
    int low =0;
    int high = n-1;
    int x;
    cout<<"enter the value of x : ";
    cin>>x;
    bool flag = false;
    while(low<=high){
        int mid = low+(high-low)/2;
            if(arr[mid]==x){
                flag = true;
                cout<<arr[mid-1];
                break;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else if(arr[mid]<x){
                low=mid+1;
            }
        }
        if(flag==false) cout<<arr[high];
    }