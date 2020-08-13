#include<iostream>
using namespace std;
int giaiThua(int n)
{
	int s=1;
	for(int i=1;i<=n;++i)
		s=s*i;
	return s;
}
int bai1THop(int a,int k)
{
	return giaiThua(a)/(giaiThua(k)*giaiThua(a-k));
}
int bai1CHop(int a,int k)
{
	return giaiThua(a)/giaiThua(a-k);
}
int main()
{
	int n,a,k;
	cout<<"Nhap A: ";
	cin>>a;
	cout<<"Nhap K: ";
	cin>>k;
	cout<<a<<"C"<<k<<"="<<bai1THop(a,k)<<endl;
	cout<<a<<"A"<<k<<"="<<bai1CHop(a,k);
	return 0;
}
