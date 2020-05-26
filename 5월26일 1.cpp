#include<iostream>
using namespace std;

int main() {
	cout << "이름을 입력하세요>>";

	char 플레이어[11];// 한글 5글자 영어 10글자 1개는 널
	cin >> 플레이어;// 플레이어 이름을 키보드로 부터 입력받는 식
	cout << "이름은" << 플레이어 << "입니다.\n";// 입력받은 값을 출력
	return 0;
}