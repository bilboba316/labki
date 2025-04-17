#include <iostream> 

using namespace std;  

int main()  
{  
   int size;  
   cout << "Enter array size: ";  
   cin >> size;  

   if (size <= 0)  
   {  
       cout << "Размер массива должен быть положительным числом." << endl;  
       return 1;  
   }  

   int* array = new int[size];

   for (int i = 0; i < size; i++)  
   {  
       array[i] = rand() % 12;  
   }  

   int graph[12] = {};  

   for (int i = 0; i < size; i++)  
   {  
       graph[array[i]]++;  
   }  

   for (int i = 0; i < 12; i++)  
   {  
	   printf("number %d repeats %d times \n", i+1, graph[i]);
   }  

   delete[] array; // Освобождение памяти  
   return 0;  
}
