#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isPalindrome(string s)
{
	string str;
	string str1;
	string str2;
	int len = s.length()/2;
	for (int i = 0; i < s.length(); i++)
	{
		char a = s[i];
		if (65<= s[i] <= 90 && 97<=s[i]<=122)
		{
			str = str + s[i];
		}
	}
	for (int j = 0, int k = str.length() + 1; j < str.length() / 2; j++, k--)
	{
		str1 = str1 + str[j];
		str2 = str2 + str[k];
	}
	if (str1 == str2)
		return true;
	else
		return false;
}