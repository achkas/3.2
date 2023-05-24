// задание по теме «Классы и объекты» 3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>;

class Counter {
private: 

    int quantity ;

   

public:
    int in_val ;          
       
    

    int plus() {
        quantity++;
        return quantity;
    }    

    int minus() {
        quantity--;
        return quantity;
    }    

    void print_quantity() {
        std::cout << quantity << std::endl;
    }


    Counter() {
        int in_val = 0;
        quantity = 1;
    }   
    

    void setquantity(int in_val) {
        quantity = in_val;
    }
    
};

enum class command {
    plus = '+',
    minus = '-',
    equals = '=',
   
};

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter Cont;
    
    std::string y = "да";    
    std::string inp = " "; 
   
    int in_val; 
        
    char close = 'х';
    char enter_command = ' ';

    std::cout <<"Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;

    std::cin >> inp;

    if (inp == y) {
        
        std::cout << "Введите начальное значение счётчика: " << std::endl;
        
        std::cin >> in_val;

        Cont.setquantity(in_val);

        //Cont.print_quantity();
       
    }            
    

    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;

        std::cin >> enter_command;

        command m = static_cast<command>(enter_command);

        switch (m) {      

        case command::plus:
                Cont.plus();
            break;

        case command::minus:
                Cont.minus();
            break;

        case command::equals:
            Cont.print_quantity();
            break;        
        }
    }
    while (enter_command != close);
    
    std::cout << "До свидания! " << std::endl;
        
    return 0;
}

