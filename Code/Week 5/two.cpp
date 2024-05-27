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
	cout << "상자의 면적은 " << one.Box_Area() << endl;
}