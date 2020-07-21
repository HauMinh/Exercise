#include <iostream>
using namespace std;

int x[100],n,D[100],A[100];
void Xuat(int x[], int n){
	if(n>0){
		Xuat(x,n-1);
		cout<<x[n];
	}else cout<<"\n";
}
void KhoiTao(){
	for(int i=1; i<=n; i++){
		D[i]=0;
	}
}
void HoanVi(int i){
	for(int j = 1; j<=n; j++){
		if(D[j]==0){
			x[i]=j;
			D[j]=1;
			if(i==n){
				Xuat(x,n);
			}else HoanVi(i+1);
			D[j]=0;
		}
	}
}
int main(){
	cout<<"Nhap so phan tu: ";
	cin>>n;
	KhoiTao();
	HoanVi(1);
}
 	
