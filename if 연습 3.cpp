#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "���ڸ� �Է��Ͻÿ�>>";
	cin >> x;
	if (x > 10)
		cout << x << "�� 10���� ũ��.\n";
	else if (x < 10)
		cout << x << "�� 10���� �۴�.\n";
	else
		cout << x << "�� ��Ȯ�� 10�̴�.\n";
	return 0;
}