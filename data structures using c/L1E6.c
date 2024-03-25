#include<stdio.h>
#include<stdlib.h>
void checkandstore(int array1[],int s1,int array2[],int s2,int bit[]){
    for(int i=0;i<s1;i++){
        int found=0;
        for(int j=0;j<s2;j++){
                if(array1[i]==array2[j]){
                found=1;
                break;
                }
        }
        bit[i]=found;
    }
}
void unioncheck(int array1[],int s1,int array2[],int s2,int union1[]){
    for(int i=0;i<s1;i++){
        union1[i]=(array1[i] || array2[i]);
    }
}
void intersectcheck(int array1[],int s1,int array2[],int s2,int intersect[]){
    for(int i=0;i<s1;i++){
        intersect[i]=(array1[i] && array2[i]);
    }
}
void diffcheck(int array1[],int s1,int array2[],int s2,int diff[]){
    for(int i=0;i<s1;i++){
        diff[i]=(array1[i] && !array2[i]);
    }
}
int main(){
    int s1,s2,s3,i;
    printf("enter the size of universal set:");
    scanf("%d",&s1);
    int array1[s1];
    printf("enter the elements of universal set:");
    for(i=0;i<s1;i++){
        scanf("%d",&array1[i]);
    }
    printf("enter the size of first subset:");
    scanf("%d",&s2);
    int array2[s2];
    printf("enter the elements of firstset:");
    for(i=0;i<s2;i++){
        scanf("%d",&array2[i]);
    }
    printf("enter the size of second subset:");
    scanf("%d",&s3);
    int array3[s3];
    printf("enter the elements of secondset:");
    for(i=0;i<s3;i++){
        scanf("%d",&array3[i]);
    }
    int bit1[s1];
    int bit2[s1];
    int union1[s1];
    int intersect[s1];
    int diff[s1];

    checkandstore(array1,s1,array2,s2,bit1);
    checkandstore(array1,s1,array3,s3,bit2);
    unioncheck(bit1,s1,bit2,s2,union1);
    intersectcheck(bit1,s1,bit2,s2,intersect);
    diffcheck(bit1,s1,bit2,s2,diff);

    printf("universal set:");
    printf("{");
    for(i=0;i<s1;i++){
        printf("%d",array1[i]);
        printf(" ");
    }
    printf("}");
    printf("\nfirst subset:");
    printf("\n{");
    for(i=0;i<s2;i++){
        printf("%d",array2[i]);
        printf(" ");
    }
    printf("}");
    printf("\nbirstring:");
    printf("\n[");
    for(i=0;i<s1;i++){
        printf("%d",bit1[i]);
        printf(" ");
    }
    printf("]");
    printf("\nsecond subset:");
    printf("\n{");
    for(i=0;i<s3;i++){
        printf("%d",array3[i]);
        printf(" ");
    }
    printf("}");
    printf("\nbirstring:");
    printf("\n[");
    for(i=0;i<s1;i++){
        printf("%d",bit2[i]);
        printf(" ");
    }
    printf("]");
    printf("\nunion bitstring:");
    printf("\n[");
    for(i=0;i<s1;i++){
        printf("%d",union1[i]);
        printf(" ");
    }
    printf("]");
    printf("\nunion set:");
    printf("\n{");
    for(i=0;i<s1;i++){
        if(union1[i]==1){
            printf("%d",array1[i]);
            printf(" ");
        }
    }
    printf("}");
    printf("\nintersect bitstring:");
    printf("\n[");
    for(i=0;i<s1;i++){
        printf("%d",intersect[i]);
        printf(" ");
    }
    printf("]");
    printf("\nintersect set:");
    printf("\n{");
    for(i=0;i<s1;i++){
        if(intersect[i]==1){
            printf("%d",array1[i]);
            printf(" ");
        }
    }
    printf("}");
    printf("\ndifference bitstring:");
    printf("\n[");
    for(i=0;i<s1;i++){
        printf("%d",diff[i]);
        printf(" ");
    }
    printf("]");
    printf("\ndifference set:");
    printf("\n{");
    for(i=0;i<s1;i++){
        if(diff[i]==1){
            printf("%d",array1[i]);
            printf(" ");
        }
    }
    printf("}");
return 0;
}