#include<iostream>
using namespace std;
void func()                                      
{
int x = 0;                                                      
static int y = 0;                                                  
x++; y++;                                                     
printf( "%d -- %d\n", x, y );                                
}                                                                 
int main()                                                        
{                                                                 
 func();                                                              
func();
return 0;
}

