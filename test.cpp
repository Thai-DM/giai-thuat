#include<bits/stdc++.h>
using namespace std;
bool ok=true;
char a[100];
int n;
void khoitao(){
	int i;
	cin>>n;
	for(i=0;i<n;i++){
		a[i]='A';
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
	while(i>=0 && a[i]=='B'){
		a[i]='A';
		i--;
	}
	if(i>=0){
		a[i]='B';
	}
	else ok=false;
}
int main(){
	khoitao();
	while(ok){
		inra();
		nhiphan();
	}
}
