//3.�������б� [x1, y1, x2, y2] ����ʽ��ʾ������ (x1, y1) Ϊ���½ǵ����꣬(x2, y2) �����Ͻǵ����ꡣ����ཻ�����Ϊ��������������ص�����Ҫ��ȷ���ǣ�ֻ�ڽǻ�߽Ӵ����������β������ص��������������Σ��ж������Ƿ��ص������ؽ���� 
//����˼ά���ҳ��϶������ص������������������϶��ص����ֱ����������ҿ϶������ص���
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
