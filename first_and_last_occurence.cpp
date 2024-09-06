#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(2,-1);
    int n=10;
    int arr[n]={1,2,2,2,2,3,4,5,6,7};
    int target =2;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            if(v[0]==-1){
                v[0]=i;
            }
            v[1]=i;
        }
    }
   cout<<"first occurence : "<<v[0]<<endl<<"Second occurence : "<<v[1];
}
//second methon 
//time complexity O(log(n)).
#include<iostream>
using namespace std;
int main(){
    int brr[2]={-1,-1};
    int n=10;
    int arr[n]={1,2,2,2,2,4,5,6,6,8};
    int low = 0;
    int high =n-1;
    int target =2;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target){
                high = mid-1;
            }
            else{
               brr[0]=mid;
               break;
            }
        }
        else if (arr[mid]<target) low = mid+1;
        else high  = mid-1;
    }
    low = 0;
    high =n-1;
   
        while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            if(arr[mid+1]==target){
                low=mid+1;
            }
            else{
              brr[1]=mid;
              break;
            }
        }
        else if (arr[mid]<target) low = mid+1;
        else high  = mid-1;
    }
    cout<<brr[0]<<endl<<brr[1];
}