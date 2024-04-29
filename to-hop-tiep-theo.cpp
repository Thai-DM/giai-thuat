#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int d=0;
		int a[k];
		int b[100]={0};
		for(int i=1;i<=k;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		int i=k;
		while(i>0 && a[i]==n-k+i){
			i--;
		}
		if(i<=0){
			for(int j=1;j<=k;j++){
				a[j]=j;
			}
			cout<<k;
		}
		else{
			a[i]++;
			for(int j=i+1;j<=k;j++){
				a[j]=a[j-1]+1;
				break;
			}
			for(int i=1;i<=k;i++){
				if(b[a[i]]==0){
					d++;
				}
			}
			cout<<d;
		} 
		cout<<endl;
	}
}
