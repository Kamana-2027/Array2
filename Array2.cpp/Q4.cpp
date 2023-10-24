//Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sub,indexodd=0,indexeven=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            indexeven=indexeven+a[i];
        }
        else
        indexodd=indexodd+a[i];
        }
    cout<<indexeven<<endl;
    cout<<indexodd<<endl;
    sub=indexeven-indexodd;
    cout<<"Sum of even and odd indices are:"<<sub;

}