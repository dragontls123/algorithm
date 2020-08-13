#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,cnt;
int arr[30][30];
bool visited[30][30];
vector <int> v;
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
int answer[100];
int dfs(int x,int y){
    int ret=1;
    visited[x][y]=1;
    
    for(int i=0;i<4;i++){
        
        int newx=x+dx[i];
        int newy=y+dy[i];
        if(newx<0 || newy<0 || newx>=n || newy>=n)continue;
        if(visited[newx][newy] || arr[newx][newy]==0)continue;
        
        ret+=dfs(newx,newy);
        
    }
    return ret;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(visited[i][j] || arr[i][j]==0)continue;
            
            //answer[cnt++]=dfs(i,j);
            v.push_back(dfs(i,j));
        }
    }
    //printf("%d\n",cnt);
    //for(int i=0;i<cnt;i++){
    //    printf("%d\n",answer[i]);    
    //}
    sort(v.begin(),v.end());
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%d\n",v[i]);
    }
}
