#include<bits/stdc++.h>
using namespace std;

// using path compression 
int find_leader(int x){
    if(parent[x]<0)return x;
    parent[x]=find_leader(parent[x]);
}

// merge by size
void merge(int x,int y){
    if((x=find_leader(x))==(y=find_leader(y)))return; // if both have the same leader
    if(par[y]<par[x]) swap(x,y); // in case y has more depth than x
    par[x]+=par[y];
    par[y]=x;
}