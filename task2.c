#include <stdio.h>
#include <string.h>
#define SIZE 1001

int main() {
int n = 0, indice = 1;
char s[SIZE];
float rez = 0, v[SIZE];
scanf("%d", & n);
for (int i = 1 ; i <= n; i++) {
scanf("%f", & v[i]);
}
if ( n > 1) scanf("%s", s);
for (int i = 0; i < strlen(s); i++) {
if ((s[i] == '+') | (s[i] == '-')) indice++;
if (s[i] == '*') {
v[indice] = v[indice] * v[indice+1];
for (int j = indice +1; j < n; j++) {
v[j] = v[j+1];
}
n--;
}
if (s[i] == '/') {
v[indice] = v[indice] / v[indice+1];
for (int j = indice +1; j < n; j++) {
v[j] = v[j+1];
}
n--;
}
}
indice = 1;
rez = v[1];
for (int i = 0; i< strlen(s); i++) {
if (s[i] == '+') rez += v[++indice];
if (s[i] == '-') rez -= v[++indice];
}
printf("%f\n", rez);
return 0;
}
