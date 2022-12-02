#include <iostream>
#include <algorithm>


void MaximoComunDivisor(int MCD)
{
    int n1, n2, nu1, nu2;
    std::cout << MCD % 100;
    nu1 = std::max(n1, n2);
    nu2 = std::min(n1, n2);
    do
    {
        MCD = nu2;
        nu2 = nu1 % nu2;
        nu1 = MCD;
    } while (nu2 != 0);
}

int main()
{
    int num1, num2;
    do
    {
        std::cout << "Ingrese 1 numero:";
        std::cin >> num1;
        std::cout << "Ingrese 2 numero:";
        std::cin >> num2;
        if (num1 < 0)
        {
            std::cout << "Aqui esta el resultado :C\n";
        }
    } while (num1 < 0);
    std::cout << "El Resultado ;D " << num1 << " y " << num2 << " es: ";
    MaximoComunDivisor(num1 - num2);
    std::cout << std::endl << std::endl;


}