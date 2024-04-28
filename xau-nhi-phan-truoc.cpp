#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i;
		for(i=s.length()-1;i>=0;i--){
			if(s[i]=='1'){
				s[i]='0';
				break;
			}
		}
		for(int j=i+1;j<s.length();j++){
			s[j]='1';
		}
		for(i=0;i<s.length();i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
}
