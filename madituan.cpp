#include <bits/stdc++.h>
using namespace std;
int n,a[10][10]={},h[8]={2,1,-1,-2,-2,-1,1,2},c[8]={1,2,2,1,-1,-2,-2,-1},ok=0;
void Try(int xx,int x,int y){
	if(ok==1) return;
	for(int i=0;i<8;i++){
		int e=x+h[i],f=y+c[i];
		if(e>=1&&e<=n&&f>=1&&f<=n&&a[e][f]==0){
			a[e][f]=xx;
			if(xx<n*n){
				Try(xx+1,e,f);
			}
			else{
				for(int j=1;j<=n;j++){
					for(int k=1;k<=n;k++) cout<<a[j][k]<<" ";
					cout<<endl;
				}
				ok=1;
			}
			a[e][f]=0;
		}
	}
}
int main(){
	int x,y;
	cin>>n>>x>>y;
	a[x][y]=1;
	Try(2,x,y);
}
