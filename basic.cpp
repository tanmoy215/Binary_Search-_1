#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int m=8;
    int arr[m]={12,34,56,7,4,75,344,90};
    bool flag = false;
     int idx=-1;
    for(int i=0;i<m;i++){
        if(arr[i]==n){
            flag = true;
            idx=i;
             break;
        }
    }
    if(flag==true){
        cout<<"Hit element present"<<endl<<idx<<" is the index number";
    }
    else cout<<"hit element not present";
}