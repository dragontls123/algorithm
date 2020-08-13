#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n,cnt;
int arr[30][30];
bool visited[30][30];
vector <int> v;
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
int answer[100];

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
            cnt++;
            queue<pair<int,int>> q;
            visited[i][j]=1;
            q.push({i,j});
            int area=0;
            while(!q.empty()){
                area++;
                auto cur=q.front();
                q.pop();
                
                for(int i=0;i<4;i++){
                    int newx=cur.first+dx[i];
                    int newy=cur.second+dy[i];
                    if(newx<0 || newy<0 || newx>=n || newy>=n)continue;
                    if(visited[newx][newy] || arr[newx][newy]==0)continue;
                    
                    visited[newx][newy]=1;
                    
                    q.push({newx,newy});
            }
            
           
            }
             v.push_back(area);
        }
    }
    sort(v.begin(),v.end());
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%d\n",v[i]);
    }
}
