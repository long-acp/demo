#include<bits/stdc++.h>

using namespace std;

string nextbin(string s)
{
	int j=s.size()-1;
	while(j>=0&&s[j]!='0')
	{
		s[j]='0';
		j--;
	}
	if(s[j]=='0') s[j]='1';
	return s;
	
}

int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		s=nextbin(s);
		cout<<s<<endl;
	}

}

