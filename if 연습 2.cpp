#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "숫자를 입력하시오>>";
	cin >> x;
	if (x > 10)
		cout << x << "는 10보다 크다.\n";
	else {
		if (x < 10)
			cout << x << "는 10보다 작다\n";// 블록을 설치해서 이중 조건문을 만듬 else if와 똑같음
		else
			cout << x << "는 10이다\n";
	}
	return 0;
}

