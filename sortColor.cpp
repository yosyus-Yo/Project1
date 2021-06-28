#include <stdio.h>
#include <array>

using std::array;
void swap(int& a, int& b);

void sortColor(int nums[], int nums_length)
{
	int idx0 = 0;
	int idx2 = nums_length -1;
	int i = 0;

	while (i <= idx2)
	{
		if (nums[i] == 0)
		{
			swap(nums[i], nums[idx0]);
			idx0++;
			i++;
		}
		else if (nums[i] == 2) 
		{
			swap(nums[i], nums[idx2]);
			idx2++;
		}
		else
		{
			i++;
		}
	}
}

void swap(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int arr[9] = { 0, 1, 2, 0, 2, 2, 1, 1, 0 };
	int arr_legth = sizeof arr / sizeof arr[0];
	sortColor(arr, arr_legth);
}