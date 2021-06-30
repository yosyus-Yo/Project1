//숫자 배열중 양쪽 숫자보다 높은 수인 피크숫자의 인덱스를 구하는 함수
#include<stdio.h>
#include<array>

int findPeakElement(int nums[], int nums_length)
{
	int left = 0;
	int right = nums_length - 1;

	if (nums_length <= 1)//받은 배열의 크기가 1보다 같거나 작을경우 0리턴
	{
		return 0;
	}
	while (left < right)
	{
		int pivot = (left + right) / 2; //가운데 인덱스값
		int num = nums[pivot]; //pivot
		int nextNum = nums[pivot + 1]; //pivot 다음 수
		if (num < nextNum)
		{
			left = pivot + 1;
		}
		else
		{
			right = pivot;
		}
	}
	//left = right일때 while문이 멈추므로 둘다 같은값
	return right;
	return left; 
}