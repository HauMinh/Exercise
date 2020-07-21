#include<iostream>
using namespace std;
int x[100],n;
void xuat(int x[],int n){
	if(n>0){
		xuat(x,n-1);
		cout<<x[n];
	}else cout<<"\n";
}
 void hoanvi_lap(int i)	{
	 	for(int j=1;j<=4;j++){
	 		x[i]=j;
	 		if(i==n)
			 	xuat(x,n);
			else
			hoanvi_lap(i+1);	 
	 }
}
int main(){
	cout<<"Nhap n:";
	cin>>n;
	hoanvi_lap(1);
}


