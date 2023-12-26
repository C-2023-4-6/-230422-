#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int x = 60, int y = 80) {
		this->x = x;
		this->y = y;
	}
	void point1(int i, int j) 
	{
		x = 60 + i;
		y = 80 + j;
	}void display()
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};
int main() {
	point p;
	p.display();
	p.point1(10, 20); 
	p.display();
	return 0;
}