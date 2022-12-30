#include<stdio.h>
int main(){
    int a[10],b[10],c[10],i,j,flag,k=0,n1,n2;
    printf("Enter the size of set 1 : ");
    scanf("%d",&n1);
    printf("Enter the elements : ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set 2 : ");
    scanf("%d",&n2);
    printf("Enter the elements : ");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        flag=0;
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
    
}