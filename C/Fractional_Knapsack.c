#include<stdio.h>
 
void bubble_sort(int value[], int weight[], float ratio[],int n){
    float temp_ratio;
    int temp_value,temp_weight=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(ratio[j]<ratio[j+1]){
                temp_ratio=ratio[j];
                temp_value=value[j];
                temp_weight=weight[j];
                
                ratio[j]=ratio[j+1];
                value[j]=value[j+1];
                weight[j]=weight[j+1];
                
                ratio[j+1]=temp_ratio;
                value[j+1]=temp_value;
                weight[j+1]=temp_weight;
            }
        }
    }
}
 

void frac_knapsack(int value[], int weight[], float ratio[], int capacity,int n){
    float fprofit=0;
    int fweight=0;
    for(int i=0;i<n;i++){
        if(fweight+weight[i]<capacity){
            fprofit=fprofit+value[i];
            fweight=fweight+weight[i];
        }
         else{
            float fraction=(float) (capacity-fweight)/weight[i];
            fprofit=fprofit+(fraction*value[i]);
            break;
        }
    }
    printf("Final weight= %d\n", fweight+(capacity-fweight)); //fweight+space left
    printf("Final profit= %f", fprofit);
}
 

 

char main(){
  int n;
  printf("Enter number of inputs:");
  scanf("%d",&n);
  int value[n],weight[n],capacity;
  float ratio[n];

  printf("Enter values of element accordingly:");
  for(int i=0;i<n;i++){
    scanf("%d",&value[i]);
  }
  printf("Enter weights of element accordingly:");
  for(int i=0;i<n;i++){
    scanf("%d",&weight[i]);
  }
  printf("Enter capacity of Knapsack:");
  scanf("%d",&capacity);


  for(int i=0;i<n;i++){
    ratio[i]=(float) value[i]/weight[i];
  }
 

  bubble_sort(value,weight,ratio,n);
  frac_knapsack(value,weight,ratio,capacity,n);
 

 


  return 'c';
}
