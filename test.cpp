#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int a[100];
int n,k;
void khoitao(){
	int i;
	cin>>n>>k;
	for(i=0;i<n-k;i++){
		a[i]=0;
	}
	for(i=n-k;i<n;i++){
		a[i]=1;
	}
}
void inra(){
	int i;
	cout<<""<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<setw(3);
	}
}
void nhiphan(){
	int i;
	i=n-1;
	while(i>=0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>=0){
		a[i]=1;
	}
	else ok=false;
}
int main(){
	khoitao();
	while(ok){
		int k=0;
		for(int j=0;j<n;j++){
			if(a[j]==1){
				k++;
			}
		}
		if(k==2){
			inra();
		}
		nhiphan();
	}
}
