#include <iostream>
#include <string>
using namespace std;
 
int main() {
  // Integer data types
  int a = 10;
  short b = 20;
  long c = 30;
  long long d = 40;
  cout << "Integer data types: " << endl;
  cout << "int: " << a << endl;
  cout << "short: " << b << endl;
  cout << "long: " << c << endl;
  cout << "long long: " << d << endl;
   
  // Floating-point data types
  float e = 3.14f;
  double f = 3.141592;
  long double g = 3.14159265358979L;   //fakt 9 paryantch kabara print zla hey.
  cout << "Floating-point data types: " << endl;
  cout << "float: " << e << endl;
  cout << "double: " << f << endl; 
  cout << "long double: " << g << endl;
   
  // Character data types
  char h = 'a';
  wchar_t i = L'b'; //wcahr_t j= L'a';
  char16_t j = u'c';  //char16_t j=u'c'; 97 98 99
  char32_t k = U'd';   //char32_t k=U 'd';

  cout << "Character data types: " << endl;
  cout << "char: " << h << endl;
  wcout << "wchar_t: " << i << endl;
  cout << "char16_t: " << j << endl;
  cout << "char32_t: " << k << endl;
   
  // Boolean data type
  bool l = true;
  bool m = false;
  cout << "Boolean data type: " << endl;
  cout << "true: " << l << endl;
  cout << "false: " << m << endl;
   
  // String data type
  string n = "Hello, world!";
  cout << "String data type: " << endl;
  cout << n << endl;
   
  return 0;
}