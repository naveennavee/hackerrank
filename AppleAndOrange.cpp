#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int apples[m],oranges[n];
    int cfa=0,cfo=0;
    
    for(int i=0;i<m;i++){
        cin>>apples[i];
        apples[i]+=a;
        if(apples[i]>=s && apples[i]<=t){
            cfa+=1;
        }
        
    } 
    for(int x=0;x<n;x++){
        cin>>oranges[x];
        oranges[x]+=b;
        if(oranges[x]>=s && oranges[x]<=t){
            cfo+=1;
        }       
    }
    cout<<cfa<<"\n";
    cout<<cfo;
    
}
