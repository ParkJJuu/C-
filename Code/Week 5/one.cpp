#include <iostream> 
using namespace std;   
 
class Rectangle { // Rectangle 클래스의 선언
private:   
	int width;   // 멤버 변수 선언(너비, 높이)
	int height;   
public:   
	int getArea() {   // public을 이용하여 멤버 함수 선언
		cout << "너비와 높이를 입력하시오. "; // 사용자로부터 입력받는 width, height
		cin >> width >> height; 
		return width * height;   
	}   
};   
   
int main() {   
	Rectangle rect; // 객체 rect 선언
	cout << "\n사각형의 면적은 " << rect.getArea() << " 입니다." << endl;   
}   