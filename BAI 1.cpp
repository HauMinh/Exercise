#include<iostream>
using namespace std;
int x[100],n;

 void xuat(int x[], int n ){
 	if(n>0){
 	xuat(x,n-1);
 	cout<<x[n];
	 }
 	else cout<<"\n";
 	}
 	 void nhiphan(int i){
 	for(int j=0;j<=1;j++)
 	{
 		x[i]=j;
 		 if(i==n)
 		 xuat(x,n);
 		   else nhiphan(i+1);
 		   }
 	 }
int main()
{ int i;
    cout<<"Nhap n: ";
	cin>>n;
    nhiphan(i);
    xuat(x,n);
    
	
}
