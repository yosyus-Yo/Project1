#include<iostream>
#include<tuple>

void selectionSort(int arr[], int size) 
{ 
	for (int i = 0; i < size - 1; i++) 
	{ 
		for (int j = i + 1; j < size; j++) 
		{ 
			if (arr[i] > arr[j]) 
			{ 
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			} 
		} 
	} 
}

std::tuple<int, int> Sum(int nums[], int nums_size, int target) 
{
	selectionSort(nums, nums_size);
	for (int i = 0; i < nums_size; i++) 
	{
		for (int j = 0; j < nums_size; j++)
		{
			int temp = nums[i] + nums[j];
			if (temp = target)
			{
				int arr[] = {i, j};
				return std::tuple<int, int>(i, j);
			}
		}
	}
}
//추가해버리기