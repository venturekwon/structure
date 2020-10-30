#include <stdio.h>

int BSearch(int arr[],int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;

	while(first <= last)
	{
		mid = (first+last) / 2;

		if(target == arr[mid])
			return mid;
		else
		{
			if(target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	printf("Program will start now!\n");
	int data [] = {1,3,5,7,9,10};
	int data_len = sizeof(data) / sizeof(int);
	int tar, final_target;
	
	printf("Data length is : %d\n", data_len);
	scanf("%d",&tar);
	final_target = BSearch(data,data_len,tar);

	printf("final_target is %d\n",final_target);
}
