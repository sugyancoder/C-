#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "Sugyan";
    int age = 15;

    happyBirthday(name, age);

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!\n";
}