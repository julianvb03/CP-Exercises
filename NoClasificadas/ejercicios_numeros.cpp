#include<bits/stdc++.h>
using namespace std;

int main() {
    constexpr double pi = M_PI;
    int decimales;
    scanf("%d", &decimales);
    printf("Pi con %d decimales %.*f\n", decimales, decimales, pi);
}