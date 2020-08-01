//3.矩形以列表 [x1, y1, x2, y2] 的形式表示，其中 (x1, y1) 为左下角的坐标，(x2, y2) 是右上角的坐标。如果相交的面积为正，则称两矩形重叠。需要明确的是，只在角或边接触的两个矩形不构成重叠。给出两个矩形，判断它们是否重叠并返回结果。 
//反向思维，找出肯定不会重叠的区域，如果不满足则肯定重叠。分别找上下左右肯定不会重叠的
//3.
bool common(std::vector<int>& rec1,std::vector<int>& rec2)
{
	if(rec1.empty() ||rec2.empty())
		return false;
	return !(rec2[2]<=rec1[0]||
		     rec2[0]>=rec1[2]||
			 rec2[3]<=rec1[1]||
			 rec2[1]>=rec1[3]);
}
int main()
{
	std::vector<int> rec1;
	std::vector<int> rec2;
	for(int i=0;i<4;i++)
	{
		int temp=0;
		std::cin>>temp;
		rec1.push_back(temp);
	}
	for(int i=0;i<4;i++)
	{
		int temp=0;
		std::cin>>temp;
		rec2.push_back(temp);
	}
	std::cout<< common(rec1,rec2);
}
