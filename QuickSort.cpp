void quickSort(int[] nums, int left, int right) //������
{
	if (left < right)
	{
		int pivot = partition(nums, left, right);
		quickSort(nums, left, pivot - 1);
		quickSort(nums, pivot + 1, right);
	}
}
int search(int[] nums, int target) // ���̳ʸ� ��ġ
{
	int left = 0;
	int right = nums.length - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2; //�Ǻ��� ��ü �迭�� ��� ��
		if (nums[pivot] == target) //���� ���� ��� ����
		{
			return pivot
		}
		else if (nums[pivot] < target) //Ÿ���� Ŭ��� left�� ���� �Ǻ� +1
		{
			left = pivot + 1;
		}
		else // target�� �Ǻ����� ������� right���� �Ǻ� + 1
		{
			right = pivot + 1;
		}
	}
}