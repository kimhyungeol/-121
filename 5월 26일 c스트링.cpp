#include<iostream>
#include<cstring>// strcmp�Լ��� ����ϱ� ���� �������
using namespace std;



int main() {
	char password[50];//���ڿ� ���� ����
	cout << " ��й�ȣ�� �Է����ֽʽÿ�\n";
	while (true)
	{
		cout << "��ȣ>>";
		cin >> password;
		if (strcmp(password, "��й�ȣ") == 0) {
			cout << "���α׷��� �����մϴ�.\n";
			break;
		}
		else
			cout << "��ȣ�� Ʋ�Ƚ��ϴ�.\n";

	}
}