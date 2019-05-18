#include<stdio.h>
int main(){
    int i,value,n,item,pos;
    printf("Array size : ");
    scanf("%d",&n);
    int LA[n];
    int j = n;
    //linear array
    printf("Give values of every index : \n");
    for(i=0;i<n;i++){
        scanf("%d",&LA[i]);
    }
    printf("Linear Array : ");
    for(i=0;i<n;i++){
        printf("%d ",LA[i]);
    }
    //inserting
    printf("\nEnter the position to insert new item : ");
    scanf("%d",&pos);
    printf("\nEnter the item to insert : ");
    scanf("%d",&item);
    for(j=n;j>=pos;j--){
        LA[j+1] = LA[j];
    }
    LA[pos] = item;
    n++;

    printf("\nLinear Array after insert : ");
    for(i=1;i<n;i++){
        printf("%d ",LA[i]);
    }
    return 0;


}
