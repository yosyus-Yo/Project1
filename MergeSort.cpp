#include <stdio.h>
#include <array>
void MergeSort(int nums1[], int nums2[], int m, int n, int nums1_length, int nums2_length)
{
	int num1Idx = m - 1; //�迭�� ������ ����(0����)ex) {1, 3, 5, 0, 0, 0}�ϰ�� m�� �迭�� 5�� ������
	int num2Idx = n - 1; //�迭�� ������ ���� ���� ����
	int wIdx = nums1_length - 1; //�迭��ũ��

	if (num2Idx < 0) //num2�� ���ڰ� �ϳ��� �����Ƿ� �պ��� �ʿ� �����Ƿ� ����
	{
		return;
	}
	while (0 <= num1Idx && 0 <= num2Idx) //�� �迭���� ū���� ��� ����, --�ϸ鼭 �迭�� ������ ����
	{
		int num1 = nums1[num1Idx];
		int num2 = nums2[num2Idx];
		if (num2 <= num1)
		{
			int num = num1;
			nums1[wIdx] = num;
			num1Idx--;
			wIdx--;
		}
		else
		{
			int num = num2;
			nums1[wIdx] = num;
			num2Idx--;
			wIdx--;
		}
	}
	while (0 <= num2Idx)
	{
		nums1[wIdx] = nums2[num2Idx];
		num2Idx--;
		wIdx--;
	}
}