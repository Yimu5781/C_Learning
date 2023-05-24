/*
#include <iostream>
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
} 
*/ 
//����������������࣬һ����Person��һ����Student��Student�̳���Person��
//Person��������˽�г�Ա����name��age���Լ�һ�����еĹ��캯����һ�����еĳ�Ա����display���������Person�����������䡣
//Student����һ��˽�г�Ա����id���Լ�һ�����еĹ��캯����һ�����еĳ�Ա����display�����̳���Person�ĳ�Ա����display��������������������ѧ����ID��

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

//����һ������������ӣ����� Complex �������� + ��������ܹ��������������мӷ����㡣
//�ó����е� Complex ���������˽�г�Ա���� real �� imag����ʾ������ʵ�����鲿��
//�ڹ��캯���У���ʼ��ʵ�����鲿��Ĭ��ֵΪ 0��operator+ ��������һ���µ� Complex ���󣬱�ʾ����������ӵĽ����
//display ��������������������ʵ�����鲿��

//�� main �����У����ȴ��������� Complex ���͵Ķ��� c1 �� c2���ֱ������ 1 + 2i �� 3 + 4i��
//Ȼ��������ӣ�����洢��һ���µ� Complex ���� c3 �У������� display ������� c3 ��ֵ��

//���������ͬ��ʹ������Ͷ���ĸ������û�м̳������࣬����ʵ���������������ʵ�ָ����ӷ���


/*
#include <stdio.h>

const int MAX = 3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int  i, * ptr;

    // ָ���е�һ��Ԫ�صĵ�ַ
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {

        printf("�洢��ַ��var[%d] = %p\n", i, ptr);
        printf("�洢ֵ��var[%d] = %d\n", i, *ptr);

        // ָ����һ��λ�� 
        ptr++;
        i++;
    }
    printf("ptrָ�� = %p\n", ptr);
    return 0;
}
*/

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

// Ҫ���ɺͷ���������ĺ���
int* getRandom()
{
    static int  r[10];
    int i;

    // �������� 
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("%d\n", r[i]);
    }

    return r;
}


// Ҫ�������涨�庯����������
int main()
{
    // һ��ָ��������ָ�� 
    int* p;
    int i;

    p = getRandom();
    for (i = 0; i < 10; i++)
    {
        printf("*(p + [%d]) : %d\n", i, *(p + i));
    }

    return 0;
}
*/


/*
#include <stdlib.h>  
#include <stdio.h>

void populate_array(int* array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int myarray[10];
    // getNextRandomValue ���ܼ����ţ������޷����룬��Ϊ��������֮���൱�ڴ���˲���ʱ������ int , �����Ǻ���ָ��
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    getchar();
    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    errno_t err;

    err = fopen_s(&fp, "/tmp/test.txt", "w" );
    if (err != 0) {
        printf("Failed to open file. Error code: %d\n", err);
        return 1;
    }
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    printf("Press any key to exit...");
    getchar();

    return 0;
}
// ���ʧ���ˣ�û�гɹ��ڱ������У�������Ȩ�޲��㣿
*/


//#define square(x) ((x)*(x))
//#include <stdio.h>
//
//int main() {
//    int a=5,b;
//
//    b = square(a);
//    printf("%d", b);
//}


//#include <stdio.h>
//
//#define max(x,y) ((x) > (y) ? (x) : (y))
//
//int main(void)
//{
//    printf("max between 20 and 10 is %d\n", max(10, 20));
//    return 0;
//}

/*
#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{

    va_list valist;
    double sum = 0.0;
    int i;

    // Ϊ num ��������ʼ�� valist 
    va_start(valist, num);

    // �������и��� valist �Ĳ��� 
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    // ����Ϊ valist �������ڴ� 
    va_end(valist);

    return sum / num;
}

int main()
{
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}
*/

/*
#include<stdio.h>

int main() {
    int a;
    char b;
    double c;

    printf("%llu\n", sizeof(a));
    printf("%llu\n", sizeof(b));
    printf("%llu\n", sizeof(c));

}
*/

/*
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
}
//����������в����ĳ�����ʱ�е��ò��ϣ�û���ҵ�ʵ�ʵĲ����ռ�
*/


/*
//ð������
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//swap������ָ������޸ģ����ֱ�Ӵ�����ֵ�Ļ���ΪC�����к��������Ǵ�ֵ�����Ǵ����ã�
//����ζ���ڵ��ú���ʱ��ʵ�ε�ֵ�ᱻ���Ƶ��������β��У��βεĸı䲢����Ӱ��ʵ�ε�ֵ��
//����������£������ڲ�������ֻ���βε�ֵ���ѣ������ܴﵽ������Ҫ�Ľ���ʵ��ֵ��Ŀ�ġ�

void bobble(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); //ͬ������ҲӦ�ý�ָ�봫�ݸ�swap����
            }
        }
    }
}

int main() {
    int arr[10];
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 100+1;
    }

    printf("�������:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int len = (int) sizeof(arr) / sizeof(*arr); //��ʾ���鳤��
    bobble(arr, len);
    printf("���������飺\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
//ѡ������
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[10];
    int i,j;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("�������:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int len = (int)sizeof(arr) / sizeof(*arr); //��ʾ���鳤��
    for (i = 0; i < len - 1; i++) {
        int min = arr[i];
        for (j = i + 1; j < len; j++) {
            if (arr[j] < min) {
                swap(&arr[i], &arr[j]);
                min = arr[i];
            }
        }
    }

    printf("���������飺\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/



//c++

//C++ ��һ�־�̬���͵ġ�����ʽ�ġ�ͨ�õġ���Сд���еġ�������ı�����ԣ�֧�ֹ��̻���̡���������̺ͷ��ͱ�̡�


/*
#include<iostream>  
#include <limits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
    cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
    cout << "\t���ֵ��" << (numeric_limits<char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
    cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
    cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
    cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
    cout << "\t���ֵ��" << (numeric_limits<short>::max)();
    cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
    cout << "\t���ֵ��" << (numeric_limits<int>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
    cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
    cout << "\t���ֵ��" << (numeric_limits<long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
    cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
    cout << "\t���ֵ��" << (numeric_limits<double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
    cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
    cout << "\t���ֵ��" << (numeric_limits<float>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
    cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
    cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
    // << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************" << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a(100);
    int b(200);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    
    swap(&a, &b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
//ָ�����
*/

/*
#include<iostream>
using namespace std;

//������
void swap(int& x, int& y) { 
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a(100);
    int b(200);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap(a, b); //����

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
//���õ���
*/

//Lambda ����:[capture list] (parameter list) -> return type { function body }
//�����б�����ָ������ķ�ʽ���ֱ��ǰ�ֵ��=���Ͱ����ã�&����
//�����ֵ����һ��������Lambda ���ʽ���Ḵ�����������ֵ������������ʹ�����ĸ�����
//����������ò���һ���������� Lambda ���ʽ��ʹ���ⲿ������ԭʼ���á�

/*
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    srand((unsigned)time(NULL));    // ��������

    // ���� 10 �������,���ɶκ�Cһ��
    for (i = 0; i < 10; i++)
    {
        j = rand();
        cout << "������� " << j << endl;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void main() {
    int n[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) {
        cout << n[i] << " ";
    }
}
//�������
*/

/*
#include<iostream>
using namespace std;

int main() {
    int group[5];
    for (int i = 0; i < 5; i++) {
        std::cout << "input Mo." << i+1 << " ";
        std::cin >> group[i];
    }
    std::cout << "The group include: ";
    for (int i = 0; i < 5; i++) {
        cout << group[i] << " ";
    }
    return 0;
}
//�����룬�ٱ���
*/

/*
//�Ӻ����������飬C++ ��������һ��������������Ϊ�����Ĳ�����
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int* getRandom()
{
    static int  r[10];
    //C++ ��֧���ں����ⷵ�ؾֲ������ĵ�ַ�����Ƕ���ֲ�����Ϊ static ������ 
    //Ϊ�˱�����������������ʹ�þ�̬������߶�̬�������顣
    //static int r[10];���Ǿ�̬���飬
    //int* arr = new int[size];���Ƕ�̬���飬��Ҫ����������delete[] myArray;�����ͷ��ڴ�

    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

int main()
{
    int* p;

    p = getRandom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}
*/

/*
#include <iostream>

using namespace std;
const int MAX = 4;

int main()
{
    const char* names[MAX] = {
                      "Zara Ali",
                      "Hina Ali",
                      "Nuha Ali",
                      "Sara Ali",
    };

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
        //������һ���ַ�ָ������ȥ�洢����ַ�������ʱ��ÿ��Ԫ�ض���ָ��ͬ���ַ���������
        //���Ա��������ʱ��ʵ�����������ÿ��Ԫ��ָ����ַ���������
    }
    return 0;
}
//ָ������
*/

/*
#include <iostream>

using namespace std;
const int MAX = 4;

int main()
{
    int n[MAX] = { 1,2,3,5 };
    const int* names[MAX];

    for (int i = 0; i < MAX; i++)
    {
        names[i] = &n[i];
        cout << "Value of names[" << i << "] = ";
        cout << *names[i] << endl;
    }
    return 0;
}
//�ܽ᣺�ַ��������������������ַ������������� null �ַ�('\0') ��β��
//��ʹ���ַ�ָ��ָ���ַ�������ʱ�����ǲ���Ҫ�����Ƿ���Ҫ��ָ��ĩβ��� null �ַ���
//�������������͵�ָ�룬ָ��ָ��ĵ�ַ�в�û�й涨һ��Ҫ�� null ��β��
//���������Ҫȷ��ָ��ָ��ĵ�ַ�����㹻���ڴ�ռ����洢ָ����������͵�ֵ��
*/

/*
//��������
#include <iostream>

using namespace std;

double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

double& setValues(int i) {
    double& ref = vals[i];
    return ref;  
}

int main()
{

    cout << "�ı�ǰ��ֵ" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23; 
    setValues(3) = 70.8;  

    cout << "�ı���ֵ" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}
// setValues(1) ���ص��� vals[1] �����ã��൱�ڷ����� vals[1] ���ڴ��ַ������ķ���ֵ��һ����ֵ��
//�� double& ��һ����ֵ���ã����԰󶨵���ֵ��Ҳ���ǿ���ֱ���޸�������ָ��ı�����ֵ��
//��ˣ�ͨ�� setValues(1) = 1.23 �Ϳ���ֱ���޸� vals[1] ��ֵ��
*/

/*
//class test
#include<iostream>
using namespace std;

class Student {
    public:
        char name[50];
        int idnumber;
        int age;
};

class Leader :public Student {
public:
    bool isleader;
};

int main() {
    Student aa;
    aa.idnumber = 100001;
    aa.age = 18;
    strcpy_s(aa.name,sizeof(aa.name), "Lance");
    Leader bb;
    strcpy_s(bb.name,sizeof(bb.name), "Archer");
    bb.idnumber = 100002;
    bb.age = 18;
    bb.isleader = true;

    cout << aa.name << " " << aa.idnumber << " " << aa.idnumber << endl;
    cout << bb.name << " " << bb.idnumber << " " << bb.idnumber << endl;
    if (bb.isleader == true) {
        cout << "He/She is a leader." << endl;
    }
    return 0;
}
*/

/*
//��������
#include <iostream>
using namespace std;

class printData
{
public:
    void print(int i) {
        cout << "����Ϊ: " << i << endl;
    }

    void print(double  f) {
        cout << "������Ϊ: " << f << endl;
    }

    void print(char c[]) {
        cout << "�ַ���Ϊ: " << c << endl;
    }
};

int main(void)
{
    printData pd;

    // �������
    pd.print(5);
    // ���������
    pd.print(500.263);
    // ����ַ���
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}
*/

/*
//��������أ� operator+(const Box&);
#include<iostream>
using namespace std;

class Complex {
public:
    int real_part;
    int imaginary_part;
    Complex operator+(const Complex& b) {
        Complex a;
        a.real_part = this->real_part + b.real_part;
        a.imaginary_part = this->imaginary_part + b.imaginary_part;
        return a;
    }
    Complex operator*(const Complex& b) {
        Complex a;
        a.real_part = (this->real_part * b.real_part) - (this->imaginary_part * b.imaginary_part);
        a.imaginary_part = (this->real_part * b.imaginary_part) + (this->imaginary_part * b.real_part);
        return a;
    }
    bool operator == (const Complex& b) {
        if (this->real_part == b.real_part && this->imaginary_part == b.imaginary_part) {
            return true;
        }
        return false;
    }
};

int main() {
    Complex a, b;
    cout << "Please enter the first complex number's real and imaginary parts: ";
    cin >> a.real_part >> a.imaginary_part;
    cout << "Please enter the second complex number's real and imaginary parts: ";
    cin >> b.real_part >> b.imaginary_part;

    Complex sum = a + b;
    Complex product = a * b;
    bool equal = (a == b);

    cout << "The sum of the two complex numbers is: " << sum.real_part << " + " << sum.imaginary_part << "i" << endl;
    cout << "The product of the two complex numbers is: " << product.real_part << " + " << product.imaginary_part << "i" << endl;

    if (equal) {
        cout << "The two complex numbers are equal." << endl;
    }
    else {
        cout << "The two complex numbers are not equal." << endl;
    }

    return 0;
}
*/
//���䣺ǰ׺��ʽ���ص��� Check operator ++ () ����׺��ʽ���ص��� operator ++ (int)
//����[]�������У�int& operator[](int i)�����ﷵ�ص��������е�ĳ��Ԫ�أ�Ϊ��ֵ������ֵӦ��Ϊһ�����ã�������&

/*
//����[]��->
#include <iostream>
using namespace std;

class MyVector {
private:
    double x, y, z;
public:
    MyVector(double x = 0, double y = 0, double z = 0) :x(x), y(y), z(z) {}
    double operator[](int i) const {
        switch (i) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        default:
            cerr << "Invalid index" << endl;
            return 0;
        }
    }
    //const�ؼ��ֱ�ʾ���������һ��������Ա�����������޸�MyVector��������ݳ�Ա
    double& operator[](int i) {
        switch (i) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        default:
            cerr << "Invalid index" << endl;
            return x;
        }
    }
    //������غ���û��ʹ��const�ؼ������Σ�����������޸�MyVector�����ж�Ӧ�����ĳ�Ա������ֵ
};

class MyVectorPtr {
private:
    MyVector* pVector; //ָ�� MyVector ���͵�ָ��
public:
    MyVectorPtr(MyVector* p = 0) :pVector(p) {}
    MyVector* operator->() const {
        return pVector;
    }
    MyVector& operator*() const {
        return *pVector;
    }
};

int main() {
    MyVector v(1, 2, 3);
    MyVectorPtr ptr(&v);
    cout << "ptr->x = " << ptr->operator[](0) << endl; 
    //ʹ�ü�ͷ���������ָ��MyVector�����ָ�룬Ȼ�����MyVector�����operator[]���������ʵ�һ��Ԫ��
    cout << "(*ptr)[1] = " << (*ptr)[1] << endl; 
    //��(*ptr)[1]��ʾʹ��ָ��ptr������MyVector���е�operator*()��������*pVector����ʹ��operator[]����ȡ�±�Ϊ1��Ԫ�ء�
    //�����(*ptr)[1]ָ�ĸ������ĵڶ���Ԫ��
    return 0;
}
*/

/*
//��̬
#include <iostream> 
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area() = 0;//���麯��"=0"
};
class Rectangle : public Shape {
public:
    Rectangle(int a = 0, int b = 0) :Shape(a, b) { }
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};
class Triangle : public Shape {
public:
    Triangle(int a = 0, int b = 0) :Shape(a, b) { }
    int area()
    {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};
// �����������
int main()
{
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    // �洢���εĵ�ַ
    shape = &rec;
    // ���þ��ε���������� area
    shape->area();

    // �洢�����εĵ�ַ
    shape = &tri;
    // ���������ε���������� area
    shape->area();

    return 0;
}
//�麯����Ϊ�������û����ָ��������������������
//���麯����Ϊ��ʵ��һ���ӿڣ���һ���淶�����ã��淶�̳������ĳ���Ա����ʵ���������
*/


/*
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char* what() const throw ()
        //override��what()
        //const char* �Ƿ������ͣ�what() �Ǻ������ƣ�
        //const �ؼ���������֮���ʾ�ú��������޸Ķ���ĳ�Ա����
        //throw() ���쳣�淶��exception specification����ָʾ�ú��������׳��κ��쳣
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        //�����Ĵ���
    }
}
*/

/*
//��д
#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "This is the Base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "This is the Derived class." << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->print();  // �����This is the Derived class.

    delete basePtr;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Box
{
public:
    Box() {
        cout << "���ù��캯����" << endl;
    }
    ~Box() {
        cout << "��������������" << endl;
    }
    //����������Destructor����һ������ĳ�Ա���������ڶ�������ʱ�Զ�����
};

int main()
{
    Box* myBoxArray = new Box[4];

    delete[] myBoxArray; // ɾ������
    return 0;
}
*/

/*
//����ģ��
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
*/

/*
//��ģ��
template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) : first(f), second(s) {}

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }
};

//ʹ������
Pair<int> myPair(10, 20); //������
cout << "First: " << myPair.getFirst() << endl;
cout << "Second: " << myPair.getSecond() << endl;
*/

/*
//�ź�
#include <iostream>
#include <csignal>

using namespace std;

// �źŴ������
void signalHandler(int signum) {
    cout << "���յ��źţ�" << signum << endl;
    // ִ���źŴ����߼�
    // ...
}

int main() {
    // ע���źŴ������
    signal(SIGINT, signalHandler);

    cout << "���� Ctrl+C �������ź�(SIGINT)..." << endl;

    // ����ѭ�����ȴ��źŴ���
    while (true) {
    }

    return 0;
}
*/

//��ᣡ��һ��ѧ������ϵͳ��β
/*
* ���һ��ѧ������ϵͳ������ѧ����Ϣ��¼�롢��ѯ��ͳ�ƹ��ܡ�
* 1.����һ��ѧ���ࣨStudent��������ѧ�������������䡢�Ա�ͳɼ�����Ϣ��ʹ���ʵ����������ͺͷ������η���
* 2.ʵ��ѧ����Ϣ��¼�빦�ܣ������û�������ѧ������Ϣ�����䱣�浽һ��ѧ�����������С�
* 3.ʵ��ѧ����Ϣ�Ĳ�ѯ���ܣ������û����������������ؼ��ֲ�ѯѧ����Ϣ���������ѯ�����
* 4.ʵ��ѧ����Ϣ��ͳ�ƹ��ܣ���������ѧ����ƽ���ɼ�����߳ɼ�����ͳɼ���ͳ�����ݣ�����������
* 5.�ṩһ���򵥵Ĳ˵����棬�����û�ѡ��Ҫִ�еĲ�����ֱ���û�ѡ���˳�����
*/

    //getline(cin, name); 
    //�ڽ����������Ա�����ʱ����ʹ���� cin����ᵼ��ֻ�ܽ��յ�����


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int age;
    string sex;
    double score;

    Student(const string& name, int age, const string& sex, double score)
        : name(name), age(age), sex(sex), score(score) {}
};

// ¼��ѧ����Ϣ
void inputStudent(vector<Student>& students) {
    string name, sex;
    int age;
    double score;

    cout << "Input Student name: ";
    cin >> name;
    cout << "Input Student age: ";
    cin >> age;
    cout << "Input Student sex: ";
    cin >> sex;
    cout << "Input Student score: ";
    cin >> score;

    students.emplace_back(name, age, sex, score);
    cout << "Student information added successfully!" << endl;
}

// ��ѯѧ����Ϣ
void searchStudent(const vector<Student>& students, const string& keyword) {
    bool found = false;

    for (const auto& student : students) {
        if (student.name == keyword) {
            cout << "Name: " << student.name << endl;
            cout << "Age: " << student.age << endl;
            cout << "Sex: " << student.sex << endl;
            cout << "Score: " << student.score << endl;
            cout << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No matching student found!" << endl;
    }
}

// ͳ��ѧ����Ϣ
void calculateStudent(const vector<Student>& students) {
    double totalScore = 0.0;
    double maxScore = 0.0;
    double minScore = students.empty() ? 0.0 : students[0].score;

    for (const auto& student : students) {
        totalScore += student.score;
        if (student.score > maxScore) {
            maxScore = student.score;
        }
        if (student.score < minScore) {
            minScore = student.score;
        }
    }

    double averageScore = students.empty() ? 0.0 : totalScore / students.size();

    cout << "Total Students: " << students.size() << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Max Score: " << maxScore << endl;
    cout << "Min Score: " << minScore << endl;
}

// ��ʾ�˵�
void showMenu() {
    cout << "========== Student Management System ==========" << endl;
    cout << "1. Input Student Information" << endl;
    cout << "2. Search Student Information" << endl;
    cout << "3. Calculate Student Statistics" << endl;
    cout << "4. Exit" << endl;
    cout << "===============================================" << endl;
    cout << "Please enter your choice (1-4): ";
}

int main() {
    vector<Student> students;

    int choice;
    string keyword;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            inputStudent(students);
            break;
        case 2:
            cout << "Enter the student name to search: ";
            cin >> keyword;
            searchStudent(students, keyword);
            break;
        case 3:
            calculateStudent(students);
            break;
        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}


/*
//C����ʵ��

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    char sex[10];
    double score;
};

void inputStudent(struct Student* students, int count);
void searchStudent(const struct Student* students, int count, const char* keyword);
void calculateStudent(const struct Student* students, int count);

int main() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    getchar(); // ������뻺�����Ļ��з�

    struct Student* students = (struct Student*)malloc(count * sizeof(struct Student));

    inputStudent(students, count);

    char keyword[100];
    printf("Enter a name to search: ");
    fgets(keyword, 100, stdin);
    keyword[strcspn(keyword, "\n")] = '\0'; // ȥ�������ַ����Ļ��з�

    searchStudent(students, count, keyword);

    calculateStudent(students, count);

    free(students);

    return 0;
}

void inputStudent(struct Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter Student %d's name: ", i + 1);
        fgets(students[i].name, 100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // ȥ�������ַ����Ļ��з�

        printf("Enter Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);
        getchar(); // ������뻺�����Ļ��з�

        printf("Enter Student %d's sex: ", i + 1);
        fgets(students[i].sex, 10, stdin);
        students[i].sex[strcspn(students[i].sex, "\n")] = '\0'; // ȥ�������ַ����Ļ��з�

        printf("Enter Student %d's score: ", i + 1);
        scanf("%lf", &students[i].score);
        getchar(); // ������뻺�����Ļ��з�

        printf("\n");
    }
}

void searchStudent(const struct Student* students, int count, const char* keyword) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, keyword) == 0) {
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Sex: %s\n", students[i].sex);
            printf("Score: %.2lf\n", students[i].score);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("No matching student found!\n");
    }
}

void calculateStudent(const struct Student* students, int count) {
    double totalScore = 0.0;
    double minScore = students[0].score;
    double maxScore = students[0].score;

    for (int i = 0; i < count; i++) {
        totalScore += students[i].score;

        if (students[i].score < minScore) {
            minScore = students[i].score;
        }
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
        }
    }

    double averageScore = totalScore / count;

    printf("Average Score: %.2lf\n", averageScore);
    printf("Min Score: %.2lf\n", minScore);
    printf("Max Score: %.2lf\n", maxScore);
}
*/