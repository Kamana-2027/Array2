//Find the unique number in a given Array where all the elements are being repeated twice with one
//value being unique.

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
    int i,j;
    for(i=0;i<n;i++){
        bool unique=true;
        for(j=0;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j]){
                unique=false;
                break;
            }
        }
        if(unique==true){
            cout<<a[i]<<endl;
            break;
        }
    }

    

}