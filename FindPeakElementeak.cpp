//���� �迭�� ���� ���ں��� ���� ���� ��ũ������ �ε����� ���ϴ� �Լ�
#include<stdio.h>
#include<array>

int findPeakElement(int nums[], int nums_length)
{
	int left = 0;
	int right = nums_length - 1;

	if (nums_length <= 1)//���� �迭�� ũ�Ⱑ 1���� ���ų� ������� 0����
	{
		return 0;
	}
	while (left < right)
	{
		int pivot = (left + right) / 2; //��� �ε�����
		int num = nums[pivot]; //pivot
		int nextNum = nums[pivot + 1]; //pivot ���� ��
		if (num < nextNum)
		{
			left = pivot + 1;
		}
		else
		{
			right = pivot;
		}
	}
	//left = right�϶� while���� ���߹Ƿ� �Ѵ� ������
	return right;
	return left; 
}