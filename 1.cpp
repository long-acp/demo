#include<iostream>
#include<algorithm>

using namespace std;

/*long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}*/

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long c=__gcd(a,b);
		cout<<c<<" "<<a*b/c<<endl;
	}

}

