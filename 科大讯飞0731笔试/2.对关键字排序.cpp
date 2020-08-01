//2. 序列排序，用某种排序方法，对关键字排序
//2.
void show(vector<int>& nums)
{
	for(int i=0;i<nums.size();i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}
int part(vector<int>& nums,int left,int right)
{
	int i=left;
	int j=right;
	int flag=nums[left];
	while(i<j)
	{
		while(nums[j]>flag && i<j)
			j--;
		while(nums[i]<=flag && i<j)
			i++;
		int temp=nums[j];
		nums[j]=nums[i];
		nums[i]=temp;
	}
	nums[left]=nums[i];
	nums[i]=flag;
	return i;
}

void Qsort(vector<int>& nums,int low,int high)
{
	if(nums.size()==0) return;
	
	if(low <= high)
	{
		int mid=part(nums,low,high);
		show(nums);
		Qsort(nums,low,mid-1);
		Qsort(nums,mid+1,high);
	}
}





int main()
{
	int num=0;
	cin>>num;
	vector<int> nums;
	for(int i=0;i<num;i++)
	{
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	Qsort(nums,0,nums.size()-1);
	
}
