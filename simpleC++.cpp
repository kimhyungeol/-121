/*
소스: simpleC++.cpp
cout과 << 연산자를 이용하여 화면에 출력한다.
*/

#include<iostream> // cout과 << 연산자 포함

//c++프로그램은 main() 함수에서부터 실행을 시작한다.
int main() {
	std::cout << "hello\n"; // 화면에 hello를 출력하고 \n으로 다음 줄로 넘김
	std::cout << "첫 번째 맛보기입니다."; // 위 두개의 코드는 std::cout << "hello\n" << "첫 번째 맛보기 입니다."; 이 코드로 축약 가능
	return 0; // main()함수가 종료하면 프로그램이 종료된다
}