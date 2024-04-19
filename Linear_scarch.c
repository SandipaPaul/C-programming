#include<stdio.h>
int main(){
    int arr[10],key;
    printf("Enter the elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("the element has to be found:");
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            printf("the element is:%d",key);
        }
    return 0;
}
}