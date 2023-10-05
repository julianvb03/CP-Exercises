// #include <bits/stdc++.h>                         // C++ code for task 4
// using namespace std;
// #define ALL(x) x.begin(), x.end()
// #define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
// int main() {
//   vector<int> v = {1, 2, 2, 2, 3, 3, 2, 2, 1};
//   sort(ALL(v)); UNIQUE(v);
//   for (auto &x : v) printf("%d\n", x);
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int numeros[n];
    set<int> ordenados;
    for(int i = 0; i < n; ++i) cin >> numeros[i];
    for(auto m: numeros) ordenados.insert(m);
    for(auto m: ordenados) cout << m << " ";
    cout << "\n";
}