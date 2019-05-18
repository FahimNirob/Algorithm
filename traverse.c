// page 4.7 : Traversing linear array
#include<stdio.h>
int y =1930;
int main(){
    int Auto[20];
    int k,n,i,j;

    printf("Enter number of cars sold from 1930 to 1940 : \n");
    for(i=0;i<=10;i++){
        scanf("%d",&Auto[i]);
    }
    printf("*****Output*****\n");
    for(i=0;i<=10;i++){
        printf("Year %d = Cars %d\n",y,Auto[i]);
        y++;
    }
    printf("\nYears when cars sold more than 300 : \n\n");
    int y = 1930;
    for(i=0;i<=10;i++){
        if(Auto[i]>=300){
            printf("Year %d = Cars %d\n",y,Auto[i]);
        }
        y++;

    }
    return 0;

}
