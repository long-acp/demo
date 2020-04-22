#include<bits/stdc++.h>

using namespace std;

string s;
int n;

string nextbn()
{
	int i,j,n=s.size();
	for(i=n-1;i>0;i--)
	if(s[i]>s[i-1]) break;
    if (i==0) return "BIGGEST";
	for(j=n-1;s[j]<=s[i-1];j--);
 
	swap(s[i-1],s[j]);
	for(j=n-1;i<j;i++,j--) swap(s[i],s[j]);
	return s;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;;
		cout<<n<<" "<<nextbn()<<endl;
	
	}

}

