//Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int num;
    cout<<"Enter num:";
    cin>>num;
    int count=0;
    for(i=0;i<n;i++){
        if(v[i]>num){
            count=count+1;
        }
    }
    cout<<"No of element greater:"<<count;
}
