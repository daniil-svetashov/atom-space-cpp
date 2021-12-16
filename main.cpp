#include <iostream>

int myIntNumGlobal=-100;
double myDoubleNumGlobal=-90.55;


void foo(void)
{
 static int a=0;
 int b=0;
 int c=myIntNumGlobal;
 std::cout<<"variable a equals: "<<a<<" and variable b equals: "<<b<<" and variable c equals: "<<c<<std::endl;
 a++;
 b++;
}

int main ()
{

int myIntNum = 12;
double myDoubleNum = 14.42;
float myFloat =15.42;
char myCharLetter = 'Z';
std::string myStringText = "Using string data type";    
char myCharText[]="Using char data type";
bool myBoolean = true;
long myLong= 12278;
unsigned long myUnsignedLong=4294755174;


std::cout<<"This is how post increment works, had this: "<<myIntNum<<" post increment "<<myIntNum++<<std::endl;
std::cout<<"This is how pre increment works, had this: "<<myIntNum<<" pre increment "<<++myIntNum<<std::endl;
std::cout<<"myIntNum+myFloat="<<myIntNum+myFloat<<std::endl;

myCharLetter='X';

std::string addStringText= " ADDED TEXT";
myStringText+=addStringText;
std::cout<<"string text: "<<myStringText<<std::endl;

if(myBoolean)
{
  std::cout<<"variable myBoolean ="<<myBoolean<<" so we are in If statement"<<std::endl;
  myBoolean=false;
}
if(!myBoolean)
{
   std::cout<<"variable myBoolean ="<<myBoolean<<" but we still in If statement because we used '!' "<<std::endl;
}

if(myLong<myUnsignedLong)
	std::cout<<myLong<<" is smaller than "<< myUnsignedLong<<std::endl; 


std::cout <<"we can also use ternary operator "<< ((myLong < myUnsignedLong) ? myLong : myUnsignedLong)<<std::endl;

myIntNum=myIntNumGlobal;
std::cout<<"variable myIntNum from main now equals "<<myIntNum<<std::endl;

myDoubleNum=myDoubleNumGlobal;
std::cout<<"variable myDoubleNum from maint now equals"<<myDoubleNum<<std::endl;

foo();
foo();
foo();
foo();

int array[10]={21,11,23,31,42,54,65,71,82,92};
int *p = array;
p=p+3;//we have to see number 31
std::cout<<"pointer adress: "<<p<<" it has value: "<<*p<<std::endl;

std::cout<<"int number: "<<myIntNum<<std::endl;
std::cout<<"double number: "<<myDoubleNum<<std::endl;
std::cout<<"char letter: "<<myCharLetter<<std::endl; 
std::cout<<"string text: "<<myStringText<<std::endl;
std::cout<<"char text: "<<myCharText<<std::endl;
std::cout<<"boolean: "<<myBoolean<<std::endl; 
std::cout<<"long: "<<myLong<<std::endl; 
std::cout<<"unsigned long: "<<myUnsignedLong<<std::endl;


return 0;
}

