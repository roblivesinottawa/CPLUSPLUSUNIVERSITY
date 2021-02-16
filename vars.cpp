#include <iostream>
#include <limits.h>


using namespace std;

int main(){

    
    // Numerical data types
    // short int s = 20;
    std::cout << "Integer (int): "<< sizeof(int) << std::endl;
    std::cout << "Short (short): "<< sizeof(short) << std::endl;
    std::cout << "Long (long): "<< sizeof(long) << std::endl;
    std::cout << "Float (float): "<< sizeof(float) << std::endl;
    std::cout << "Double (double): "<< sizeof(double) << std::endl;

    // unsigned short y = 65536;
    // std::cout << y << std::endl;
    
    // float f = 60.78;
    // double d = 90.876421;

    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;
    std::cout << UINT_MAX << std::endl;
    std::cout << SHRT_MAX << std::endl;

    
    // textual data types

    char c = 'a';
    std::cout << sizeof(char) << std::endl;

    std::string s = "hello world";
    std::cout << s << std::endl;


    // boolean

    bool b = false;
    std::cout << b << std::endl;


    



    return 0;
}