#include <stdio.h>
#include <iostream>
#include <tuple>
using namespace std;

template<typename T>
struct Rectangle {//������ ��������������
    using coords = std::pair<T, T>;//������� ������
    coords a, b, c, d;
};

template<typename T>
struct Rhombus {//������ �����
    using coords = std::pair<T, T>;
    coords a, b, c, d;
};

template <class T>
struct Trapezoid{//������ ��������
    using coords = std::pair<T, T>;
    coords a, b, c, d;
};

template<class T>
void print(T & obj){//������ ��������� ��������� ������
 std::cout <<"Cordinates of figure:(" << obj.a.first << ";" << obj.a.second<<"),("<< obj.b.first << ";" << obj.b.second << ");(" << obj.c.first << ";"  << obj.c.second << ");(" << obj.d.first << ";" << obj.d.second << ")." <<std::endl;};

template<class T>//������ ��������� ���� ����� �������
void print_t(T & tuple){
    std::cout << "Rectangle" << std::endl;
    print(std::get<0>(tuple));
    std::cout << "Rhombus" << std::endl;
    print(std::get<1>(tuple));
    std::cout << "Trapezoid" << std::endl;
    print(std::get<2>(tuple));
}

template<class T>
void total_square(T & tuple){//��������� ������� ����� �������
double total;
total = (std::get<0>(tuple).c.first * std::get<0>(tuple).c.second) + (std::get<1>(tuple).c.first * std::get<1>(tuple).b.second) + (((std::get<2>(tuple).b.first + std::get<2>(tuple).c.first) / 2) * std::get<2>(tuple).c.second);
std::cout << "Total square of figures: " << total << std::endl;
}
