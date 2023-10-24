//If an array arr contains n elements, then check if the given array is a palindrome or not .

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
    bool palindrome=true;
    int i=0;
    int j=n-1;
    while(i<j){
            if(a[i]!=a[j]){
                palindrome=false;
                break;
            }
            i++;
            j--;

        }
        if(palindrome==true)
        cout<<"Its a palindrome:)";
        else
        cout<<"Not an palindrome:(";
    }

