#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[], int target,int n){
    int n = 7;
            int low = 0 , high=n-1;
            while(low<=high){
                int mid =(low+high)/2;
                if(arr[mid] == target){
                    return mid;
                }
                else if (arr[mid]>target){
                    high = mid-1;
                }else low = mid+1;
            }   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int target =50;
   int result = bsearch(arr,target,n);
   return result;
}

