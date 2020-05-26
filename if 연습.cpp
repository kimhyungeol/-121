#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "입력하시오>>";
	cin >> x;
	if (x > 10)
		cout << x << "는 10보다 크다\n";
	else
		cout << x << "는 10보다 작거나 같다.\n";
	return 0;
}
