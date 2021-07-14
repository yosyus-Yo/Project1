#include<iostream>
#include<string>

using namespace std;

string addstring(string a, string b) //a가 크다라는 가정
{
	int index_1 = a.length() - 1;
	int index_2 = b.length() - 1;
    int carry = 0;
    string ans;

    while (index_1 > -1 || index_2 > -1) {
        int a_num = (index_1 >= 0) ? a[index_1--] - '0' : 0;
        int b_num = (index_2 >= 0) ? b[index_2--] - '0' : 0;
        int sum = a_num + b_num + carry;

        //> put digit into string
        ans.insert(ans.begin(), (sum % 10) + '0');

        carry = (sum > 9) ? sum / 10 : 0;
    }

    return (carry != 0) ? "1" + ans : ans;
}