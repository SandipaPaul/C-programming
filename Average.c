#include<stdio.h>
int main(){

    int i,n,marks,sum=0;
    float avg;

    printf("Enter the number of students:");
    scanf("%d",&n);

        for(i=1;i<=n;i++){
            printf("Enter the marks :");
            scanf("%d",&marks);

        sum=sum+marks;
    }
    avg=(float)sum/n;
    printf("%.2f",avg);
    return 0;
}