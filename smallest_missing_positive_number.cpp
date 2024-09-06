//methon 1 linear search
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int arr[n]={0,1,2,3,5,6,7,8,9,9+1};
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]) {
//             cout<<i;
//             break;
//         }
//     }
// }
//methon 2 binary search
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={0,1,3,4,5,6,8,9,10,11};
    int low =0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
       int mid = low + (high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans = mid;
            high = mid-1;
        }
        
        }
        cout<<"final ans is : "<<ans;
    
}