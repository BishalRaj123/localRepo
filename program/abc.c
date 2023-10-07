#include<stdio.h>
int graph[10][10],visit[10],visited[10],n,v,i,j,k,st[10],top;
int main()
{
    int m;
    printf("Enter the no of vertices\n");
    scanf("%d",&n);
    printf("Enter the no of edges\n");
    scanf("%d",&m);
    for(k=1;k<=m;k++)
    {
        printf("Enter edge(v1 v2):");
        scanf("%d%d",&i,&j);
        graph[i][j]=1;
    }
    printf("Enter the starting node\n");
    scanf("%d",&v);
    visited[v]=1;
    k=1;
    printf("DFS traversal is\n");
    printf("%d     ",v);
    while(k<n)
    {
        for(j=n;j>=1;j--)
        {
            if(graph[v][j]==1 && visit[j]!=1 && visited[j]!=1)
            {
                visit[j]=1;
                st[top]=j;
                top++;
            }
        }
        v=st[--top];
        printf("%d   ",v);
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}