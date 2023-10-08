#include<stdio.h>

void quicksort(int ar[],int start,int stop){
    int piviot=start;
    int p=start;
    int q=stop,temp;
    
    if(start<stop){
        while(p<q){
            while(ar[p]<=ar[piviot] && p<stop){
                p++;
            }
            while(ar[q]>ar[piviot]){
                q--;
            }
            if(p<q){
                temp=ar[p];
                ar[p]=ar[q];
                ar[q]=temp;
            }
        }
        temp=ar[piviot];
        ar[piviot]=ar[q];
        ar[q]=temp;
        quicksort(ar,start,q-1);
        quicksort(ar,q+1,stop);
    }
}


char main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int start=0;
    int stop=n-1;
    quicksort(ar,start,stop);
    
    printf("After sorting:");
    for(int i=0;i<n;i++){
        printf("%d  ",ar[i]);
    }
    
    
    return 'c';
}
