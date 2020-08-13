#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <string.h>
#include <vector>
using namespace std;
int n,m,check[110],cnt;
vector<int>arr[110];
void dfs(int x){
    if (check[x])return;
    check[x]=1;
    cnt++;
    for(int i=0;i<arr[x].size();i++){
        int y=arr[x][i];
        dfs(y);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1);
    printf("%d",cnt-1);

}