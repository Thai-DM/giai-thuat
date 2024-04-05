#include<iostream>
#include<iomanip>
using namespace std;
bool ok=true;
int a[100],n,k;
void khoitao(){
	int i;
	cin>>n;
	for(i=1;i<=n;i++){
		a[i]=i;
	}
}
void inra(){
	int i;
	cout<<""<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i]<<setw(3);
	}
}
void nhiphan(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]){
		i--;	
	}
	if(i>0){
		int k=n;
		while(a[i]>a[k]){
			k--;
		}
		int t=a[k];
		a[k]=a[i];
		a[i]=t;
		int l=i+1,s=n;
		while(l<s){
			int u=a[l];
			a[l]=a[s];
			a[s]=u;
			l++;s--;
		}
	}
	else{
		ok=false;
	}
}
int main(){
	khoitao();
	while(ok){
		inra();
		nhiphan();
	}
}
