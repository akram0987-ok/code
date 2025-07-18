#include <bits/stdc++.h>
using namespace std;

//Linear search
//If given value is found print index number 
//or if not found print -1....

int main(){



    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int key; cin>>key;
int size=arr.size();

for(int i=0;i<size;i++){
    if(arr[i]==key){
cout<<i<<endl;  return 0;  }
    
}
cout<<-1<<endl; }
