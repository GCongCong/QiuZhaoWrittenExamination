//1. 有1,5,10,50,100元,分别有A,B,C,D,E张纸币,编程实现支付K元需要最少多少张纸币？
//1.
int Min(vector<int>& coin,vector<int>& num ,int total)
{
	
	int count=0;
	for(int i=num.size()-1;i>=0;i--)
	{
		int temp=total/coin[i];
		while(temp>0)
		{
			if(num[i]>0)
			{
				total-=coin[i];
				count++;
				temp=total/coin[i];
				num[i]-=1;
			}
		}
	}
	if(total==0)
		return count;
	else
		return -1;
}
int main()
{
	vector<int> coin;
	coin.push_back(1);
	coin.push_back(5);
	coin.push_back(10);
	coin.push_back(50);
	coin.push_back(100);
	std::vector<int> num;
	for(int i=0;i<5;i++)
	{
		int temp=0;
		std::cin>>temp;
		num.push_back(temp);
	}
	int total=0;
	cin>>total;
	std::cout<<Min(coin,num ,total);
}
