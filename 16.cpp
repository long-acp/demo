#include<bits/stdc++.h>

using namespace std;

int n,k;
int a[10][10],b[10],index=0;
vector <int> val;
bool check;

void nextbn()
{
	int i=n-2;
    while(i>=0&&b[i]>b[i+1]) i--;
    if (i==-1) check=false;
	else
	{
		int j=n-1;
		while(b[i]>b[j])  j--;
	    swap(b[i],b[j]);
	    int x=i+1,y=n-1;
	    while(x<y)
		{
	    	swap(b[x],b[y]);
	    	x++;
	    	y--;
		}
	}
}


int main()
{
	
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++) b[i]=i+1;
	check=true;
	while(check)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i][b[i]-1];
		}
		if(sum==k)
		{
			for(int i=0;i<n;i++)
			{
				val.push_back(b[i]);
			}
			index++;
		}
		nextbn();
	}
	cout<<index<<endl;
	for(int i=0;i<val.size();i+=n)
	{
		for(int j=i;j<n+i;j++) cout<<val[j]<<" ";
		cout<<endl;
	}
	

	return 0;
}

