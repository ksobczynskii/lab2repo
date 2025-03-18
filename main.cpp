#include <iostream>
#include <vector>
#include "vector3.hpp"

using namespace l2;
void print_readable_character(std::byte byte)
{
    if (byte >= std::byte{0x20} && byte <= std::byte{0x7E})
        std::cout << static_cast<char>(byte);
    else
        std::cout << "."; // Non readable character cannot be shown in the console
}

void dump_memory(std::byte *start, size_t count)
{
    const long int window_width = 8;

    // STAGE 3: Implement me!
    // Hint: you can use print_readable_character function to print arbitrary byte as character
}

int main()
{

    std::cout << "STAGE 1" << std::endl;
    Vector3 vec1 = b1;
    Vector3 vec2 = b2;
    Vector3 vec3 = b3;
    vec1.mul(3);
    vec2.mul(5);
    vec3.mul(7);
    Vector3 res = vector3_add(vec1, vector3_add(vec2, vec3));
    l2::vector3_print(res);

    std::cout << "STAGE 2 and 3" << std::endl;

    const int array_size = 10;
    {
        Vector3 auto_tab[array_size];

        for (int i = 0; i < array_size; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                auto_tab[i].v.buffer[j] = static_cast<double>(i);
            }
            std::cout << "Adres " << 1 << "-tego elementu tablicy automatycznej " << std::hex << &(auto_tab[0]) << std::endl;
        }
        for (const Vector3 &v : auto_tab)
            std::cout << v.length() << std::endl;
    }
    {
        Vector3 *dynamic_tab = new Vector3[array_size];
        for (int i = 0; i < array_size; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                dynamic_tab[i].v.buffer[j] = static_cast<double>(i);
            }
            std::cout << "Adres " << 1 << "-tego elementu tablicy dynamicznej " << std::hex << &(dynamic_tab[0]) << std::endl;
        }

        for (int i = 0; i < array_size; ++i)
            std::cout << dynamic_tab[i].length() << std::endl;
        // delete[] dynamic_tab;
    }
    {
        std::vector<Vector3> vector_tab;
        for (int i = 0; i < array_size; i++)
        {
            Vector3 toadd(i, i, i);
            vector_tab.push_back(toadd);
            // vector_tab.emplace_back(i, i, i); // bo nie mam zainicjalizowanego sizu wektora wiec pushe de facto pushbackowac ale emplace_back dziala git
            std::cout << "Adres " << 1 << "-tego elementu tablicy std::vector " << std::hex << &(vector_tab[0]) << std::endl;
        }
    }

    // STAGE 2: stack, heap and std::vector

    std::cout << "STAGE 4" << std::endl;

    // STAGE 4: HoleyString should be created here

    std::cout << "STAGE 5" << std::endl;

    // STAGE 5: test your memcpy and memmove implementations here

    return 0;
}
