#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "��ȣ�� �Է��Ͻÿ�>>";
	int x;
	cin >> x;

	if (x >= 10) {
		if (x <= 20)
			cout << x << "��(��) 10�̶� 20���̿� ����\n";
		else
			cout << x << "��(��) 20�ʰ�\n";

	}
	return 0;
}