
//Given an array of integers, change the value of all odd indexed elements to its second multiple
//and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int evenindex,oddindex;
    for(int j=0;j<n;j++){
        if(j%2==0){
            evenindex=a[j]+10;
            cout<<evenindex<<" ";
        }
        else{
        oddindex=a[j]*2;
        cout<<oddindex<<" ";
        }
    }
}