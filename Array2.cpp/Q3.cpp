//Check if the given array is sorted or not

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
    int j;
    bool sort=false;//not sorted
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i]<v[j]){
            sort=true;
            break;
            }
        }
    }
    if(sort==true)
    cout<<"Sorted array:";
    else
    cout<<"Not sorted array:";
}