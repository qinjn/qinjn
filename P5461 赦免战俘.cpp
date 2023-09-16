#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,u,s;
	cin>>n;
	s=pow(2,n);
	int a[s+1][s+1];
	a[1][1]=1;
	for(i=1;i<=n;i++)
	{
		s=pow(2,i-1);
		for(j=1;j<=s;j++)
		{
			for(u=1;u<=s;u++)
			{
				a[j][u+s]=a[j+s][u]=a[j][u];
				a[j+s][u+s]=0;
			}
		}
	}
	s=pow(2,n);
	for(i=s;i>=1;i--)
	{
		for(j=s;j>=1;j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
