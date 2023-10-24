//WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
using namespace std;
void sort(vector <int> &a){
    int i,j;
    for(i=0;i<a.size();i++){
        for(j=i+1;j<a.size();j++){
            if(a[i]>a[j]){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
    }
    }
}
void display(vector <int> &a){
    int i;
    for(i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> v;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v);
    display(v);
    cout<<"3 largest number:"<<v[n-3]<<" "<<v[n-2]<<" "<<v[n-1];
}