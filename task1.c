#include <stdio.h>
#include <string.h>
#define SIZE 1001

int main() {
  int n = 0, contor = 1;
  char s[SIZE];
  float rez = 0, v[SIZE];
  scanf("%d", & n);
  for (int i = 1 ; i <= n; i++) {
  scanf("%f", & v[i]);
  }
  rez = v[1];
  if ( n > 1) scanf("%s", s);
  for (int i = 0; i < strlen(s); i++) {
  if (s[i] == '+') rez = rez + v[++contor];
  if (s[i] == '-') rez = rez - v[++contor];
  if (s[i] == '*') rez = rez * v[++contor];
  if (s[i] == '/') rez = rez / v[++contor];
  }
  printf("%f\n", rez);
  return 0;
}
