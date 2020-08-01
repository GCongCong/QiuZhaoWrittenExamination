//4. ×Ö·û´®×ªÎªÊý×Öatoi
int atio(string s)
{
	if(s.size()==0)
		return 0;
	bool flag=false;
	int res=0;
	int temp=0;
	int index=0;
	while(s[index]==' ')
		index++;
	if(s[index]=='-' || s[index]=='+')
	{
		if(s[index]=='-')
		{
			flag=true;
		}
		index++;
	}
	for(;index<s.size();index++)
	{
		if(isdigit(s[index]))
		{
			temp=s[index]-'0';
			if(res>INT_MAX/10 || (res==INT_MAX/10 &&temp>7))
			{
				if(flag)
				{
					return INT_MIN;
				}
				else
					return INT_MAX;
			}
			res=res*10+temp;
		}
		else
		{
			continue;
		}
	}
	if(flag)
	{
		res=0-res;
	}
	return res;
}
int main()
{
	string s;
	cin>>s;
	cout<<atio(s);
}
