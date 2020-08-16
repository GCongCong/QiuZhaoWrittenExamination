#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
# include<set>
using namespace std;

vector <int> divingBoard(int a, int b, int k) 
{
	vector<int>res;
	set<int>s;
	if(k==0)
    {
        return res;
	}
	for(int i=0;i<=k;i++)
	{
		int t=a*i+b*(k-i);
		s.insert(t);
	}
	for(set<int>::iterator<int> it=s.begin();it!=s.end();it++)
	{
		res.push_back(*it);
	}
	return res;
}
/*

vector <int> divingBoard(int a, int b, int k) 
{
	vector<int>res;
	    if(k==0)
     {
         return res;
     }
	int tmp[100000]={0};
	for(int i=0;i<=k;i++)
	{
		int t=a*i+b*(k-i);
		if(tmp[t]==0)
		{
			tmp[t]=1;
		}
	}
	for(int i=0;i<100000;i++)
	{
		if(tmp[i]==1)
		{
			res.push_back(i);
		}
	}
	return res;

}*/
int main()
{
    vector < int > res;

    int _a;
    cin >> _a;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');


    int _b;
    cin >> _b;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');


    int _k;
    cin >> _k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    

    res = divingBoard(_a, _b, _k);
	cout<<"[";
	int i=1;
    for(int res_i=0; res_i < res.size(); res_i++) {
    	 cout<<res[res_i];
		 if(i<res.size())
		 {
			 cout<<",";
			 i++;
		 }
    }
	cout<<"]";
    
    return 0;
}
/*int main()
{
	  vector < int > res;
	  int a,b,k;
	  cin >>a>>b>>k;
	  res=divingBoard(a,b,k);
	  for(int i=0;i<res.size();i++)
	  {
		  cout<<"["<<res[i]<<",";
	  }
}*/