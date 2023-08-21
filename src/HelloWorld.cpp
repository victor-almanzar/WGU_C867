#include <iostream>
using namespace std;

int main()
{   
    cout << "¿cuanto ganas por hora? ";
    int wage;
    cin >> wage;

    cout << "¿cuanto ganas en propinas al mes? ";
    int tips;
    cin >> tips;

    cout << "\nSuponiendo que trabaja 40 horas a la semana durante todo el año, su salario anual es...1 \n\n";
    cout << wage * 40 * 52 + (tips * 12);
    cout << "\n\n";
    cout << endl;

    return 0;
}
