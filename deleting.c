#include<stdio.h>
int main(){
    int i,value,n,item,pos;
    printf("Array size : ");
    scanf("%d",&n);
    int LA[n];
    //int j = n;
    //linear array
    printf("Give values of every index : \n");
    for(i=0;i<n;i++){
        scanf("%d",&LA[i]);
    }
    printf("Linear Array : ");
    for(i=0;i<n;i++){
        printf("%d ",LA[i]);
    }
    //deleting
    printf("\nEnter the position of the item to delete : ");
    scanf("%d",&pos);
    int j = LA[pos];
    //LA[pos] = item;
    for(j=pos-1;j<=n-1;j++){
        LA[j] = LA[j+1];
    }
    n--;
    printf("\nLinear array after deleting an item : ");
    for(i=0;i<n;i++){
        printf("%d ",LA[i]);
    }
    return 0;
}
