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
//����������������࣬һ����Person��һ����Student��Student�̳���Person��Person��������˽�г�Ա����name��age���Լ�һ�����еĹ��캯����һ�����еĳ�Ա����display���������Person�����������䡣Student����һ��˽�г�Ա����id���Լ�һ�����еĹ��캯����һ�����еĳ�Ա����display�����̳���Person�ĳ�Ա����display��������������������ѧ����ID��

//��main�����У��ֱ�����һ��Person����p��һ��Student����s�����������Ǹ��Ե�display���������Ϣ��

//��������漰������ļ̳С����캯������Ա������˽�г�Ա�����ȸ�����԰������Ǹ��õ������������̵�˼���ʵ�ַ�ʽ

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

//����һ������������ӣ����� Complex �������� + ��������ܹ��������������мӷ����㡣�ó����е� Complex ���������˽�г�Ա���� real �� imag����ʾ������ʵ�����鲿���ڹ��캯���У���ʼ��ʵ�����鲿��Ĭ��ֵΪ 0��operator+ ��������һ���µ� Complex ���󣬱�ʾ����������ӵĽ����display ��������������������ʵ�����鲿��

//�� main �����У����ȴ��������� Complex ���͵Ķ��� c1 �� c2���ֱ������ 1 + 2i �� 3 + 4i��Ȼ��������ӣ�����洢��һ���µ� Complex ���� c3 �У������� display ������� c3 ��ֵ��

//���������ͬ��ʹ������Ͷ���ĸ������û�м̳������࣬����ʵ���������������ʵ�ָ����ӷ���


#include <stdio.h>

const int MAX = 3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int  i, * ptr;

    /* ָ���е�һ��Ԫ�صĵ�ַ */
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {

        printf("�洢��ַ��var[%d] = %p\n", i, ptr);
        printf("�洢ֵ��var[%d] = %d\n", i, *ptr);

        /* ָ����һ��λ�� */
        ptr++;
        i++;
    }
    printf("ptrָ�� = %p\n", ptr);
    return 0;
}