#include <math.h>
#include <stdio.h>
#include <conio.h>
double get_triangle_square(double x_1, double y_1,
                           double x_2, double y_2,
                           double x_3, double y_3)
{
   double a = sqrt (pow((x_2 - x_1), 2.0) + pow((y_2 - y_1), 2.0));
   double b = sqrt (pow((x_3 - x_1), 2.0) + pow((y_3 - y_1), 2.0));
   double c = sqrt (pow((x_3 - x_2), 2.0) + pow((y_3 - y_2), 2.0));
 
   double p = (a + b + c) / 2.0;
   
   if (a + b <= c ||
       a + c <= b ||
       b + c <= a)
   {
      return -1.;
   }
 
   return sqrt (p * (p-a) * (p-b) * (p-c));
}
 
int main()
{
   double s_1, s_2;
   s_1 = get_triangle_square (1.0, 2.0, -2.0, 2.3, 2.0, -2.0);
   s_2 = get_triangle_square (1.5, 2.0, -2.0, 2.3, 2.0, -2.0);                           
   if (s_1 < 0 || s_2 < 0) 
   { 
       printf("Pohani trukytnuku\n");
       return -1;
   }
 
   printf ("%s trukytnuk mae naibilshy ploshy\n", s_1 > s_2 ? "pershuy" : "dryhuy");
   getch();
   return 0;
}
