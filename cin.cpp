#include <iostream>
using namespace std;// <iostream>��� ���Ͽ� ����� �̸��� ����� �� std ::����

int main() {
	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width; // Ű���� ���� �Էµ� ������ width�� ������ ������

	cout << "���̸� �Է��ϼ���>>";

	int height;
	cin >> height;// Ű���忡�� �Էµ� ������ height�� ������ ������ 

	int area = width * height; // area ������  ���� �� ������ ������ ������
	cout << "������" << area << "�Դϴ�.\n";
}
