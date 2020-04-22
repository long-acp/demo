#include<bits/stdc++.h>

using namespace std;

bool check;

string nextbin(string s)
{
	int j=s.size()-1;
	while(j>=0&&s[j]=='B')
	{
		s[j]='A';
		j--;
	}
	if(j>=0) s[j]='B';
	else check=false;
	return s;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		check=true;
		string s;
		for(int i=0;i<n;i++) s.push_back('A');
		while(check)
		{
			cout<<s<<" ";
			s=nextbin(s);
			
		}
		cout<<endl;
		
	}

}

