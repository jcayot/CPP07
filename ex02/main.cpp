#include <iostream>
#include <Array.hpp>

#define MAX_VAL 15
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    if (numbers.size() != MAX_VAL)
        std::cerr << "numbers.size() ("<< numbers.size() <<") != MAX_VAL (" << MAX_VAL <<")" << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        std::cout << "test[0]       : " << test[0] << std::endl;
        int randomInt = rand();
        while (randomInt == numbers[0])
            randomInt = rand();
        test[0] = rand();
        std::cout << "New test[0]   : " << test[0] << std::endl;
        std::cout << "tmp[0]        : " << tmp[0] << std::endl;
        std::cout << "numbers[0]    : " << numbers[0] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            delete[] mirror;
            return 1;
        } else
            std::cout << numbers[i] << "==" << mirror[i] << std::endl;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    Array<int> a;
    std::cout << a.size() << std::endl;
    try {
        a[0] = 1;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}