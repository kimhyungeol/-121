#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "번호를 입력하시오>>";
	int x;
	cin >> x;

	if (x >= 10) {
		if (x <= 20)
			cout << x << "은(는) 10이랑 20사이에 있음\n";
		else
			cout << x << "은(는) 20초과\n";

	}
	return 0;
}