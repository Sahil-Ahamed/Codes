void quick(int arr[], int start, int stop){
   int p=start;
   int q=stop;
   int pivot=start, temp;
   if(start < stop){
      while(p < q){
         while(arr[p] <= arr[pivot] && p < stop){
            p++;
         }
         while(arr[q] > arr[pivot]){
            q--;
         }
         if(p < q){
            temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
         }
      }
      temp = arr[pivot];
      arr[pivot] = arr[q];
      arr[q] = temp;
      quick(arr, start, q-1);
      quick(arr, q+1, stop);
   }
}

char main(){
   int size;
   printf("Enter size of array:");
   scanf("%d",&size);
   int ar[size];
   printf("Enter the elements:");
   for(int i=0;i<size;i++){
       scanf("%d",&ar[i]);
   }
   int start=0, stop =size-1;
   quick(ar,start,stop);
   printf("After sorting:");
   for(int i=0;i<size;i++){
      printf("  %d",ar[i]);
   }
      

return 'c';
}
