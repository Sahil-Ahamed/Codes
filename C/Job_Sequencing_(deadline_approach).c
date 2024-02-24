#include<stdio.h>

void bubble_sort(int deadline[], int value[],int size){
    int temp_value,temp_deadline=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<(size-i-1);j++){
            if(value[j+1]>value[j]){
                temp_value=value[j];
                temp_deadline=deadline[j];
                
                value[j]=value[j+1];
                deadline[j]=deadline[j+1];
                
                value[j+1]=temp_value;
                deadline[j+1]=temp_deadline;
            }
        }
    }
}

void job_sequencing(int deadline[],int value[],int size){
    int profit=0;
    int slot[size];

    for(int i=0;i<size;i++) {
        slot[i]=0;
    }

    for(int i=0;i<size;i++){
        for(int j=(deadline[i]-1);j>=0;j--){
            if(slot[j]==0){
                slot[j]=1;
                profit=profit+value[i];
                break;
            }
        }
    }

    printf("Final profit= %d", profit);
}




char main(){
    int size;
    printf("Enter number of jobs:");
    scanf("%d",&size);
    int deadline[size],value[size];
    
    printf("Enter deadlines sequentially:");
    for(int i=0;i<size;i++){
        scanf("%d",&deadline[i]);
    }
    printf("Enter values sequentially:");
    for(int i=0;i<size;i++){
        scanf("%d",&value[i]);
    }
    
    bubble_sort(deadline,value,size);
    job_sequencing(deadline,value,size);
    
    
    
    return 'c';
}
