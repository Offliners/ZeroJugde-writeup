#include<iostream>

using namespace std;

int main(void)
{
	int nums[4];
	int num;
	
	cin >> num;
	if(num >= 0 && num <= 20)
	{
		for(int j = 0; j < num; j++)
		{
			for(int i = 0; i < 4; i++)
				cin >> nums[i];
			
			if(nums[3] - nums[2] == nums[2] - nums[1])
			{
				for(int k = 0; k < 4; k++)
					cout << nums[k] << " ";
				
				cout << nums[3] + nums[2] - nums[1] << endl;
			}
			else if(nums[2] * nums[2] == nums[1] * nums[3])
			{
				for(int k = 0; k < 4; k++)
					cout << nums[k] << " ";
				
				cout << nums[3] * nums[2] / nums[1] << endl;
			}
			else
				break;
		}
	}
	
	return 0;
}
