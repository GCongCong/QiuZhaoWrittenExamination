# include<iostream>
# include<string>
# include<vector>
using namespace std;


//ÕÒÁãÇ®ÎÊÌâ

int SumC(int n)
{
	if(n==0)
	{
		return 0;
	}
	int res[100];
	res[0]=1;
	res[1]=1;
	res[2]=2;
	for(int i=3;i<=n;i++)
	{
		res[i]=res[i-1]+res[i-2];
	}
	return res[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<SumC(n);
}

# if 0
string  work(string s)
{
	vector<string> vec;
	int countu=0;
	int countr=0;
	string tm="";


	for(int i=0,j=0;i<s.size(),j<s.size();i++)
	{
		if(s[i]==' ' && s[i+1] != ' ')
		{
			for(int k=j;k<i;k++)
			{
				tmp+=s[i];
			}
			vec.push_back(tmp);

		}
		if(s[i]=='u')
		{
			countu+=1;
			i+=2;
		}
	}
}
# endif