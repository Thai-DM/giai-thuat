#include<iostream>
using namespace std;
int hang_trong[100],cheo_xuoi[100],cheo_nguoc[100];
int loi_giai[100];
int d=0;
int i,q,n;
void try1(int i){
	for(int j=0;j<n;j++){
		if(hang_trong[j]==1&&cheo_xuoi[i-j+n-1]==1&&cheo_nguoc[i+j]==1){
			loi_giai[i]=j;
			hang_trong[j]=0;
			cheo_xuoi[i-j+n-1]=0;
			cheo_nguoc[i+j]=0;
			if(i<n-1){
				try1(i+1);
			}
			else{
				d++;
			}
			hang_trong[j]=1;
			cheo_xuoi[i-j+n-1]=1;
			cheo_nguoc[i+j]=1;
		}
	}
}
int main(){
	cin>>n;
	for(i=0;i<n;i++){
		hang_trong[i]=1;
	}
	for(i=0;i<n*2-1;i++){
		cheo_xuoi[i]=1;
		cheo_nguoc[i]=1;
	}
	try1(0);
	cout<<d;
	return 0;
}

