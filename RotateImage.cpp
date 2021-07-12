#include<iostream>
#include<vector>

using namespace std;

void RotateImage(vector<vector<int>> &matrix)
{
    int N = matrix.size();

    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N / 2; ++j) {
            swap(matrix[i][j], matrix[i][N - j - 1]);
        }
    }
}