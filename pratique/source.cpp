#include <cstdio>
#include <filesystem>
#include <print>
#include <iostream> 
#include <conio.h>
#include <string>

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