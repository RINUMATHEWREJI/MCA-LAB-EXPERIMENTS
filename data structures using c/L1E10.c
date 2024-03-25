#include<stdio.h>
#include<stdlib.h>
int a,b,i,j,u,v,n,ne=1,min,mincost=0;
int cost[10][10],visited[10]={0};
int main()
{
    printf("enter the number of vertices:");
    scanf("%d",&n);
    printf("enter the adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0){
                cost[i][j]=999;
            }
        }
    }
    visited[1]=1;
    printf("\n");
    while(ne<n){
        for(i=1,min=999;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min){
                if(visited[i]!=0){
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
                }
            }
        }
        if(visited[u]==0 || visited[j]==0){
            printf("edge %d:(%d-%d):%d\n",ne++,a,b,min);
            mincost+=min;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nmincost:%d",mincost);
    return 0;
}