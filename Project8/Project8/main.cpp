#include <iostream>
using namespace std;

class Location
{
public:
	int x;
	int y;
	Location(int xx, int yy) :x(xx), y(yy)
	{

	}
	void move()
	{
		cout << "How do you want to move the point?" << endl;
		int xx, yy;
		cout << "x->";
		cin >> xx;
		cout << "y->";
		cin >> yy;
		x = xx;
		y = yy;
	}
	void show()
	{
		cout << "now, the point is (" << x << "," << y << ")" << endl;
	}
};

class Point :public Location
{
public:
	int z;
	Point(int x, int y, int z) :Location(x, y)
	{
		
	}
	void move()
	{
		Location::move();
		cout << "z->";
		int zz;
		cin >> zz;
		z = zz;
	}
	void show()
	{
		cout << "now, the point is (" << x << "," << y << "," << z << ")" << endl;
	}
};
class Sphere :public Point
{
public :
	int r;
	Sphere(int x, int y, int z, int r) :Point(x, y, z)
	{

	}
	void move()
	{
		Point::move();
		cout << "r->";
		int rr;
		cin >> rr;
		r = rr;
	}
	void show()
	{
		cout << "the center of sphere is (" << x << "," << y << "," << z << ")" << endl;
		cout << "the radius is:" << r << endl;
	}
};
int main()
{
	cout << "**************Location**************" << endl;
	Location obj(1, 1);
	obj.move();
	obj.show();

	cout << "**************Point**************" << endl;
	Point obj2(1,1,1);
	obj2.move();
	obj2.show();

	cout << "**************Sphere**************" << endl;
	Sphere obj3(1, 1, 1, 1);
	obj3.move();
	obj3.show();

	return 0;
}