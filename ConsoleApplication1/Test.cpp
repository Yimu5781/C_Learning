/*#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int id;
public:
    Student(string n, int a, int i) : Person(n, a) {
        id = i;
    }

    void display() {
        Person::display();
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Person p("John", 30);
    Student s("Tom", 20, 1001);
    p.display();
    cout << endl;
    s.display();
    return 0;
} */ 
//这个程序定义了两个类，一个是Person，一个是Student，Student继承自Person。Person类有两个私有成员变量name和age，以及一个公有的构造函数和一个公有的成员函数display，用于输出Person的姓名和年龄。Student类有一个私有成员变量id，以及一个公有的构造函数和一个公有的成员函数display，它继承了Person的成员函数display，并且在其基础上输出了学生的ID。

//在main函数中，分别定义了一个Person对象p和一个Student对象s，并调用它们各自的display函数输出信息。

//这个程序涉及到了类的继承、构造函数、成员函数、私有成员变量等概念，可以帮助我们更好地理解面向对象编程的思想和实现方式

/*
#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+ (const Complex& c);
    void display() const;
private:
    double real;
    double imag;
};

Complex Complex::operator+ (const Complex& c) {
    return Complex(real + c.real, imag + c.imag);
}

void Complex::display() const {
    cout << "(" << real << ", " << imag << ")" << endl;
}

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
} 
*/

//这是一个复数类的例子，其中 Complex 类重载了 + 运算符，能够对两个复数进行加法运算。该程序中的 Complex 类包含两个私有成员变量 real 和 imag，表示复数的实部和虚部。在构造函数中，初始化实部和虚部的默认值为 0。operator+ 函数返回一个新的 Complex 对象，表示两个复数相加的结果。display 函数用于输出复数对象的实部和虚部。

//在 main 函数中，首先创建了两个 Complex 类型的对象 c1 和 c2，分别代表复数 1 + 2i 和 3 + 4i。然后将它们相加，结果存储在一个新的 Complex 对象 c3 中，最后调用 display 函数输出 c3 的值。

//这个例子中同样使用了类和对象的概念，但它没有继承其他类，而是实现了运算符重载来实现复数加法。


#include <stdio.h>

const int MAX = 3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int  i, * ptr;

    /* 指针中第一个元素的地址 */
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {

        printf("存储地址：var[%d] = %p\n", i, ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);

        /* 指向上一个位置 */
        ptr++;
        i++;
    }
    printf("ptr指向 = %p\n", ptr);
    return 0;
}