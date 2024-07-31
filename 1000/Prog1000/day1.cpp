#include <iostream>
using namespace std;

int main() {
  int a=6;
  int b=(++a )* a;
  int c=++b*++a;
  int d=++c*++a;
  cout <<a<<" "<<b<<" "<<c<<" "<<d;
}