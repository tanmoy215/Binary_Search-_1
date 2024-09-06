#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int low = 0;
    int high =  n,mid;
    bool flag  = false;
    while(low<=high){
        mid = low + (high-low)/2;
        if(mid*mid==n){
            cout<<mid;
            flag = true;
            break;
        }
        else if(mid*mid > n){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(flag==false) cout<<high;
}