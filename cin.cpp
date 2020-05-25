#include <iostream>
using namespace std;// <iostream>헤더 파일에 선언된 이름을 사용할 때 std ::생략

int main() {
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // 키보드 에서 입력된 정수를 width의 변수로 저장함

	cout << "높이를 입력하세요>>";

	int height;
	cin >> height;// 키보드에서 입력된 정수를 height의 변수로 저장함 

	int area = width * height; // area 변수를  위에 두 변수에 곱으로 저장함
	cout << "면적은" << area << "입니다.\n";
}
