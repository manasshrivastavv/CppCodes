#include<stdio.h>
int main(){
    int i,j;
    int arr[5]={1,5,8,3,2};
    for(i=0;i<5-1;i++){
        for(j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}