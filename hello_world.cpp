// this could be probably dumb writting just program which prints string "Hello World".
// but I have to start with something. I am completely new to cpp.


// seems like similar to stdio.h in c
#include <iostream>

#define MAX_BUFF_SZ 8

//why this ?
using namespace std;

int main ()
{
  // same as printf but to format specifier ?
  cout << "Hello World\n";

  int i = 100;
  float f = 1.1796;
  char c  = 'C';
  char c_array[] = "Cpp";
 
  // keeping array uninitalized 
  //char user_input[256] ;
  unsigned int user_input;
 
  cout <<"integer i: "<< i <<"\nfloat f: "<< f <<"\ncharacter c: "<< c <<"\nstring c_array: "<< c_array <<"\n";
  // so far so good, lets try pointers now
  
  int *iptr = &i;
  float *fptr = &f;
  char *cptr = &c;
  char *sptr = c_array;

  cout <<"\nfollowing vlaues have dereffenced from pointers\n";
  cout <<"integer i: "<< *iptr <<"\nfloat f: "<< *fptr <<"\ncharacter c: "<< *cptr <<"\nstring c_array: "<< sptr <<"\n";
  
  // okay ! so string pointers and char arrays now have to handled carefully
  // that fine, but can it print pointer address lets see
  cout << "\nprintinf pointers addresses\n";
  cout <<"addr of integer prt: "<< iptr <<"\naddr of float ptr: "<< fptr <<"\naddr of character ptr: "<< &cptr \
       <<"\naddr of string c_array: "<< &sptr <<"\n";

  // impressive lets do some user interaction
  
  cout << "\nSo are you having fun so far ... ?\n";
  cout << "Enter \"yes\" or \"no\" :"; 
  cin >> user_input;

  cout << "\nYou have entered :"<< (int)user_input << "\n";
  
  return 0;
}
//hi
