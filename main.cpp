#include <iostream>
#include <matriz.h>
#include <boost/thread.hpp>

using namespace std;

int main()
{
    int N, i;
    cout << "Digite o valor de N: " << endl;
    cin >> N;
    Matriz mat(N);
    std::thread threads[N];
    mat.preencherMatriz();

    for(i = 0; i < N; i++)
    {
        threads[i] = t(mat.multiplica(i));
    }

    mat.imprimirMatriz();

    return 0;
}
