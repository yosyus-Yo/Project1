#include <stdio.h>
#include <array>
void MergeSort(int nums1[], int nums2[], int m, int n, int nums1_length, int nums2_length)
{
	int num1Idx = m - 1; //배열의 마지막 숫자(0제외)ex) {1, 3, 5, 0, 0, 0}일경우 m은 배열속 5의 순서값
	int num2Idx = n - 1; //배열의 마지막 숫자 위와 동일
	int wIdx = nums1_length - 1; //배열의크기

	if (num2Idx < 0) //num2의 숫자가 하나도 없으므로 합병할 필요 없으므로 종료
	{
		return;
	}
	while (0 <= num1Idx && 0 <= num2Idx) //두 배열에서 큰값을 골라 정렬, --하면서 배열의 끝부터 정렬
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