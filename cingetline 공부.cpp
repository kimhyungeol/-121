#include<iostream>
using namespace std;
int main() {
	char name[100];// ���ڿ� ���� ���� 100����Ʈ
	cout << "�̸��� �Է��Ͻÿ�>>";
	cin.getline(name, 100, '\n');// getline�� �߰��ؼ� �پ�� �νİ� ������ ���ڸ� \n���� �ؼ� ���ͷ� �ν��ϰ��� \n�� ���� �ص� �Ȱ��� ������ 
	cout << "����� �̸���" << name << "�Դϴ�.\n";
	return 0;
}