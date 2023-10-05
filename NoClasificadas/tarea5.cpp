#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int, int> tiii;

bool comparator(tiii tupla1, tiii tupla2) {
    if(get<1>(tupla1) > get<1>(tupla2))
        return false;
    else if(get<1>(tupla1) < get<1>(tupla2))
        return true;
    else if (get<0>(tupla1) > get<0>(tupla2))
        return false;
    else if (get<0>(tupla1) < get<0>(tupla2))
        return true;
    else return get<2>(tupla1) < get<2>(tupla2);
}

int main(){
    tiii tupla = {21, 4, 2002};
    tiii tupla2 = {1, 4, 2002};
    tiii tupla3 = {1, 12, 2001};
    tiii tupla4 = {1, 12, 2002};

    //La declaración bool(*)(tiii, tiii) es un punturo a una función
    multiset<tiii, bool(*)(tiii, tiii)> birthdays(comparator);
    birthdays.emplace(tupla);
    birthdays.emplace(tupla2);
    birthdays.emplace(tupla3);
    birthdays.emplace(tupla4);

    //[dd, mm, yyyy] Esta expresión representa una desestructuración de tipos
    for (auto &[dd, mm, yyyy] : birthdays)
        printf("%d %d %d\n", dd, mm, yyyy);
}


//Este codigo funciona usando el hecho de que ordena dependiendo de la gerarquia de la 1ra, 2da ... posicion
// #include <bits/stdc++.h>                         // C++ code for task 5
// using namespace std;
// typedef tuple<int, int, int> iii;                // use natural order
// int main() {
//   multiset<iii> birthdays;                       // auto sorting :)
//   birthdays.emplace(5, 24, -1980);               // reorder DD/MM/YYYY
//   birthdays.emplace(5, 24, -1982);               // to MM, DD, and then
//   birthdays.emplace(11, 13, -1983);              // use NEGATIVE YYYY
//   birthdays.emplace(5, 24, -1982);               // duplicates allowed
//   for (auto &[mm, dd, yyyy] : birthdays)         // C++17 style
//     printf("%d %d %d\n", dd, mm, -yyyy);
// }