#include<iostream>
#include<string>

int main(){
  int a{10};
  int* const b{&a};
  (*b)++;
  a++;
  std::cout<< a<< " " << " " << *b;
  
  return 0;
}
