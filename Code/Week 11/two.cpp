#include <iostream>
using namespace std;

class Box {
private:
	int width;
	int height;
public:
	int Box_Area() {
		width = height = 5;
		return width * height;
	}
};

int main() {
	Box one;
	cout << "������ ������ " << one.Box_Area() << endl;
}