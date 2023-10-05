#include <bits/stdc++.h>
using namespace std;

// Tiempo Limite Excedido y No leí que daban el número de casos de prueba
// int main() {
//     int x;
//     while(scanf("%d", &x) != EOF) {
//         int i = 1;
//         int c = 2;
//         int k = 1;
//         while(1) {
//             int sum = (i * (i + 1)) / 2;
//             if(x <= sum) {cout << k << "\n"; break;}
//             i+=c;
//             ++c;
//             ++k;
//         }
//     }
// }

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        cout << static_cast<long long>(((-1 + sqrt(1.0 + 8.0 * n)) / 2.0)) << "\n";
    }
}