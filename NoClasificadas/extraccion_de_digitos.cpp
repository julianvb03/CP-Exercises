#include<bits/stdc++.h>
using namespace std;


/*
int main() {
    int N; scanf("%d\n", &N);
    while (N--) {
        char x[110];
        scanf(" 0.%[0-9]...\n", x);             //El espació al inicio de la expresión regular permite ignorar espacios en blanco
                                                //commo saltos de linea
        printf("Los digitos son 0.%s, El valor de N es %d\n", x, N);
    }
    
    return 0;
}
*/


//Este codigo del libro no funciona tal cual debería en mi caso el error podría estar en el compilador usado
#include <bits/stdc++.h>                         // include all
using namespace std;
int main() {
  int N; scanf("%d\n", &N);
  while (N--) {                                  // loop from N,N-1,...,0
    char x[110];                                 // set size a bit larger
    scanf("0.%[0-9]...\n", &x);                  // `&' is optional here
    // note: if you are surprised with the technique above,
    // please check scanf details in www.cppreference.com
    printf("the digits are 0.%s\n", x);
  }
  return 0;
}
