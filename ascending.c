#include<stdio.h>                                         //  오름차순정렬
void main()
{
   int arr[]={7,4,9,5,1};
   int i,j,tmp;   
   for(i=0;i<4;i++){
      for(j=i+1;j<5;j++)//하나씩 커지니까 j=i+1
      {
         if(arr[i]>arr[j]){
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
         }
             }         
   }
   printf("오름차순 정렬 :");
   for(i=0;i<5;i++)
      printf("%-5d",arr[i]);
}
