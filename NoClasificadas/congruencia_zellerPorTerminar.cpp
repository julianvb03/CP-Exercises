#include<bits/stdc++.h>
using namespace std;

/*
const auto now = chrono::system_clock::now();
const time_t t_c = chrono::system_clock::to_time_t(now);
*/

int correct_day(int day);
int correct_month(int month);
int correct_year(int year);

int main(void) {
    int dia, mes, ano;
    int dia_a, mes_a, ano_a;

    printf("Ingrese el día mes y año con el cual desea comparar la fecha actual\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    // printf("Ingrese la fecha actual\n");
    // scanf("%d %d %d", &dia_a, &mes_a, &ano_a);

    dia = correct_day(dia);
    cout << dia << "\n";
    
}

int correct_day(int day) {
    ++day;
    if(day <= 6) return day;
    else if(day == 7) return 0; else return 1;
}

int correct_month(int month) {
    if(month == 1) return 13;
    if(month == 2) return 14;
    return month;
}