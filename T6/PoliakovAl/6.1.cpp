// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//перевод из 10ой в 2ую

#include "stdafx.h"
#include <stack> 
#include <iostream> 

using namespace std;
stack <int> st;
	
int main()
{
	int a, b = 0;
	cin >> a;
	while (a >= 2) {
		b = a / 2;
		st.push(a % 2);
		a = b;
	}
	cout << "1 ";
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	getchar();
	getchar();
    return 0;
}

