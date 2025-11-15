#include <iostream>
#include <string>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
int a = 5;
int *p = &a;
int *(&q) = p;
cout<<q;
return 0;
}
