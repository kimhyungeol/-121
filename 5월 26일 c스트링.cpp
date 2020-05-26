#include<iostream>
#include<cstring>// strcmp함수를 사용하기 위한 헤더파일
using namespace std;



int main() {
	char password[50];//문자열 변수 지정
	cout << " 비밀번호를 입력해주십시오\n";
	while (true)
	{
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "비밀번호") == 0) {
			cout << "프로그램을 종료합니다.\n";
			break;
		}
		else
			cout << "암호가 틀렸습니다.\n";

	}
}