#include<iostream>
using namespace std;
class cuboid {
public:
	void setlength(int a) {
		length = a;
	}
	int getlength() {
		return length;
	}
	void setwidth(int b) {
		width = b;
	}
	int getwidth() {
		return width;
	}
	void setheight(int c) {
		height = c;
	}
	int getheight() {
		return height;
	}
	void volume(int a, int b, int c) {
		cout << "长方体体积为" << a * b * c << endl;
	}
private:
	int length;
	int width;
	int height;
};
int main() {
	int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	cin >> a3 >> b3 >> c3;
	cuboid cub1;
	cub1.setlength(a1); cub1.setwidth(b1); cub1.setheight(c1);
	cout << "长：" << cub1.getlength() << "宽：" << cub1.getwidth() << "高：" << cub1.getheight() << endl;
	cub1.volume(a1, b1, c1);
	cuboid cub2;
	cub2.setlength(a2); cub2.setwidth(b2); cub2.setheight(c2);
	cout << "长：" << cub2.getlength() << "宽：" << cub2.getwidth() << "高：" << cub2.getheight() << endl;
	cub1.volume(a2, b2, c2);
	cuboid cub3;
	cub3.setlength(a3); cub3.setwidth(b3); cub3.setheight(c3);
	cout << "长：" << cub3.getlength() << "宽：" << cub3.getwidth() << "高：" << cub3.getheight() << endl;
	cub1.volume(a3, b3, c3);
		
}