// //Selection sort
// #include<stdio.h>
// int main(){
//     int arr[100],temp,n;
//     printf("enter the number of elements in the array:\n");
//     scanf("%d",&n);
    
//     printf("Enter the elements of the array:\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("the array is:\n");
//     for (int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }

//     }
//     printf("\nThe sorted array is:\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//Bubble sort
#include<stdio.h>
int main(){
    int arr[100],temp,n;
    printf("Enter the number of elemensts int the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
