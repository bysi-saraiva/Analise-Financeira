#include <iostraem>
using namespace std;
   int main () {
float valor;
float total = 0;
char continuar;

do {
    cout << "Qual o valor? ";
    cin >> valor;

    total = total + valor;

    cout << "Deseja continuar? (s/n): ";
    cin >> continuar;

} while (continuar == 's');

    return 0;
   }