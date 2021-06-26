void quickSort(int[] nums, int left, int right) //퀵정렬
{
	if (left < right)
	{
		int pivot = partition(nums, left, right);
		quickSort(nums, left, pivot - 1);
		quickSort(nums, pivot + 1, right);
	}
}
int search(int[] nums, int target) // 바이너리 서치
{
	int left = 0;
	int right = nums.length - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2; //피봇은 전체 배열의 가운데 값
		if (nums[pivot] == target) //둘이 같을 경우 종료
		{
			return pivot
		}
		else if (nums[pivot] < target) //타겟이 클경우 left의 값은 피봇 +1
		{
			left = pivot + 1;
		}
		else // target이 피봇보다 작을경우 right값은 피봇 + 1
		{
			right = pivot + 1;
		}
	}
}