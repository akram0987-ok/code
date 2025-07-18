#include <bits/stdc++.h>
using namespace std;



void bubblesort(vector<int > &v){
int size = v.size();

for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
    if(v[j]>v[j+1]){
        swap(v[j],v[j+1]);
    }}
}

}

void printarray(vector<int> v,int n) {
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}




int main(){



    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubblesort(arr);

printarray(arr,n);
    return 0;
}