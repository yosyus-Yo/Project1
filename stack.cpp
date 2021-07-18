#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s)
{
	pair<char, char>p1 = make_pair('{', '}');
	pair<char, char>p2 = make_pair('[', ']');
	pair<char, char>p3 = make_pair('(', ')');
	stack<char> a;

	for(int i = 0; i < s.length(); i++)
	{
		if (s[i] == p1.first || s[i] == p2.first || s[i] == p3.first)
		{
			a.push(s[i]);
			continue;
		}

		if (p1.second == s[i] || p2.second == s[i] || p3.second == s[i])
		{
			a.pop();
			continue;
		}
		return false;
	}
}