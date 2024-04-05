#include<iostream>
#include<iomanip>
using namespace std;
bool ok=true;
int a[100],n;
void khoitao(){
	int i;
	cin>>n;
	for(i=1;i<=n;i++){
		a[i]=0;
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
	int i;
	i=n;
	while(i>0 && a[i]){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
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
