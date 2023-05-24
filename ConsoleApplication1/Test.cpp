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
//这个程序定义了两个类，一个是Person，一个是Student，Student继承自Person。
//Person类有两个私有成员变量name和age，以及一个公有的构造函数和一个公有的成员函数display，用于输出Person的姓名和年龄。
//Student类有一个私有成员变量id，以及一个公有的构造函数和一个公有的成员函数display，它继承了Person的成员函数display，并且在其基础上输出了学生的ID。

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

//这是一个复数类的例子，其中 Complex 类重载了 + 运算符，能够对两个复数进行加法运算。
//该程序中的 Complex 类包含两个私有成员变量 real 和 imag，表示复数的实部和虚部。
//在构造函数中，初始化实部和虚部的默认值为 0。operator+ 函数返回一个新的 Complex 对象，表示两个复数相加的结果。
//display 函数用于输出复数对象的实部和虚部。

//在 main 函数中，首先创建了两个 Complex 类型的对象 c1 和 c2，分别代表复数 1 + 2i 和 3 + 4i。
//然后将它们相加，结果存储在一个新的 Complex 对象 c3 中，最后调用 display 函数输出 c3 的值。

//这个例子中同样使用了类和对象的概念，但它没有继承其他类，而是实现了运算符重载来实现复数加法。


/*
#include <stdio.h>

const int MAX = 3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int  i, * ptr;

    // 指针中第一个元素的地址
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {

        printf("存储地址：var[%d] = %p\n", i, ptr);
        printf("存储值：var[%d] = %d\n", i, *ptr);

        // 指向上一个位置 
        ptr++;
        i++;
    }
    printf("ptr指向 = %p\n", ptr);
    return 0;
}
*/

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

// 要生成和返回随机数的函数
int* getRandom()
{
    static int  r[10];
    int i;

    // 设置种子 
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf("%d\n", r[i]);
    }

    return r;
}


// 要调用上面定义函数的主函数
int main()
{
    // 一个指向整数的指针 
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

// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int myarray[10];
    // getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针
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
// 这个失败了，没有成功在本地运行，可能是权限不足？
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

    // 为 num 个参数初始化 valist 
    va_start(valist, num);

    // 访问所有赋给 valist 的参数 
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    // 清理为 valist 保留的内存 
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
//这个是命令行参数的程序，暂时有点用不上，没有找到实际的操作空间
*/


/*
//冒泡排序
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//swap里面用指针进行修改，如果直接传入数值的话因为C语言中函数参数是传值而不是传引用，
//这意味着在调用函数时，实参的值会被复制到函数的形参中，形参的改变并不会影响实参的值。
//在这种情况下，函数内部交换的只是形参的值而已，并不能达到我们想要的交换实参值的目的。

void bobble(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); //同理，这里也应该将指针传递给swap函数
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

    printf("数组包含:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int len = (int) sizeof(arr) / sizeof(*arr); //表示数组长度
    bobble(arr, len);
    printf("排序后的数组：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
//选择排序
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

    printf("数组包含:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int len = (int)sizeof(arr) / sizeof(*arr); //表示数组长度
    for (i = 0; i < len - 1; i++) {
        int min = arr[i];
        for (j = i + 1; j < len; j++) {
            if (arr[j] < min) {
                swap(&arr[i], &arr[j]);
                min = arr[i];
            }
        }
    }

    printf("排序后的数组：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/



//c++

//C++ 是一种静态类型的、编译式的、通用的、大小写敏感的、不规则的编程语言，支持过程化编程、面向对象编程和泛型编程。


/*
#include<iostream>  
#include <limits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
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
//指针调用
*/

/*
#include<iostream>
using namespace std;

//↓区别
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

    swap(a, b); //区别

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
//引用调用
*/

//Lambda 函数:[capture list] (parameter list) -> return type { function body }
//捕获列表还可以指定捕获的方式，分别是按值（=）和按引用（&）。
//如果按值捕获一个变量，Lambda 表达式将会复制这个变量的值，并在主体中使用它的副本。
//而如果按引用捕获一个变量，则 Lambda 表达式将使用外部变量的原始引用。

/*
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    srand((unsigned)time(NULL));    // 设置种子

    // 生成 10 个随机数,生成段和C一样
    for (i = 0; i < 10; i++)
    {
        j = rand();
        cout << "随机数： " << j << endl;
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
//数组遍历
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
//先输入，再遍历
*/

/*
//从函数返回数组，C++ 不允许返回一个完整的数组作为函数的参数。
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int* getRandom()
{
    static int  r[10];
    //C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。 
    //为了避免以上情况，你可以使用静态数组或者动态分配数组。
    //static int r[10];就是静态数组，
    //int* arr = new int[size];就是动态数组，需要在主函数中delete[] myArray;用来释放内存

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
        //当你用一个字符指针数组去存储多个字符串常量时，每个元素都会指向不同的字符串常量，
        //所以遍历输出的时候，实际上输出的是每个元素指向的字符串常量。
    }
    return 0;
}
//指针数组
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
//总结：字符型与其他类型有区别，字符串常量必须以 null 字符('\0') 结尾。
//在使用字符指针指向字符串常量时，我们不需要考虑是否需要在指针末尾添加 null 字符。
//而对于其他类型的指针，指针指向的地址中并没有规定一定要以 null 结尾，
//因此我们需要确保指针指向的地址上有足够的内存空间来存储指向的数据类型的值。
*/

/*
//返回引用
#include <iostream>

using namespace std;

double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

double& setValues(int i) {
    double& ref = vals[i];
    return ref;  
}

int main()
{

    cout << "改变前的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23; 
    setValues(3) = 70.8;  

    cout << "改变后的值" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}
// setValues(1) 返回的是 vals[1] 的引用，相当于返回了 vals[1] 的内存地址，这里的返回值是一个左值。
//而 double& 是一个左值引用，可以绑定到左值，也就是可以直接修改引用所指向的变量的值。
//因此，通过 setValues(1) = 1.23 就可以直接修改 vals[1] 的值。
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
//函数重载
#include <iostream>
using namespace std;

class printData
{
public:
    void print(int i) {
        cout << "整数为: " << i << endl;
    }

    void print(double  f) {
        cout << "浮点数为: " << f << endl;
    }

    void print(char c[]) {
        cout << "字符串为: " << c << endl;
    }
};

int main(void)
{
    printData pd;

    // 输出整数
    pd.print(5);
    // 输出浮点数
    pd.print(500.263);
    // 输出字符串
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}
*/

/*
//运算符重载： operator+(const Box&);
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
//补充：前缀形式重载调用 Check operator ++ () ，后缀形式重载调用 operator ++ (int)
//重载[]的例子中，int& operator[](int i)，这里返回的是数组中的某个元素，为左值，返回值应该为一个引用，所以用&

/*
//重载[]，->
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
    //const关键字表示这个重载是一个常量成员函数，不会修改MyVector对象的数据成员
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
    //这个重载函数没有使用const关键字修饰，因此它可以修改MyVector对象中对应索引的成员变量的值
};

class MyVectorPtr {
private:
    MyVector* pVector; //指向 MyVector 类型的指针
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
    //使用箭头运算符访问指向MyVector对象的指针，然后调用MyVector对象的operator[]函数来访问第一个元素
    cout << "(*ptr)[1] = " << (*ptr)[1] << endl; 
    //而(*ptr)[1]表示使用指针ptr来访问MyVector类中的operator*()函数，即*pVector，再使用operator[]函数取下标为1的元素。
    //这里的(*ptr)[1]指的该向量的第二个元素
    return 0;
}
*/

/*
//多态
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
    virtual int area() = 0;//纯虚函数"=0"
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
// 程序的主函数
int main()
{
    Shape* shape;
    Rectangle rec(10, 7);
    Triangle  tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->area();

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->area();

    return 0;
}
//虚函数是为了允许用基类的指针来调用子类的这个函数
//纯虚函数是为了实现一个接口，起到一个规范的作用，规范继承这个类的程序员必须实现这个函数
*/


/*
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char* what() const throw ()
        //override了what()
        //const char* 是返回类型，what() 是函数名称，
        //const 关键字在括号之后表示该函数不会修改对象的成员变量
        //throw() 是异常规范（exception specification），指示该函数不会抛出任何异常
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
        //其他的错误
    }
}
*/

/*
//重写
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
    basePtr->print();  // 输出：This is the Derived class.

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
        cout << "调用构造函数！" << endl;
    }
    ~Box() {
        cout << "调用析构函数！" << endl;
    }
    //析构函数（Destructor）是一种特殊的成员函数，它在对象被销毁时自动调用
};

int main()
{
    Box* myBoxArray = new Box[4];

    delete[] myBoxArray; // 删除数组
    return 0;
}
*/

/*
//函数模板
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
*/

/*
//类模板
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

//使用例：
Pair<int> myPair(10, 20); //尖括号
cout << "First: " << myPair.getFirst() << endl;
cout << "Second: " << myPair.getSecond() << endl;
*/

/*
//信号
#include <iostream>
#include <csignal>

using namespace std;

// 信号处理程序
void signalHandler(int signum) {
    cout << "接收到信号：" << signum << endl;
    // 执行信号处理逻辑
    // ...
}

int main() {
    // 注册信号处理程序
    signal(SIGINT, signalHandler);

    cout << "按下 Ctrl+C 来触发信号(SIGINT)..." << endl;

    // 无限循环，等待信号触发
    while (true) {
    }

    return 0;
}
*/

//完结！以一个学生管理系统结尾
/*
* 设计一个学生管理系统，包括学生信息的录入、查询和统计功能。
* 1.定义一个学生类（Student），包括学生的姓名、年龄、性别和成绩等信息。使用适当的数据类型和访问修饰符。
* 2.实现学生信息的录入功能，允许用户输入多个学生的信息，将其保存到一个学生对象数组中。
* 3.实现学生信息的查询功能，允许用户根据姓名或其他关键字查询学生信息，并输出查询结果。
* 4.实现学生信息的统计功能，包括计算学生的平均成绩、最高成绩和最低成绩等统计数据，并输出结果。
* 5.提供一个简单的菜单界面，允许用户选择要执行的操作，直到用户选择退出程序。
*/

    //getline(cin, name); 
    //在接收姓名和性别输入时，你使用了 cin，这会导致只能接收单个词


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

// 录入学生信息
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

// 查询学生信息
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

// 统计学生信息
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

// 显示菜单
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
//C语言实现

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
    getchar(); // 清除输入缓冲区的换行符

    struct Student* students = (struct Student*)malloc(count * sizeof(struct Student));

    inputStudent(students, count);

    char keyword[100];
    printf("Enter a name to search: ");
    fgets(keyword, 100, stdin);
    keyword[strcspn(keyword, "\n")] = '\0'; // 去除输入字符串的换行符

    searchStudent(students, count, keyword);

    calculateStudent(students, count);

    free(students);

    return 0;
}

void inputStudent(struct Student* students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter Student %d's name: ", i + 1);
        fgets(students[i].name, 100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // 去除输入字符串的换行符

        printf("Enter Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);
        getchar(); // 清除输入缓冲区的换行符

        printf("Enter Student %d's sex: ", i + 1);
        fgets(students[i].sex, 10, stdin);
        students[i].sex[strcspn(students[i].sex, "\n")] = '\0'; // 去除输入字符串的换行符

        printf("Enter Student %d's score: ", i + 1);
        scanf("%lf", &students[i].score);
        getchar(); // 清除输入缓冲区的换行符

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