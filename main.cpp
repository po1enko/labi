#include <iostream>
#include <math.h>

int main()
{
    std::cout << "Nomer 1\n";
    int x, y, z;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    if ((x % 2 != 0) and (y % 2 != 0)){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    if (((x < 20) and (y > 20)) or ((x > 20) and (y < 20))){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    if ((x == 0) and (y == 0)){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    if ((x < 0) and (y < 0) and (z < 0)){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    if (((x % 5 == 0) and (y % 5 != 0) and (z % 5 != 0)) or ((x % 5 != 0) and (y % 5 == 0) and (z % 5 != 0)) or ((x % 5 != 0) and (y % 5 != 0) and (z % 5 == 0))){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    if ((x > 100) or (y > 100) or (z > 100)){
        std::cout << "condition is true\n";
    } else {
        std::cout << "condition is false\n";
    }
    std::cout << "Nomer 2\n";
    std::pair <int, int> pos1;
    std::pair <int, int> pos2;
    int x21, x22, y21, y22;
    std::cin >> x21 >> y21 >> x22 >> y22;
    if((x21 < 0) or (x21 > 8) or (y21 < 0) or (y21 > 8) or (x22 < 0) or (x22 > 8) or (y22 < 0) or (y22 > 8))
    {
        std::cout << "Vvedite znacheniya ot 0 do 8\n";
    }
    else{
        if((pos1.first ==  pos2.first) or (pos2.second == pos2.second))
        {
            std::cout << "ygrojaet\n";
        }
        else
        {
            std::cout << "vse tiho\n";
        }
        if(abs(pos1.first - pos2.first) == abs(pos2.second - pos2.second))
        {
            std::cout << "ygrojaet\n";
        }
        else
        {
            std::cout << "vse tiho\n";
        }
        if((abs(pos1.first - pos2.first) == 1) or (abs(pos2.second - pos2.second) == 1) or ((abs(pos1.first - pos2.first) == 1) and (abs(pos2.second - pos2.second) == 1)))
        {
            std::cout << "ygrojaet\n";
        }
        else
        {
            std::cout << "vse tiho\n";
        }
        if((pos1.first ==  pos2.first) or (pos2.second == pos2.second) or (abs(pos1.first - pos2.first) == abs(pos2.second - pos2.second)))
        {
            std::cout << "ygrojaet\n";
        }
        else
        {
            std::cout << "vse tiho\n";
        }
        if((abs(pos1.first - pos2.first) == 1) and (pos2.second - pos2.second == 1))
        {
            std::cout << "ygrojaet\n";
        }
        else
        {
            std::cout << "vse tiho\n";
        }
    }



        std::cout << "Nomer 3\n";
        int a, b;
        for (a = 1; a <= 9; ++a)
        {
            b = a * 7;
            std::cout << a << " x 7 = " << b << std::endl;
        }
        int c, d, N;
        std::cout << "vvedite N\n";
        std::cin >> N;
        for (c = 1; c <= 9; ++c)
        {
            d = c * N;
            std::cout << c << " x " << N << " = " << d << std::endl;
        }


    std::cout << "Nomer 4\n";
    int a41;
    int proizv1 = 1;
    for (a41 = 8; a41 <= 15; ++a41)
    {
        proizv1 *= a41;
    }
    std::cout << proizv1 << std::endl;
    int a42, b42;
    int proizv2 = 1;
    std::cin >> a42;
    for (b42 = a42; b42 <= 20; ++b42)
    {
        proizv2 *= b42;
    }
    std::cout << proizv2 << std::endl;

    int a43, b43;
    int proizv3 = 1;
    std::cin >> b43;
    for (a43 = 1; a43 <= b43; ++a43)
    {
        proizv3 *= a43;
    }
    std::cout << proizv3 << std::endl;

    int a44, b44;
    int proizv4 = 1;
    std::cin >> a44;
    std::cin >> b44;
    for (a44 = a44; a44 <= b44; ++a44)
    {
        proizv4 *= a44;
    }
    std::cout << proizv4 << std::endl;
}
