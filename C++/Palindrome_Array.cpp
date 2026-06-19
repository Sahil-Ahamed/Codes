#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of word:";
    cin>>n;
    
    char ar[n+1]; //+1 to store null character at the end, or may cause buffer overflow.
    cout<<"Enter the word:";
    cin>>ar;
    
    int pallin=1;
    for(int i=0;i<n/2;i++){
        if(ar[i]!=ar[n-i-1]){
            pallin=0;
        }
    }
  
    if(pallin==1){
        cout<<"It's a palindrome word.";
    }
    else if(pallin==0){
        cout<<"It's not a palindrome word.";
    }
    
    
    
    return 0;
}
