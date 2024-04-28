#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		int i=k;
		while(i>0 && a[i]==i){
			i--;
		}
		if(i<=0){
			int x=0;
			for(int j=n-k+1;j<=n;j++){
				a[++x]=j;
			}
		}
		else{
		while (a[i]-1==a[i-1]){
				i--;
			}
		a[i]--;
		for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]-1;
			}
		}
		for(int p=1;p<=k;p++){
			cout<<a[p]<<" ";
		}
		cout<<endl;
	}
}
