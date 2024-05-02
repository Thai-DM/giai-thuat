#include<iostream>
#define MAX 20
using namespace std;
int n,j=0;
int Bool[MAX] = {0};
int A[MAX],b[MAX];
bool check()
{
    for (int i = 1; i <= n; i++){
    	if (b[i] != A[i]){
        	return 0;
		}
	}
    return 1;
}
void Try(int k) {
	for (int i = 1; i <= n; i++) {
		if (!Bool[i]) {
			A[k] = i; 
			Bool[i] = 1;
			if (k == n){
				j++;
				if(check()==1){
					cout<<j;
					break;
				}
			}
			else{
				Try(k + 1);
			}	
			Bool[i] = 0;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int p=1;p<=n;p++){
			cin>>b[p];
		}
		Try(1);
		cout<<endl;
		j=0;
		for(int l=1;l<=n;l++){
			A[l]=0;
			Bool[l]=0;
		}
	}
}
