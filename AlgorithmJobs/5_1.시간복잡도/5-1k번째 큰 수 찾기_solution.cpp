#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[100010];
int main(){
	int N,k;
	scanf("%d %d",&N,&k);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);	
	}
	sort(arr,arr+N);
	printf("%d",arr[N-k]);
}