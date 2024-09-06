#include<iostream>
using namespace std;
int main(){
    int n=9;
    int arr[n]={1,2,4,6,8,9,16,19,20};
    int low = 0;
    int high = n-1;
    int x;
    cout<<"enter target number : ";
    cin>>x;
    bool flag =false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            cout<<"target element present"<<endl<<mid<<" is the index number";
            flag = true;
            break;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag ==false) cout<<"target element not present : ";
}