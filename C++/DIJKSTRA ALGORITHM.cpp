#include<bits/stdc++.h>
using namespace std;
#define v 6 
#define INFINITE 9999

void dijkstra_algorithm(int weight[v][v],int startvertex)
{
    int cost[v][v],distance[v],visited[v],parent[v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(weight[i][j]==0)
                cost[i][j]=INFINITE;
            else
                cost[i][j]=weight[i][j];
        }
    }
    for(int i=0;i<v;i++) 
     {
      distance[i]=cost[startvertex][i];
      parent[i]=startvertex;
      visited[i]=0;
    }
    distance[startvertex]=0;
    visited[startvertex]=1;
    int count=1,minimum_distance,nextvertex;
    while(count<v-1)
    {
        minimum_distance=INFINITE;
        for(int i=0;i<v;i++)
        {
            if(distance[i]<minimum_distance && visited[i]==0) 
            {
                minimum_distance=distance[i];
                nextvertex=i;
            }
        }
        visited[nextvertex]=1;
        for(int i=0;i<v;i++)
        {
            if(visited[i]==0)
            {
                if(minimum_distance+cost[nextvertex][i]<distance[i]) 
                {
                    distance[i]=minimum_distance+cost[nextvertex][i];
                    parent[i]=nextvertex;
                }
            }
        }
        count++;
    }
    for(int i=0;i<v;i++)
    {
        if(i!=startvertex) 
        {
            cout<<"\nDistance of vertex "<<i<<" is = "<<distance[i];
            cout<<"\nPath is = "<<i;
            int j=i;
            do 
            {
                j=parent[j];
                cout<<"<-"<<j;
            }while(j!=startvertex);
        }
    }
    
}

int main()
{

    int weight[v][v];
    cout<<"\nEnter the weight matrix "<<endl;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>weight[i][j];
        }
    }
    int startvertex;
    cout<<"Enter the starting vertex:";
    cin>>startvertex;
    dijkstra_algorithm(weight,startvertex);
    return 0;
}
