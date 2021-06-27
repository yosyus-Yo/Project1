//배열에서 한 점을 기준으로 왼쪽과 오른쪽의 합이 같을경우 그 기준이 되는 점이 피봇이되고 리턴값은 그 피봇이 있는 배열의 순서값이 된다.
//어느 한 점에서도 왼쪽과 오른쪽의 합이 같지않을경우 리턴값이 -1이다.
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), right = 0, left = 0;

        for (int i = 0; i < n; i++) right += nums[i]; //피봇 기준 오른쪽의 합

        for (int i = 0; i < n; i++) {
            right -= nums[i];

            if (left == right) // 피봇기준 왼쪽과 오른쪽이 같을경우 피봇리턴
            {
                return i;
            }

            left += nums[i]; // 피봇기준 왼쪽의 합
        }

        return -1; // 둘이 같지 않을경우 -1 리턴
    }
};