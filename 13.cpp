#include<bits/stdc++.h>

using namespace std;
int n,k,a[15]={0};
bool check;

bool checktest()
{
	int x=0,temp=0;
	for(int i=0;i<n;i++)
	{
		x=0;
		for(int j=i;j<k+i&&j<n;j++)
		{
			if(a[j]==0) x++;
		}
		if(x==k) temp++;
	}
	if(temp==1) return 1;
	else return 0;
}

void InKQ()
{
	if(checktest())
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]==0) cout<<'A';
			else cout<<'B';
		}
		cout<<endl;
	}
	
}

void nextbn()
{
	int j=n-1;
	while(j>0&&a[j]==1)
	{
		a[j]=0;
		j--;
	}
	if(j==0&&a[j]==1) check=false;
	else a[j]=1;
}


int main()
{
	cin>>n>>k;
	check=true;
	int val=0;
	while(check)
	{
		nextbn();
		if(checktest()) val++;
	}
	cout<<val<<endl;
	for(int i=0;i<n;i++) a[i]=0;
	check=true;
	while(check)
	{
		nextbn();
		InKQ();
	}
	

	

	return 0;
}

