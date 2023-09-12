#include <iostream>

int toInt(const char* str) 
{
    int num = 0;
    int i = 0;

    while (str[i] != '\0') {
        num += str[i] - '0';
        i++;
        num *= 10;
    }
    num /= 10;

    return num;
}

int main()
{
    int num = toInt("420");

    if(num == 420)
        std::cout << "nice" << std::endl;
    else
        std::cout << "finger yourself" << std::endl;

    return 0;
}