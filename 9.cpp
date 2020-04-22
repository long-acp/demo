#include<iostream>

using namespace std;

void InKQ(int a[],int n)
{
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}

int main()
{
	int t,n;
	bool check[10],temp;
	int a[10];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			a[i]=0;
			check[i]=true;
		}
	    temp=true;
		while(temp)
		{
			InKQ(a,n);
			int j=n;
			while(j>0&&check[j]==false)
			{
				check[j]=true;
				j--;
			}
			if(j>0)
			{
				if(a[j]==0) a[j]=1;
				else a[j]=0;
				check[j]=false; 
			}
			else temp=false;
		}
		cout<<endl;
	}
	
	

}

