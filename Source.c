#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define N 10

double func(float x);

void main()
{
    setlocale(LC_ALL, "RUS");
    /*float A[N];
    float B[N];
    float temp,s;
    s = 0;
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
            B[i] = i;
        else
            B[i] = A[i];
    }
    printf("|\t�����|\tA[N]|\tB[N]|\n");
    for (int i = 0; i < N; i++)
    {
        printf("|\t%.2d|\t%.1f|\t%.1f|\n", i, A[i], B[i]);
        s += A[i];
    }
    printf("\n������� �������������� ��������� �������: %.3f", s / N);*/

    float n, s, a, sr,sro, k;
    int j;
    float A[100];
    printf("�������� ���������:");
    scanf("%f", &n);
    s = 1;
    sr=sro = 0;
    k = 0;
    j = 0;
    for (int i=0; i<=100; i++)
    printf("������� �������������� %.3f", sr/k);
    printf("\n��������� %.3f", s);
}

double func(float x)
{
    float a;
        a = 1 - 1 / (2 * i);
        return a;
}