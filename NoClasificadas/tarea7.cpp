// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string letras = "ABCDEFGHIJ";
//     //Innecesario puesto que ya esta ordenado
//     sort(letras.begin(),letras.end());
//     cout << letras << "\n";
//     while (next_permutation(letras.begin(),letras.end())) {
//         cout << letras << "\n";
//     }
// }

#include <bits/stdc++.h>                         // C++ code for task 7
using namespace std;
int main() {
  string s = "ABCD"; // "ABCDEFGHIJ";            // change "ABCD" to "ABCDEFGHIJ" to match the actual problem (but it will take some time to print)
  do {
    for (int i = 0; i < (int)s.length(); ++i) printf("%c ", s[i]);
    printf("\n");
  }
  while (next_permutation(s.begin(), s.end()));
}