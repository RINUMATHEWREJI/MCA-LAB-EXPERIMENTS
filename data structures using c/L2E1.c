#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,a,b,c;
    int array1[100],array2[100],array3[100];
    printf("enter the size of first array:");
    scanf("%d",&a);
    printf("\nenter the elements of first array:");
    for(i=0;i<a;i++){
        scanf("%d",&array1[i]);
    }
    printf("enter the size of second array:");
    scanf("%d",&b);
    printf("\nenter the elements of elements array:");
    for(j=0;j<b;j++){
        scanf("%d",&array2[j]);
    }
    i=j=k=0;
    while(i<a && j<b){
        if(array1[i]<array2[j]){
            array3[k++]=array1[i++];
        }
        else{
            array3[k++]=array2[j++];
        }
    }
    while(i<a){
        array3[k++]=array1[i++];
    }
    while(j<b){
        array3[k++]=array2[j++];
    }
    printf("\nmerged array:");
    for(k=0;k<a+b;k++){
        printf("%d ",array3[k]);
    }

}