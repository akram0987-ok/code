#include <bits/stdc++.h>
using namespace std;

//Binary search
//If given value is found print index number 
//or if not found print "Not Found"....

int main(){



    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

sort(arr.begin(),arr.end());
int key; cin>>key;

int low=0,high=n-1;
    
    while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==key){
    cout<<" index is : "<<mid<<endl;
    return 0;
}
else if(arr[mid]<key){
    low=mid+1;
}
else  {
high=mid-1;
    }
     }

     cout<<" not found"<<endl; return 0;




}
