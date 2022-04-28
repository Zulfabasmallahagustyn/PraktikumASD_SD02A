#include <iostream>
using namespace std;

int main()
{
    int N, M, P, j, i, k;

    cin >> N;
    cin >> M;
    cin >> P;

    int matriksA[200][200];
    int matriksB[200][200];
    int matriksC[200][200];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> matriksA[i][j];
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < P; j++)
        {
            cin >> matriksB[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < P; j++)
        {
            for (k = 0; k < M; k++)
            {
                matriksC[i][j] = matriksC[i][j] + (matriksA[i][k] * matriksB[k][j]);
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < P; j++)
        {
            cout << matriksC[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
