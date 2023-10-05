#include <bits/stdc++.h>
using namespace std;

//En esas funciones, la expresión L + u representa un puntero que apunta al elemento siguiente al último elemento del array. Esto se debe a que en C++, el rango [first, last)
int main() {
    int n = 78, L[] {1,6,2,78,4,7};
    int u = sizeof(L) / sizeof(int);
    sort(L,L+u);
    cout << binary_search(L,L+u, n) << "\n";
    cout << *(L+u-1) << "\n";
    for(auto m: L)
        cout << m << " ";
    cout  << "\n";
}


// #include <bits/stdc++.h>                         // C++ code for task 6
// using namespace std;
// int main() {
//   int n = 5, L[] = {10, 7, 5, 20, 8}, v = 7;
//   sort(L, L+n);
//   printf("%d\n", binary_search(L, L+n, v));      // should be index 1
// }