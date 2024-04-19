#include<stdio.h>
int main(){
    int n;
    printf("HOW MANY ELEMENTS TO BE ENTERED?");
    scanf("%d",&n);
    int arr[n],low,high,mid,key;

    printf("ENTER THE ELEMENTS:->");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    printf("THE ELEMENT HAS TO BE SEARCHED:->");
    scanf("%d",&n);
    while(low>high){
        mid=low+high/2;
        if(arr[mid]==key){
            printf("THE KEY IS:->",key);
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        return 0;
}
