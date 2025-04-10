#include <iostream>
#define CRTDBG_MAP_ALLOC  
#include <crtdbg.h>  
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)  
#define new DEBUG_NEW  

using namespace std;  

int main()  
{

   int size;  
   printf("¬вед≥ть розм≥р масиву: ");  
   cin >> size;  
   int* array = new int[size];  

   for (int i = 0; i < size; i++)  
   {  
       array[i] = rand() % 201 - 100;  
   }  
   for (int i = 0; i < size; i++)  
   {  
       cout << array[i] << " ";  
   }  

   _CrtDumpMemoryLeaks();  
}
