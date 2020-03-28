#include <iostream>
using namespace std;

int main() 
{
    int i, n, factorial = 1;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        factorial *= i;   
    }

    cout<< "Factorial dari "<<n<<" = "<<factorial;
    
    return 0;
}

