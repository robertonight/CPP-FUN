#include <cstdio>
#include <filesystem>
#include <print>
#include <iostream> 
#include <conio.h>
#include <string>


class Person {

public:
    int age;
    std::string nom;

};

int main()
{
    std::println("Hello World!\n");

    std::print("Votre nom: ");

    std::string temp;

    std::getline(std::cin, temp);

    std::println("Salut {}", temp);


    _getch();

    return 0;
}