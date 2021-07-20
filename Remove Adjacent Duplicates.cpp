#include<iostream>
#include<string>
#include<stack>
using namespace std;
string removeDuplicates(string s) {
	stack<int> a;
	for(int i = 0; i<s.length(); i++)
	{
		if (a.top() = s[i])
			a.pop();
		else
			a.push(s[i]);
	}
}