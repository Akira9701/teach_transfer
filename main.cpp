#include <math.h> 
#include <stdio.h>


void FillInc(int *array, int n, int max){
    int step = max / n;
    for (int i = 0; i < n; i++)
    {
        array[i] = (step * (i+1));
    }
    
}


void FillDec(int *array, int n, int max){
    int step = max / n;
    for (int i = 0; i < n; i++)
    {
        array[i] = (max - (step * (i)));
    }
}

void FillRand(int *array, int n, int max){
    for (size_t i = 0; i < n; i++)
    {
        array[i] = rand()%n;
    }
    
}

int CheckSum(int *array, int n){
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        a+=array[i];
    }
    // printf("%d \n", a);
    return a;
}

int RunNumber(int *array, int n){
    int counter = 0;
    int arrayTwo[n+1];
    for (int i = 0; i < n; i++)
    {
        arrayTwo[i] = array[i];
    }
    arrayTwo[n] = 0;
    for (int i = 0; i < n+1; i++)
    {
        if(arrayTwo[i] > arrayTwo[i+1]) counter++;
    }
    // printf("\n %d \n", counter);
    return counter;
    
}

void SelectSort(int *array, int n){
  int min, temp;
  int c = 0;
  int m = 0;
  for (int i = 0; i < n - 1; i++) 
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
        c++;
      if (array[j] < array[min])
        min = j;       
    }
    temp = array[i];   
    array[i] = array[min];
    array[min] = temp;
    m+=3;
  }
  printf("M teor - %d, C teor - %d, M fact - %d, C fact - %d \n", 3*(n-1), (n*n-n)/ 2, m,c);
    

}

void PrintMas(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void BubbleSort(int *array, int n){
    int c = 0;
    int m = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = (n - 1); j > i; j--)
    {
   
      if (array[j - 1] > array[j]) 
      {
       
        int temp = array[j - 1];
        array[j - 1] = array[j];
        array[j] = temp;
        m+=3;
      }
       c++;
    }
  }
  printf("M teor - %d, C teor - %d, M fact - %d, C fact - %d \n", (3*(n*n-n))/4, (n*n-n)/ 2, m,c);
}

int main(){
    int n = 500;
    int a[n];
    int b[n];
    int c[n];
    printf("Increment \n");
    FillInc(a, n, 500);
    PrintMas(a, n);
    BubbleSort(a,n);
    PrintMas(a, n);
    printf("Summ - %d, Serries - %d", CheckSum(a,n), RunNumber(a,n));
    printf("\n ------------------------------------------------------------------------ \n");
    printf("Decrement \n");
    FillDec(b, n, 500);
    PrintMas(b, n);
    BubbleSort(b,n);
    PrintMas(b, n);
    printf("Summ - %d, Serries - %d", CheckSum(b,n), RunNumber(b,n));
    printf("\n ------------------------------------------------------------------------ \n");
    printf("Random \n");
    FillRand(c, n, 500);
    PrintMas(c, n);
    BubbleSort(c,n);
    PrintMas(c, n);
    printf("Summ - %d, Serries - %d", CheckSum(c,n), RunNumber(c,n));



}