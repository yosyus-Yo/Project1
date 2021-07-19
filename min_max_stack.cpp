#include<iostream>
#include<stack>
using namespace std;

stack<int> st;
stack<int> minSt;

void push(int x) {
	st.push(x);
	minSt.push(minSt.empty() ? x : min(minSt.top(), x));
}

void pop() {
	st.pop();
	minSt.pop();
}

int top() {
	return st.top();
}

int getMin() {
	return minSt.top();
}