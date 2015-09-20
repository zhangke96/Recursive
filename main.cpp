#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int FindMax(int A[],int length)
{
	if(length==1)
		return A[0];
	int a=A[0];
	int b=FindMax(A+1,length-1);
	return a>b?a:b;
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;++i)
		cin>>A[i];
	cout<<FindMax(A,n)<<endl;
	return 0;
}
