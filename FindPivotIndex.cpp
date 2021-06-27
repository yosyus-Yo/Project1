//�迭���� �� ���� �������� ���ʰ� �������� ���� ������� �� ������ �Ǵ� ���� �Ǻ��̵ǰ� ���ϰ��� �� �Ǻ��� �ִ� �迭�� �������� �ȴ�.
//��� �� �������� ���ʰ� �������� ���� ����������� ���ϰ��� -1�̴�.
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), right = 0, left = 0;

        for (int i = 0; i < n; i++) right += nums[i]; //�Ǻ� ���� �������� ��

        for (int i = 0; i < n; i++) {
            right -= nums[i];

            if (left == right) // �Ǻ����� ���ʰ� �������� ������� �Ǻ�����
            {
                return i;
            }

            left += nums[i]; // �Ǻ����� ������ ��
        }

        return -1; // ���� ���� ������� -1 ����
    }
};