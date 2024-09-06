#include<iostream>
using namespace std;
int main(){
    int arr[11]={1,2,3,4,6,8,14,16,19,21,24};
    int x;
    cout<<"enter x  : ";
    cin>>x;
    for(int i=0;i<11;i++){
        if(x<arr[i]){
            cout<<arr[i-1];
            break;
        }
    }
}