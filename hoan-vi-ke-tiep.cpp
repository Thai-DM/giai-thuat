#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int p=n-1;
		int o=a[n-1];
		while(1){
			if(a[p]>a[p-1]){
				int u=a[p];
				a[p]=a[p-1];
				a[p-1]=u;
				break;
			}
			p--;
		}
		if(p>0){
			for(int i=0;i<n;i++){
				cout<<a[i]<<" ";
			}	
		}
		else{
			for(int i=n-1;i>0;i--){
				cout<<a[i]<<" ";
			}
			cout<<o;
		}
		cout<<endl;
	}
}
