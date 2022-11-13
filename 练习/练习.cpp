#include <iostream>
#include <fstream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<vector>
#include<cassert>
#include<iterator>
#include<algorithm>
using namespace std;
//typedef struct Node
//{
//	int data;
//	struct Node* pNext;
//}Node,*pNode;
//pNode createNode(int x)
//{
//	pNode p = new Node();
//	p->data = x;
//	p->pNext = NULL;
//	return p;
//}
//int main()
//{
//	int n = 0,x=0;
//	cin >> n>>x;
//	pNode Ahead = NULL;
//	Ahead = createNode(0);
//	pNode p = Ahead;
//	pNode q = Ahead;
//	for (int i = 0; i < n; i++)
//	{
//		int x=0;
//		cin >> x;
//		p->pNext = createNode(x);
//		p = p->pNext;
//	}
//	p = Ahead->pNext;
//	while (p != NULL && p->data < x)
//	{
//		p = p->pNext;
//		q = q->pNext;
//	}
//	pNode ptr = createNode(x);
//	ptr->pNext = p;
//	q->pNext = ptr;
//	p = Ahead->pNext;
//	for (int i = 0; i < n + 1; i++)
//	{
//		cout << p->data<<" ";
//		p = p->pNext;
//	}
//	return 0;
//}

//class Complex
//{
//private:
//	double real;
//	double imag;
//public:
//	Complex(double x=0.0,double y=0.0):real(x),imag(y){}
//	void display()const;
//	Complex operator+(const Complex& c2)const;
//	Complex operator-(const Complex& c2)const;
//};
//void Complex::display()const
//{
//	cout << "(" << real << "," << imag << ")"<<endl;
//}
//Complex Complex::operator+(const Complex& c2)const
//{
//	return Complex(real + c2.real, imag + c2.imag);
//}
//Complex Complex::operator-(const Complex& c2)const
//{
//	return Complex(real - c2.real, imag - c2.imag);
//}
//int main()
//{
//	Complex c1(5, 4), c2(2, 10), c3;
//	cout << "c1=";
//	c1.display();
//	cout << "c2=";
//	c2.display();
//	c3 = c1 - c2;
//	cout << "c3=c1-c2=";
//	c3.display();
//	c3 = c1 + c2;
//	cout << "c3=c1+c2=";
//	c3.display();
//	return 0;
//}
//class Clock
//{
//private:
//	int hour, minute, second;
//public:
//	Clock(int hour = 0, int minute = 0, int second = 0);
//	void showtime()const;
//	Clock& operator++();
//	Clock operator++(int);
//};
//Clock::Clock(int hour, int minute, int second)
//{
//	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
//	{
//		this->hour = hour;
//		this->minute = minute;
//		this->second = second;
//	}
//	else
//	{
//		cout << "Time error!" << endl;
//	}
//}
//void Clock::showtime() const
//{
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//Clock& Clock::operator++()//前置单目运算符
//{
//	second++;
//	if (second >= 60)
//	{
//		second -= 60;
//		minute++;
//		if (minute >= 60)
//		{
//			minute -= 60;
//			hour++;
//			hour = hour % 24;
//		}
//	}
//	return *this;
//}
//Clock Clock::operator++(int)//后置单目运算符
//{
//	Clock old = *this;
//	++(*this);
//	return old;
//}
//int main()
//{
//	Clock myClock(23, 59, 59);
//	cout << "First time output: ";
//	myClock.showtime();
//	cout << "Show myClock++: ";
//	(myClock++).showtime();
//	cout << "Show ++myClock: ";
//	(++myClock).showtime();
//	return 0;
//}
//class Complex
//{
//private:
//	double real;
//	double imag;
//public:
//	Complex(double r=0.0,double i=0.0):real(r),imag(i){}
//	friend Complex operator+(const Complex& c1, const Complex& c2);
//	friend Complex operator-(const Complex& c1, const Complex& c2);
//	friend ostream& operator<<(ostream& out, const Complex& c2);
//};
//Complex operator+(const Complex& c1, const Complex& c2)
//{
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//Complex operator-(const Complex& c1, const Complex& c2)
//{
//	return Complex(c1.real - c2.real, c1.imag - c2.imag);
//}
//ostream& operator<<(ostream& out, const Complex& c2)
//{
//	out << "(" << c2.real << "," << c2.imag << ")";
//	return out;
//}
//int main()
//{
//	Complex c1(5, 4), c2(2, 10), c3;
//	cout << "c1= " << c1 << endl;
//	cout << "c2= " << c2 << endl;
//	c3 = c1 + c2;
//	cout << "c3=c1+c2= " << c3 << endl;
//	c3 = c1 - c2;
//	cout << "c3=c1-c2= " << c3 << endl;
//	return 0;
//}

//class R
//{
//private:
//	int r1, r2;
//public:
//	R(int r1,int r2):r1(r1),r2(r2){}
//	void print();
//	void print()const;
//};
//void R::print()
//{
//	cout << r1 << ":" << r2 << endl;
//}
//void R::print()const
//{
//	cout << r1 << ";" << r2 << endl;
//}
//int main()
//{
//	R a(5, 4);
//	a.print();
//	const R b(20, 52);
//	b.print();
//	return 0;
//}

//class Point
//{
//private:
//	int x, y;
//public:
//	static int count;
//	Point(int x,int y):x(x),y(y){
//		count++;
//	}
//	Point(const Point& p1) :x(p1.x), y(p1.y) {
//		count++;
//	}
//	~Point()
//	{
//		count--;
//	}
//	int getX()const
//	{
//		return x;
//	}
//	int getY()const
//	{
//		return y;
//	}
//	friend float dist( Point& p1,  Point& p2);
//	static void showCount()
//	{
//		cout << "count=" << count<<endl;
//	}
//};
//int Point::count = 0;
//float dist( Point& p1,  Point& p2)
//{
//	double x = p1.x - p2.x;
//	double y = p1.y - p2.y;
//	return static_cast<float>(sqrt(x * x + y * y));
//}
//int main()
//{
//	void(*ptrfunc)() = Point::showCount;
//	//int* ptr = &Point::count;
//     Point myPoint1(1, 1);
//	 ptrfunc();
//	// cout << *ptr<< endl;
//	 Point myPoint2(myPoint1);
//	 ptrfunc();
//	 //cout << *ptr;
//	 //cout << "x=" << myPoint1.getX() << endl;
//	/*cout << "The distance is: ";
//	cout << dist(myPoint1, myPoint2)<<endl;*/
//	return 0;
//}
//class Base1
//{
//public:
//	virtual void display()const;
//};
//void Base1::display()const
//{
//	cout << "Base1::display()" << endl;
//}
//class Base2 :public Base1
//{
//public:
//	void display()const;
//};
//void Base2::display()const
//{
//	cout << "Base2::display()" << endl;
//}
//class Derived :public Base2
//{
//public:
//	void display()const;
//};
//void Derived::display()const
//{
//	cout << "Derived::display()" << endl;
//}
//void fun(Base1* ptr)
//{
//	ptr->display();
//}
//int main()
//{
//	Base1 base1;
//	Base2 base2;
//	Derived derived;
//	fun(&base1);
//	fun(&base2);
//	fun(&derived);
//	return 0;
//}

//class Base
//{
//public:
//	virtual ~Base();
//};
//Base::~Base()
//{
//	cout << "Base destructor" << endl;
//}
//class Derived :public Base
//{
//private:
//	int* p;
//public:
//	Derived();
//	~Derived();
//};
//Derived::Derived()
//{
//	p = new int(0);
//}
//Derived::~Derived()
//{
//	cout << "Derived constructor" << endl;
//	delete p;
//}
//void fun(Base *b)
//{
//	delete b;
//}
//int main()
//{
//	Base* b = new Derived();
//	fun(b);
//	return 0;
//}


//class Point
//{
//private:
//	float x, y;
//public:
//	void setPoint(float i, float j)
//	{
//		x = i;
//		y = j;
//	}
//	virtual float area()
//	{
//		return 0.0;
//	}
//};
//const double pi = 3.14159;
//class Circle :public Point
//{
//	float radius;
//public:
//	void setRadius(float r)
//	{
//		radius = r;
//	}
//	float area()
//	{
//		return pi * radius * radius;
//	}
//};
//void main()
//{
//	Point *p;
//	//double a = p.area();
//	//cout << "The area of point is " << a << endl;
//	Circle c;
//	c.setRadius(2.5);
//	//a = c.area();
//	p = &c;
//	float a = p->area();
//	cout << "The area of the circle c is " << a << endl;
//}

//class A
//{
//public:
//	void func()
//	{
//		cout << "In A" << endl;
//	}
//};
//class B :public A
//{
//public:
//	void func()
//	{
//		cout << "In B" << endl;
//	}
//};
//class C :public B
//{
//public:
//	void func()
//	{
//		cout << "In C" << endl;
//	}
//};
//void main()
//{
//	C c;
//	c.func();
//	c.B::func();
//	c.A::func();
//	A& a = c;
//	a.func();
//	B& b = c;
//	b.func();
//	b.B::func();
//}

//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "fun1()--fun2()" << endl;
//		fun2();
//	}
//	void fun2()
//	{
//		cout << "fun2()--fun3()" << endl;
//		fun3();
//	}
//	virtual void fun3()
//	{
//		cout << "fun3()--fun4()" << endl;
//		fun4();
//	}
//	virtual void fun4()
//	{
//		cout << "fun4()--fun5()" << endl;
//		fun5();
//	}
//	void fun5()
//	{
//		cout << "The end" << endl;
//	}
//};
//class B :public A
//{
//public:
//	void fun3()
//	{
//		cout << "(fun3--fun4)" << endl;
//		fun4();
//	}
//	void fun4()
//	{
//		cout << "(fun4--fun5)" << endl;
//		fun5();
//	}
//	void fun5()
//	{
//		cout << "all done" << endl;
//	}
//};
//void main()
//{
//	char c;
//	A* thing;
//	cout << "Select f for A, other for B";
//	cin >> c;
//	if (c == 'f')
//		thing = new A;
//	else
//		thing = new B;
//	thing->fun1();
//	delete thing;
//}

//下面注意

//class A
//{
//public:
//	A(){}
//	virtual void func()
//	{
//		cout << "Constructing A" << endl;
//	}
//	~A(){}
//	virtual void fund()
//	{
//		cout << "Destructor A" << endl;
//	}
//};
//class B:public A
//{
//public:
//	B()
//	{
//		func();
//	}
//	void fun()
//	{
//		func();
//	}
//	~B()
//	{
//		fund();
//	}
//};
//class C :public B
//{
//public:
//	C(){}
//	void func()
//	{
//		cout << "Class C" << endl;
//	}
//	~C()
//	{
//		fund();
//	}
//	void fund()
//	{
//		cout << "Destructor C" << endl;
//	}
//};
//void main()
//{
//	C c;
//	c.fun();
//}

//class Shape
//{
//public:
//	virtual float area() = 0;
//};
//float total(Shape* s[], int n)
//{
//	float sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += s[i]->area();
//	return sum;
//}
//class Triangle :public Shape
//{
//protected:
//	float H, W;
//public:
//	Triangle(float h, float w)
//	{
//		H = h;
//		W = w;
//	}
//	float area()
//	{
//		return 0.5 * H * W;
//	}
//};
//class Circle :public Shape
//{
//protected:
//	float radius;
//public:
//	Circle(float r)
//	{
//		radius = r;
//	}
//	float area()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//class Rectangle :public Shape
//{
//protected:
//	float H, W;
//public:
//	Rectangle(float h, float w)
//	{
//		H = h;
//		W = w;
//	}
//	float area()
//	{
//		return  H * W;
//	}
//};
//void main()
//{
//	Shape* s[4];
//	s[0] = new Triangle(3.0, 4.0);
//	s[1] = new Rectangle(2.0, 4.0);
//	s[2] = new Circle(5.0);
//	s[3] = new Circle(8.0);
//	float sum = total(s, 4);
//	cout << sum << endl;
//}

//void display(const double& r);
//int main()
//{
//	double d = 9.5;
//	display(d);
//	return 0;
//}
//void display(const double& r)
//{
//	cout << r << endl;
//}

//class R
//{
//private:
//	int R1, R2;
//public:
//	R(int r1, int r2)
//	{
//		R1 = r1;
//		R2 = r2;
//	}
//	void print();
//	void print()const;
//};
//void R::print()
//{
//	cout << R1 << ":" << R2 << endl;
//}
//void R::print()const
//{
//	cout << R1 << ";" << R2 << endl;
//}
//void main()
//{
//	R a(5, 4);
//	a.print();
//	const R b(20, 52);
//	b.print();
//}

//class A
//{
//private:
//	const int a;
//	static const int b;
//public:
//	A(int i);
//	void print();
//	const int& r;
//};
//const int A::b = 10;
//A::A(int i):a(i),r(a){}
//void A::print()
//{
//	cout << a << ":" << b << ":" << r << endl;
//}
//void main()
//{
//	A a1(100), a2(0);
//	a1.print();
//	a2.print();
//}

//class ConstFun
//{
//public:
//	const int f5()const
//	{
//		return 5;
//	}
//	int Obj()
//	{
//		return 45;
//	}
//};
//void main()
//{
//	ConstFun s;
//	const int i = s.f5();
//	int y = s.Obj();
//	cout << i << " " << y << endl;
//	const ConstFun d;
//	int j = d.f5();
//	cout << j << endl;
//}

//class ConstFun
//{
//	int value;
//public:
//	int GetValue()const;
//	int ReadValue()const
//	{
//		return value;
//	}
//	ConstFun(int i)
//	{
//		value = i;
//	}
//};
//int ConstFun::GetValue()const
//{
//	return value;
//}
//void main()
//{
//	ConstFun s(98);
//	cout << s.GetValue() << endl;
//}

//const int N = 6;
//void print(const int* p, int n);
//int main()
//{
//	int array[N];
//	/*for (int i = 0; i < N; i++)
//	{
//		cin >> array[i];
//	}*/
//	//print(array, N);
//	int b = 0;
//	int a = 1;
//	const int* p = &b;//常量指针不能通过它来修改值，但所指对象可以自己修改值
//	p = &a;
//	int* const p1 = &a;
//	p1 = &b;
//	cout << *p1;
//}
//void print(const int* p, int n)
//{
//	cout << "{" << *p;
//	for (int i = 1; i < n; i++)
//	{
//		cout << "." << *(p + i);
//	}
//	cout << "}" << endl;
//}

//

//class A
//{
//private:
//	int val;
//public:
//	A(int i)
//	{
//		val = i;
//	}
//	int value(int a)
//	{
//		return val + a;
//	}
//	void px(){}
//	void ws(){}
//};
//void main()
//{
//	int(A:: * p)(int);
//	p = &A::value;
//	A obj(10);
//	cout << (obj.*p)(15) << endl;
//	A* pc = &obj;
//	cout << (pc->*p)(15) << endl;
//	cout << &A::ws;
//}

//class base
//{
//public:
//	virtual void print()
//	{
//		cout << "InBase" << endl;
//	}
//};
//class derived :public base
//{
//public:
//	void print()
//	{
//		cout << "InDerived" << endl;
//	}
//};
//void display(base* pb, void(base::* pf)())
//{
//	(pb->*pf)();//注意
//}
//void main()
//{
//	derived d;
//	display(&d, &base::print);
//}

//class Point
//{
//private:
//	int x, y;
//public:
//	static int countP;
//	Point(int xx = 0, int yy = 0)
//	{
//		x = xx;
//		y = yy;
//		countP++;
//	}
//	Point(Point& p);
//	int getX()
//	{
//		return x;
//	}
//	int getY()
//	{
//		return y;
//	}
//};
//Point::Point(Point& p)
//{
//	x = p.x;
//	y = p.y;
//	countP++;
//}
//int Point::countP = 0;
//int main()
//{
//	int* count = &Point::countP;
//	Point A(4, 5);
//	cout << "Point A," << A.getX() << "," << A.getY();
//	cout << "Object id=" << *count << endl;
//	Point B(A);
//	cout << "Point B," << B.getX() << "," << B.getY();
//	cout << "Object id=" << *count << endl;
//	return 0;
//}

//class Point
//{
//private:
//	int x, y;
//	static int countP;
//public:
//	Point(int x, int y)
//	{
//		x = x;
//		y = y;
//		countP++;
//	}
//	Point(Point& p):x(p.x),y(p.y)
//	{
//		countP++;
//	}
//	static void GetC()
//	{
//		cout << "Object id= " << countP << endl;
//	}
//};
//int Point::countP = 0;
//int main()
//{
//	//void(*gc)() = Point::GetC;
//	void(*gc)();
//	gc = Point::GetC;
//	Point A(4, 5);
//	gc();
//	Point B(A);
//	gc();
//}

//错题

// int f(int i)
//{
//	return ++i;
//}
//int g(int&& i)
//{
//	return ++i;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	/*a += f(g(a));
//	cout << "a= " << a << endl;
//	b += f(f(b));
//	cout << "b= " << b << endl;*/
//	c += g(g(c+1));
//	cout << "c= " << c << endl;
//	d += g(f(d));
//	cout << "d= " << d << endl;
//	return 0;
//}

//template <class T>
//void outputArray(const T* array, int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
//	int a[A_COUNT] = { 1,2,3,4,5,6,7,8 };
//	double b[B_COUNT] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };
//	char c[C_COUNT] = "Welcome to see you!"; 
//	cout << "a array contains:" << endl;
//	outputArray(a, A_COUNT);
//	outputArray(b, B_COUNT);
//	outputArray(c, C_COUNT);
//	return 0;
//}
////template<class T1,class T2>
////T1 fun(T1 x)
////{
////	return x;
////}

//struct Student
//{
//	int id;
//	float gpa;
//};
//template<class T>
//class Store
//{
//private:
//	T item;
//	bool haveValue;
//public:
//	Store();
//	T& getElem();
//	void putElem(const T& x);
//};
//template<class T>
//Store<T>::Store():haveValue(false){}
//template<class T>
//T& Store<T>::getElem()
//{
//	if (!haveValue)
//	{
//		cout << "No item present! " << endl;
//		exit(1);
//	}
//	return item;
//}
//template<class T>
//void Store<T>::putElem(const T& x)
//{
//	haveValue = true;
//	item = x;
//}
//int main()
//{
//	Store<int>s1, s2;
//	s1.putElem(3);
//	s2.putElem(-7);
//	cout << s1.getElem() << "  " << s2.getElem() << endl;
//
//	Student g = { 1000,23 };
//	Store<Student> s3;
//	s3.putElem(g);
//	cout << "The student id is " << s3.getElem().id << endl;
//
//	Store<double>d;
//	cout << "Retrieving object d...";
//	cout << d.getElem() << endl;
//	return 0;
//}

//double average(const vector<double>& arr)
//{
//	double sum = 0;
//	for (unsigned i = 0; i < arr.size(); i++)
//		sum += arr[i];
//	return sum / arr.size();
//}
//int main()
//{
//	unsigned n;
//	cout << "n= ";
//	cin >> n;
//	vector<double> arr(n);
//	cout << "Please input" << n << "real numbers:" << endl;
//	for (unsigned i = 0; i < n; i++)
//		cin >> arr[i];
//	cout << "Average=" << average(arr) << endl;
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//#include"Array.h"
//using namespace std;
//int main()
//{
//	Array<int> a(10);
//	int count = 0;
//	int n;
//	cout << "Enter a value>=2 as upper limit for prime numbers:";
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		bool isPrime = true;
//		for (int j = 0; j < count; j++)
//			if (i % a[j] == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		if (isPrime)
//		{
//			if (count == a.getSize())
//				a.resize(count * 2);
//			a[count++] = i;
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		cout << setw(8) << a[i];
//	}
//	cout << endl;
//	return 0;
//}

//class B
//{
//private:
//	int &num;
//public:
//	B(int &i):num(i)
//	{
//	}
//	~B(void);
//	void show()
//	{
//		cout << "num=" << num;
//	}
//};
//B::~B(void)
//{
//
//}
//int main()
//{
//	int c;
//	//cin >> c;
//	c = 40;
//	B b(c);
//	b.show();
//	return 0;
//	//   char x[5] = { 0 };
//	////x = "asd";
//	//string xx = "asd";
//	//cout << xx;
//}

//class A
//{
//	int a;
//public:
//	A(int n)
//	{
//		a = n;
//		cout << "A(int" << n << ")called\n";
//	}
//	A(double b)
//	{
//		a = b + 0.5;
//		cout << "A(f1" << b << ")called\n";
//	}
//	~A()
//	{
//		cout << "~A()called A::a=" << a << endl;
//	}
//};
//int main()
//{
//	cout << "enter main\n";
//	int x = 14;
//	float y = 17.3;
//	A z(11), zz(11.5), zzz(0);
//	zzz = A(x);
//	zzz = A(y);
//	zzz = 5;
//	cout << "exiting main\n";
//	return 0;
//}

//class BoxShape
//{
//protected:
//	int w,  h;
//public:
//	BoxShape():w(0),h(0){}
//	int getw()
//	{
//		return w;
//	}
//	int geth()
//	{
//		return h;
//	}
//};
//class ColorBoxShape :public BoxShape
//{
//public:
//	int color;
//	void show()
//	{
//		color = 1;
//		cout << color << " " << w << " " << h;
//	}
//};
//int main()
//{
//	ColorBoxShape a;
//	a.show();
//	return 0;
//}

//class Date
//{
//	int xx;
//public:
//	Date(int x);
//	Date(){
//		cout << "Default Constructor" << endl;
//	}
//	~Date()
//	{
//		cout << "DateDestructor xx=" << xx << endl;
//	}
//};
//class A
//{
//	Date d1;
//public:
//	A(int x);
//	~A()
//	{
//		cout << "A Destructor" << endl;
//	}
//};
//class B:public A
//{
//	Date d2;
//public:
//	B(int x);
//};
//class C :public B
//{
//public:
//	C(int x);
//};
//Date::Date(int x)
//{
//	xx = x;
//	cout << "Class Date" << endl;
//}
//A::A(int x)
//{
//	d1=Date(x);
//	cout << "Class A" << endl;
//}
//B::B(int x) : A(x), d2(x)
//{
//	cout << "Class B" << endl;
//}
//C::C(int x) : B(x)
//{
//	cout << "Class C" << endl;
//}
//int main()
//{
//	A a(4);
//	//C obj(4);
//	return 0;
//}

//const int& a(int x)
//{
//	return x;
//}
//int main()
//{
//	const int& p = a(1);
//	p = 4;
//
//	//cout << a(1) << endl;
//	return 0;
//}//const放在函数前是限制函数返回类型为指针时通过指针对返回值的修改。
//非指针的函数返回类型前加const是没有意义的。
//函数返回const类型，就是为防止通过指针修改接收的返回值

//姑且跳过例9.7,例9.6LinkedList还没实现完全

//#include"LinkedList.h"
//using namespace std;
//int main()
//{
//	LinkedList<int> list;
//	for (int i = 0; i < 10; i++)
//	{
//		int item;
//		cin >> item;
//		list.insertFront(item);
//	}
//	cout << "List: ";
//	list.reset();
//	while (!list.endOdList())
//	{
//		cout << list.data() << " ";
//		list.next();
//	}
//	cout << endl;
//	int key;
//	cout << "Please enter some integer needed to be deleted:";
//	cin >> key;
//	list.reset();
//	while (!list.endOdList())
//	{
//		if (list.data() == key)
//			list.deleteCurrent();
//		list.next();
//	}
//	cout << "List: ";
//	list.reset();
//	while (!list.endOdList())
//	{
//		cout << list.data() << " ";
//		list.next();
//	}
//	cout << endl;
//	return 0;
//}

//double square(double x)
//{
//	return x * x;
//}
//int main()
//{
//	transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout, "\t"), square);
//	cout << endl;
//	return 0;
//}

//#include<list>
//#include<deque>
//template<class T>
//void printContainer(const char* msg, const T& s)
//{
//	cout << msg << ": ";
//	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//}
//int main()
//{
//	deque<int>s;
//	for (int i = 0; i < 10; i++)
//	{
//		int x;
//		cin >> x;
//		s.push_front(x);
//	}
//	printContainer("deque at first", s);
//	list<int> l(s.rbegin(), s.rend());
//	printContainer("list at first", l);
//	list<int>::iterator iter = l.begin();
//	while (iter != l.end())
//	{
//		int v = *iter;
//		iter = l.erase(iter);
//		l.insert(++iter, v);
//	}
//	printContainer("list at last", l);
//	s.assign(l.begin(), l.end());
//	printContainer("deque at last", s);
//	return 0;
//}

//#include<iomanip>
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << hex << uppercase << setw(2)<<setfill('0') << i + j << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

////void print(const base& x)
////{
////	x.show();
////}

//class Test
//{
//	static int x;
//public:
//	static int func();
//};
//int Test::x = 20;
//int Test::func()
//{
//	return x;
//}
//int main()
//{
//	cout << Test::func() << endl;
//	Test a;
//	cout << a.func() << endl;
//}

//歌曲
//#include <iostream>
//
//#include <Windows.h>
//
//#pragma comment(lib,"winmm.lib")
//
//using namespace std;
//
//
//
//enum Scale
//
//{
//
//    Rest = 0, C8 = 108, B7 = 107, A7s = 106, A7 = 105, G7s = 104, G7 = 103, F7s = 102, F7 = 101, E7 = 100,
//
//    D7s = 99, D7 = 98, C7s = 97, C7 = 96, B6 = 95, A6s = 94, A6 = 93, G6s = 92, G6 = 91, F6s = 90, F6 = 89,
//
//    E6 = 88, D6s = 87, D6 = 86, C6s = 85, C6 = 84, B5 = 83, A5s = 82, A5 = 81, G5s = 80, G5 = 79, F5s = 78,
//
//    F5 = 77, E5 = 76, D5s = 75, D5 = 74, C5s = 73, C5 = 72, B4 = 71, A4s = 70, A4 = 69, G4s = 68, G4 = 67,
//
//    F4s = 66, F4 = 65, E4 = 64, D4s = 63, D4 = 62, C4s = 61, C4 = 60, B3 = 59, A3s = 58, A3 = 57, G3s = 56,
//
//    G3 = 55, F3s = 54, F3 = 53, E3 = 52, D3s = 51, D3 = 50, C3s = 49, C3 = 48, B2 = 47, A2s = 46, A2 = 45,
//
//    G2s = 44, G2 = 43, F2s = 42, F2 = 41, E2 = 40, D2s = 39, D2 = 38, C2s = 37, C2 = 36, B1 = 35, A1s = 34,
//
//    A1 = 33, G1s = 32, G1 = 31, F1s = 30, F1 = 29, E1 = 28, D1s = 27, D1 = 26, C1s = 25, C1 = 24, B0 = 23,
//
//    A0s = 22, A0 = 21
//
//};
//
//enum Voice
//
//{
//
//    X1 = C2, X2 = D2, X3 = E2, X4 = F2, X5 = G2, X6 = A2, X7 = B2,
//
//    L1 = C3, L2 = D3, L3 = E3, L4 = F3, L5 = G3, L6 = A3, L7 = B3,
//
//    M1 = C4, M2 = D4, M3 = E4, M4 = F4, M5 = G4, M6 = A4, M7 = B4,
//
//    H1 = C5, H2 = D5, H3 = E5, H4 = F5, H5 = G5, H6 = A5, H7 = B5,
//
//    LOW_SPEED = 500, MIDDLE_SPEED = 400, HIGH_SPEED = 300,
//
//    _ = 0XFF
//
//};
//
//void Wind()
//
//{
//
//    HMIDIOUT handle;
//
//    midiOutOpen(&handle, 0, 0, 0, CALLBACK_NULL);
//
//    midiOutShortMsg(handle, 34 << 8 | 0xC0);
//
//    int volume = 0x7f;
//
//    int voice = 0x0;
//
//    int sleep = 1000;
//
//    int wind[] =
//
//    {
//
//      400,0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,0,L7,M1,M2,M3,300,L2,0,M5,M3,M2,M3,M1,M2,L7,M1,300,L5,0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,0,L7,M1,M2,M3,300,L2,0,M5,M3,M2,M3,M1,M2,L7,M1,300,L5,
//
//      0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,0,L7,M1,M2,M3,300,L2,0,M5,M3,M2,M3,M1,M2,L7,M1,300,L5,0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,
//
//      0,M6,M3,M2,L6,M3,L6,M2,M3,L6,_,_,_,
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M1,300,M2,700,0,M1,M2,M3,M2,M1,300,L5,_,
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M3,300,M2,0,M1,700,300,M2,_,_,_,
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M3,300,M2,0,M1,700,300,L6,_,
//
//      0,M3,M2,M1,M2,300,M1,_,0,M3,M2,M1,M2,300,M1,700,0,L5,M3,M2,M1,M2,300,M1,_,_,_,
//
//      M1,M2,M3,M1,M6,0,M5,M6,300,_,700,0,M1,300,M7,0,M6,M7,300,_,_,M7,0,M6,M7,300,_,M3,0,H1,H2,H1,M7,300,M6,M5,M6,0,M5,M6,_,M5,M6,M5,300,M6,0,M5,M2,300,_,0,M5,700,300,M3,_,_,_,
//
//      M1,M2,M3,M1,M6,0,M5,M6,300,_,700,0,M1,300,M7,0,M6,M7,300,_,_,M7,0,M6,M7,300,_,M3,0,H1,H2,H1,M7,300,M6,M5,M6,0,H3,H3,300,_,M5,M6,0,H3,H3,300,_,0,M5,700,300,M6,_,_,_,_,_,
//
//      H1,H2,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H2,0,H1,M6,300,_,0,H1,H1,300,H2,0,H1,300,M6,700,0,_,300,H1,700,H3,_,0,H3,H4,H3,H2,H3,300,H2,700,
//
//      H1,H2,H3,0,H6,H5,_,H6,H5,_,H6,H5,300,_,H3,H3,0,H6,H5,_,H6,H5,_,H6,H5,700,300,H3,700,H2,0,H1,M6,700,300,
//
//      H3,700,H2,0,H1,300,M6,700,H1,H1,_,_,_,_,_,
//
//      0,M6,300,H3,700,H2,0,H1,M6,700,300,H3,H2,700,300,0,H1,M6,300,700,H1,H1,_,_,
//
//      0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,0,L7,M1,M2,M3,300,L2,0,M5,M3,M2,M3,M1,M2,L7,M1,300,L5,0,L7,M1,M2,M3,300,L3,0,M5,M3,300,L2,L5,2,_,
//
//      0,M6,M3,M2,L6,M3,L6,M2,M3,L6,_,_,_,
//
//
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M1,300,M2,700,0,M1,M2,M3,M2,M1,300,L5,_,
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M3,300,M2,0,M1,700,300,M2,_,_,_,
//
//      M2,700,0,M1,300,M2,700,0,M1,300,M2,M3,M5,0,M3,700,300,M2,700,0,M3,300,M2,0,M1,700,300,L6,_,
//
//      0,M3,M2,M1,M2,300,M1,_,0,M3,M2,M1,M2,300,M1,700,0,L5,M3,M2,M1,M2,300,M1,_,_,_,
//
//      M1,M2,M3,M1,M6,0,M5,M6,300,_,700,0,M1,300,M7,0,M6,M7,300,_,_,M7,0,M6,M7,300,_,M3,0,H1,H2,H1,M7,300,M6,M5,M6,0,M5,M6,_,M5,M6,M5,300,M6,0,M5,M2,300,_,0,M5,700,300,M3,_,_,_,
//
//      M1,M2,M3,M1,M6,0,M5,M6,300,_,700,0,M1,300,M7,0,M6,M7,300,_,_,M7,0,M6,M7,300,_,M3,0,H1,H2,H1,M7,300,M6,M5,M6,0,H3,H3,300,_,M5,M6,0,H3,H3,300,_,0,M5,700,300,M6,_,_,_,_,_,
//
//
//
//      H1,H2,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H2,0,H1,M6,300,_,0,H1,H1,300,H2,0,H1,300,M6,700,0,_,300,H1,700,H3,_,0,H3,H4,H3,H2,H3,300,H2,700,
//
//      H1,H2,H3,0,H6,H5,_,H6,H5,_,H6,H5,300,_,H3,H3,0,H6,H5,_,H6,H5,_,H6,H5,700,300,H3,700,H2,0,H1,M6,700,300,
//
//      H3,700,H2,0,H1,300,M6,700,H1,H1,_,_,_,_,_,
//
//
//
//      H1,H2,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H2,0,H1,M6,300,_,0,H1,H1,300,H2,0,H1,300,M6,700,0,_,300,H1,700,H3,_,0,H3,H4,H3,H2,H3,300,H2,700,
//
//      H1,H2,H3,0,H6,H5,_,H6,H5,_,H6,H5,300,_,H3,H3,0,H6,H5,_,H6,H5,_,H6,H5,700,300,H3,700,H2,0,H1,M6,700,300,
//
//      H3,700,H2,0,H1,300,M6,700,H1,H1,_,_,_,_,_,
//
//
//
//      H1,H2,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H3,0,H6,H5,300,_,0,H6,H5,300,_,0,H6,H5,300,_,0,H2,H3,300,H2,0,H1,M6,300,_,0,H1,H1,300,H2,0,H1,300,M6,700,0,_,300,H1,700,H3,_,0,H3,H4,H3,H2,H3,300,H2,700,
//
//      H1,H2,H3,0,H6,H5,_,H6,H5,_,H6,H5,300,_,H3,H3,0,H6,H5,_,H6,H5,_,H6,H5,700,300,H3,700,H2,0,H1,M6,700,300,
//
//      H3,700,H2,0,H1,300,M6,700,H1,H1,_,_,_,_,_,
//
//
//
//      0,M6,300,H3,700,H2,0,H1,M6,700,300,H3,H2,700,300,0,H1,M6,300,700,H1,H1,_,_,_,_,_,_,_,
//
//    };
//
//    for (auto i : wind) {
//
//        if (i == LOW_SPEED || i == HIGH_SPEED || i == MIDDLE_SPEED) {
//
//            sleep = i;//Sleep(i/2);
//
//            continue;
//
//        }
//
//        if (i == 0) { sleep = 175; continue; }
//
//        if (i == 700) { Sleep(175); continue; }
//
//        if (i == _) {
//
//            Sleep(500);
//
//            continue;
//
//        }
//
//        // if (i == 900) volume += 100;
//
//        voice = (volume << 16) + ((i) << 8) + 0x90;
//
//
//
//
//
//        midiOutShortMsg(handle, voice);
//
//        cout << voice << endl;
//
//        Sleep(sleep);
//
//    }
//
//    midiOutClose(handle);
//
//}
//
//
//
//int main()
//
//{
//
//
//
//    Wind();
//
//    return 0;
//
//}

//#include<iomanip>
//int main()
//{
//	int a = 25;
//	float b = 11.2, c = 459526.45;
//	//cout << "C++中的I/O需要刷新" << flush;
//	//cout <<setw(10) << a << a << a << a;
//	/*cout << "默认域宽" << cout.width()<<endl;
//	cout << "[";
//	cout.fill('@');
//	cout.width(10);
//	cout << 'A';
//	cout << "]";*/
//	//cout.showbase();
//	cout.setf(ios::hex | ios::uppercase | ios::showbase);
//	//cout << c << endl;
//	//cout << d << endl;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//	//cout<<showbase<<hex<<uppercase<< a;
//	return 0;
//}


//class Customer
//
//{
//
//private:
//
//	char mobileNo[11];
//
//	char name[25];
//
//	char dateOfBirth[9];
//
//	char billingAddress[51];
//
//	char city[25];
//
//	char phoneNo[11];
//
//	float amountOutstanding;
//
//public:
//
//	void print()
//
//	{
//
//		cout << endl << "Mobile phone number: ";
//
//		cout << mobileNo << endl;
//
//		cout << "\nName: ";
//
//		cout << name << endl;
//
//		cout << "\nDate of Birth: ";
//
//		cout << dateOfBirth << endl;
//
//		cout << "\n\nCustomer's billing address: ";
//
//		cout << billingAddress << endl;
//
//		cout << "\nCity: ";
//
//		cout << city << endl;
//
//		cout << "\nResidence phone number: ";
//
//		cout << phoneNo << endl;
//
//		cout << "\nAmount due: ";
//
//		cout << amountOutstanding << endl;
//
//	}
//
//	void get()
//
//	{
//
//		cout << "Mobile phone number: ";
//
//		cin >> mobileNo;
//
//		cin.ignore();
//
//		cout << endl << "Name: ";
//
//		cin.getline(name, 25);
//
//		cout << endl << "Date of Birth: ";
//
//		cin >> dateOfBirth;
//
//		cin.ignore();
//
//		cout << endl << "Customer's billing address: ";
//
//		cin.getline(billingAddress, 51);
//
//		cout << endl << "City: ";
//
//		cin.getline(city, 25);
//
//		cout << endl << "Residence phone number: ";
//
//		cin >> phoneNo;
//
//		cout << endl << "Amount due: ";
//
//		cin >> amountOutstanding;
//
//	}
//
//};
//
//int main()
//
//{
//
//	int ch;
//
//	Customer object;
//
//	while (1)
//
//	{
//
//		cout << "\n \n Diaz Customer Tracking System\n";
//
//		cout << "\n 1. Enter Customer Details\n";
//
//		cout << "\n 2. Display all records \n";
//
//		cout << "\n Enter your choice (0-2)\t";
//
//		cin >> ch;
//
//
//
//		if (ch == 1)
//
//		{
//
//			ofstream ofile("customer.dat");
//
//			char reply = 'Y';
//
//			while (reply == 'Y' || reply == 'y')
//
//			{
//
//				cout << "Enter customer details " << endl;
//
//				object.get();
//
//				ofile.write((char*)&object, sizeof(object));
//
//				cout << "Do you wish to continue ?[Y/N]";
//
//				cin >> reply;
//
//			}
//
//			ofile.close();
//
//		}
//
//		if (ch == 2)
//
//		{
//
//			ifstream ifile("customer.dat");
//
//			ifile.read((char*)&object, sizeof(object));
//
//			while (ifile) //Read Till The End Of The File
//
//			{
//
//				object.print();
//
//				ifile.read((char*)&object, sizeof(object));
//
//			}
//
//			ifile.close();
//
//		}
//
//		if (ch == 0)
//
//			break;
//
//	}
//
//	return 0;
//
//}
//C:\code\练习\练习\练习.cpp

class complex
{
	int real, imag;
public:
	complex(int r=0,int i=0):real(r),imag(i){}
	void show()
	{
		cout << real << "+" << imag << endl;
	}
	complex operator++()
	{
		real++;
		return this;
	}
};