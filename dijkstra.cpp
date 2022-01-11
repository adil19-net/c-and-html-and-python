//Implementation of Dijkstra Algorithm using adjacency matrix
//Name:Adil Vinayak
//SID:20103034
//Branch:CSE
#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<vector<int>> &graph,int u,int v,int e){//function to create an edge between vertices u and v of length e.
    graph[u][v]=e;//undirected graph
    graph[v][u]=e;
}

int min_distance_vertex(int dist[],bool SPT[],int n){//used to find the index corresponding to the minimum value in dist array
    int min_value=INT_MAX,min_index;//which is not in SPT(Shortest Path Tree) array.
    for(int i=0;i<n;i++){
        if((SPT[i]==false) && (dist[i]<=min_value)){//
            min_value=dist[i];
            min_index=i;
        }
    }
    return min_index;
}

void dijkstra(vector<vector<int>> &graph,int root){//function to find minimum distance of all vertices from root vertex.
    int n=graph.size();
    int dist[n];//array to hold distance of all the vertices from root vertex(at index i is dist of i from root) 
    bool SPT[n]={false};//array to define which vertices essentially are part of Shortest Path Tree. 
    for(int i=0;i<n;i++)//defining all elements of dist array as INT_MAX 
        dist[i] = INT_MAX;
    dist[root]=0;//distance of root from itself is 0.
    for(int i=0;i<n-1;i++){
        int m=min_distance_vertex(dist,SPT,n);
        SPT[m]=true;//adding m to SPT effectively.
        for(int j=0;j<n;j++){//update dist[j] when there is an edge from m to j, SPT[j]==false and dist[j] is greater than dist[m]+length of edge from m to j.
            if((graph[m][j]!=0) && (!SPT[j]) && (dist[m]!=INT_MAX) && (dist[m]+graph[m][j]<dist[j])){
                dist[j]=dist[m]+graph[m][j];
            }
        }
    }
    cout<<"The distance of the vertices from the root vertex: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Vertex "<<i<<": "<<dist[i]<<endl;//printing the distance of the vertices from the root vertex.
    }
}


int main(){
    int n=9;//n=number of vertices in the graph(from 0 to 8)
    vector<vector<int>> graph(n,vector<int>(n,0));//2-D vector n*n with initial value 0 for all its elements.
    //adding edges in graph
    add_edge(graph, 0, 1, 4);
    add_edge(graph, 0, 7, 8);
    add_edge(graph, 1, 2, 8);
    add_edge(graph, 1, 7, 11);
    add_edge(graph, 2, 3, 7);
    add_edge(graph, 2, 8, 2);
    add_edge(graph, 2, 5, 4);
    add_edge(graph, 3, 4, 9);
    add_edge(graph, 3, 5, 14);
    add_edge(graph, 4, 5, 10);
    add_edge(graph, 5, 6, 2);
    add_edge(graph, 6, 7, 1);
    add_edge(graph, 6, 8, 6);
    add_edge(graph, 7, 8, 7);
    cout<<"Enter root vertex: ";
    int root;//root vetex
    cin>>root;
    dijkstra(graph,root);//calling dijkstra function to print min distances of root from all vertices.
}