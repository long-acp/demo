#include<bits/stdc++.h>

using namespace std;

int n,k,x[10];
bool check;

void next_division()
{
	int i=k,j,R,S,D;
	while(i>0&&x[i]==1) i--;
	if(i>0)
	{
		x[i]=x[i]-1;
		D=k-i+1;
		R = D/x[i];
		S=D%x[i];
		k=i;
		if(R>0)
		{
			for(j=i+1;j<=i+R;j++)
				x[j]=x[i];
			k=k+R;
		}
		if(S>0)
		{
			k=k+1;
			x[k]=S;
		}
	}
	else check=false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=1,x[k]=n;
		check=true;
		
		
		while(check)
		{
			cout<<"(";
			for(int i=1;i<k;i++) cout<<x[i]<<" ";
			cout<<x[k]<<") ";
			next_division();
		}
		cout<<endl;
	}
	return 0;
}

