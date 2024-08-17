#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int ar[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    //Finding max
    int max=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    cout<<"Largest element="<< max<<endl;
    
    //Finding min
    int min=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    cout<<"Smallest element="<< min;
    
    
    
  return 0;  
} 
