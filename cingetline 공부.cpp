#include<iostream>
using namespace std;
int main() {
	char name[100];// 문자열 변수 선언 100바이트
	cout << "이름을 입력하시오>>";
	cin.getline(name, 100, '\n');// getline을 추가해서 뛰어쓰기 인식과 마지막 글자를 \n으로 해서 엔터로 인식하게함 \n을 빼고 해도 똑같이 동작함 
	cout << "당신의 이름은" << name << "입니다.\n";
	return 0;
}