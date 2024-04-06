#include <iostream>
using namespace std;
void sapxep(int n,int a[100]){
    for(int i=0;i<n - 1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int Try1(int n,int s,int a[100]){
    int d=0;
    for(int i=0;i<n;i++){
        d=d+s/a[i];
        s=s-(s/a[i])*a[i];
    }
    if(s==0){
         return d;
    }
    else return -1;
}
int main()
{
    int n,s;
    int a[n];
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxep(n,a);
    cout<<Try1(n,s,a);
    return 0;
}
