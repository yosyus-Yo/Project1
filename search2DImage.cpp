#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
	int m = matrix.size();
	int n = matrix[0].size();
	int low = 0;
	int high = n - 1;
	while (low < high)
	{
		int mid = low + (high - low + 1) / 2;
		if (matrix[mid][0] <= target)
			low = mid;
		else
			high = mid - 1;

	}
	int rlow = 0;
	int rhigh = m - 1;
	int ans = 0;
	while (rlow <= rhigh) {
		int mid = rlow + (rhigh - rlow) / 2;
		if (matrix[low][mid] == target) {
			ans = 1;
			break;
		}
		else if (matrix[low][mid] < target)rlow = mid + 1;
		else rhigh = mid - 1;
	}
	return ans;
}