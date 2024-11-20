#include <stdio.h>

int main() {
   int a= 5, b=15; // Khai bao va tao 2 bien co kieu du lieu so nguyen 
   int c; // khai bao bien c luu ket qua tong
   c= a+b;
   printf ("Tong 2 bien la: %d\n", c);
   int d; // khai bao bien d luu ket qua hieu 
   d= a-b;
   printf ("Hieu 2 bien la: %d\n", d);
   int e; // khai bao bien e luu ket qua tich 
   e= a*b;
   printf ("Tich 2 bien la: %d\n", e);
   double g; // khai bao bien g luu ket qua thuong 
   g= (double) a/b;
   printf ("Thuong 2 bien la: %f\n", g);
   return 0;
    
}
