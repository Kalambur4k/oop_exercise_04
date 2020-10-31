/******************************************************************************
Velesov Daniil LAB4 OOP 19Var
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <tuple>
#include "Template.cpp"
using namespace std;


void printmenu(){//печать меню
    std::cout << "What shall we do? 1 - 7" << std::endl;
    std::cout << "1 - Edit Rectangle" << std::endl;
    std::cout << "2 - Edit Rhombus" << std::endl;
    std::cout << "3 - Edit Trapezoid" << std::endl;
    std::cout << "4 - Print coordinates" << std::endl;
    std::cout << "5 - Print total square" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "6 - print help" << std::endl;
    std::cout << "7 - exit" << std::endl;
    };

int main()
{
double inc_a,inc_b,inc_c;//переменные для ввода аргументов
int a = -1;
    std::cout << "OOP lab #4. Author: Velesov Daniil M8O - 208B - 19." << std::endl;
    std::cout << "select work mode:" << std::endl;
      std::cout << "1 - manual work mode" << std::endl;//выбор режима
      std::cout << "2 - exit" << std::endl;
      while (a != 2){
    std::cin >> a;
            if(a == 1){//ручной режим работы
    std::cout << "Hello there. It is a Figure Calculator.\nSetup Figures in Figures Tuple and start calculating total square by using 5 in menu.\n Calculator finds figures squares." << std::endl;
    printmenu();
    std::tuple<Rectangle<double>,Rhombus<double>,Trapezoid<double>> tuple;
    while (a != 8){//меню выбора действий
    std::cin >> a;
        if(a==1){
                std::cout << "Input width and length of Rectangle" << std::endl; //Изменение прямоугольника
                std::cin >> inc_a >> inc_b;
              std::get<0>(tuple).a.first = std::get<0>(tuple).a.second = 0;
              std::get<0>(tuple).b.first = inc_a;
              std::get<0>(tuple).b.second = 0;
              std::get<0>(tuple).c.first = inc_a;
              std::get<0>(tuple).c.second = inc_b;
              std::get<0>(tuple).d.first = 0;
              std::get<0>(tuple).d.second = inc_b;
             print(std::get<0>(tuple));
             std::cout << "DONE!" << std::endl;

        };
        if(a==2){
            std::cout << "Input diagonals of Rhombus" << std::endl; //Изменение ромба
            std::cin >> inc_a >> inc_b;
             std::get<1>(tuple).a.first = std::get<1>(tuple).a.second = 0;
             std::get<1>(tuple).b.first = inc_a/2;
             std::get<1>(tuple).b.second = inc_b/2;
             std::get<1>(tuple).c.first = inc_a;
             std::get<1>(tuple).c.second = 0;
             std::get<1>(tuple).d.first = inc_a/2;
             std::get<1>(tuple).d.second = -inc_b/2;
             print(std::get<1>(tuple));
            std::cout << "DONE!" << std::endl;
        };

        if(a==3){
            std::cout << "Input first base,second base, and height of Trapezoid" << std::endl; //Изменение трапеции
            std::cin >> inc_a >> inc_b >> inc_c;
            std::get<2>(tuple).a.first = std::get<2>(tuple).a.second = 0;
            std::get<2>(tuple).b.first = inc_a;
            std::get<2>(tuple).b.second = 0;
            std::get<2>(tuple).c.first = inc_b;
            std::get<2>(tuple).c.second = inc_c;
            std::get<2>(tuple).d.first = 0;
            std::get<2>(tuple).d.second = inc_c;
            print(std::get<2>(tuple));
            std::cout << "DONE!" << std::endl;
        };

        if(a==4){//печать кортежа фигур
            print_t(tuple);
            std::cout << "DONE!" << std::endl;
        };

        if(a==5){//печать суммарной площади фигур в кортеже
            total_square(tuple);
            std::cout << "DONE!" << std::endl;
        };

        if(a==6){//печать меню
            printmenu();
        };

        if(a==7){
            std::cout << "DONE!" << std::endl;
            return 0;
        };
    };
    return 0;
};
return 0;
};
};

