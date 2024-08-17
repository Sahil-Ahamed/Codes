#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int ar[n];
    cout<<"Enetr Elements:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    for(int i=0;i<=(n-1)/2;i++){
        int temp=0;
        temp=ar[i];
        ar[i]=ar[n-i-1];
        ar[n-i-1]=temp;
    }
    
    cout<<"After reversal:";
    for(int i=0;i<n;i++){
        cout<<" "<<ar[i];
    }
    
    return 0;
}
