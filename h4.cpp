#include<iostream.h>

  
class GfG 
{ 
   public: 
       
    static void printMsg() 
    { 
        cout<<"Welcome to GfG!"; 
    } 
}; 
  
void demo() 
{   
    static int count = 0; 
    cout << count << " ";  
    count++; 
} 

void main()
{ 
    for (int i=0; i<5; i++)     
        demo(); 
    GfG::printMsg(); 
} 
