#include<iostream>
#include<iomanip>
using namespace std;
bool ok=true;
int a[100],n,k;
void khoitao(){
	int i;
	cin>>k>>n;
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
	int i;
	i=n;
	while(i>0 && a[i]==k-n+i){
		i--;
	}
	if(i>0){
			a[i]=a[i]+1;
			for(int j=i+1;j<=n;j++){
				a[j]=a[i]+j-i;
			}
		}
		else {
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
