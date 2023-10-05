#include <bits/stdc++.h>
using namespace std;
#define LSOne(S) (S & (-S))
#define esp (cout << "\n")

void printBits(int n) {
    cout << "S = " << n << " = ";
    stack<int> pila;
    if(n == 0) pila.push(0);
    while(n) {
        pila.push(n%2);
        n /= 2;
    } 
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    } esp;
    
}

// int main() {
//     vector<int> v;
//     for(int i = 1; i <= 4; i++) v.push_back(i);
//     vector<int>::iterator it = v.begin();

//     int LSB = LSOne(*it);
//     int cont = __builtin_ctz(*it);

//     cout << "Antes del push\n";
//     cout << *it << "\n";
//     printBits(*it);
//     printBits(LSB);
//     printBits(cont);

//     esp;
//     v.push_back(rand());
//     for(auto m: v) cout << m << " ";
//     esp; esp;

//     LSB = LSOne(*it);
//     cont = __builtin_ctz(*it);

//     cout << "Despues del push\n";
//     cout << *it << "\n";
//     cout << *v.begin() << "\n";
//     printBits(*it);
//     printBits(LSB);
//     printBits(cont);
// }

// int main() {
//     int n = 42;
//     int LSB = LSOne(n);
//     int cont = __builtin_ctz(n);
//     printBits(n);
//     printBits(cont);
//     printBits(LSB);
//}

int main() {
    vector<int> v;
    for(int i = 1; i <= 4; i++) v.push_back(i);
    vector<int>::iterator it = v.begin();
    cout << *it << "\n";
    v.push_back(rand());
    cout << *it << "\n";
}