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
		cout << "���������Ϊ" << a * b * c << endl;
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
	cout << "����" << cub1.getlength() << "��" << cub1.getwidth() << "�ߣ�" << cub1.getheight() << endl;
	cub1.volume(a1, b1, c1);
	cuboid cub2;
	cub2.setlength(a2); cub2.setwidth(b2); cub2.setheight(c2);
	cout << "����" << cub2.getlength() << "��" << cub2.getwidth() << "�ߣ�" << cub2.getheight() << endl;
	cub1.volume(a2, b2, c2);
	cuboid cub3;
	cub3.setlength(a3); cub3.setwidth(b3); cub3.setheight(c3);
	cout << "����" << cub3.getlength() << "��" << cub3.getwidth() << "�ߣ�" << cub3.getheight() << endl;
	cub1.volume(a3, b3, c3);
		
}