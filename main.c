#include <stdio.h>
#include <stdlib.h>
// dersteki kodlarin hepsi burada.

int main()
{



 printf("****ders1****\n"); // A int degerini yazdirma

 int A;
 A = 10;

 printf("%d\n\n", A);





 printf("****ders2****\n"); // farkli degerlerin byte boyutlarini yazdirma

 int int1;
 float float1;
 double double1;
 char char1;
 short int shortint1;


 printf("size of int:%zu byte\n", sizeof int1);
 printf("size of float:%zu byte\n", sizeof float1);
 printf("size of double:%zu byte\n", sizeof double1);
 printf("size of char:%zu byte\n", sizeof char1);
 printf("size of short:%zu byte\n\n", sizeof shortint1);





 printf("****ders3****\n"); // sayilari birbirine atayıp yer degistirme

 double first,second,temp;
 printf("enter first number: ");
 scanf("%lf", &first);

 printf("enter second number: ");
 scanf("%lf", &second);

 temp = first;

 first = second;

 second = temp;

 printf("\nafter swapping, first num: %.2lf\n", first);
 printf("\nafter swapping, second num: %.2lf\n\n", second);





 printf("****ders4****\n"); // if else kullanim ornegi

 int num1;
 printf("enter an integer: ");
 scanf("%d", &num1);

 if (num1 % 2 == 0)
    printf("%d is even.\n\n", num1);
 else
    printf("%d is odd.\n\n", num1);





 printf("****ders5****\n"); //float double char kullanim ornegi
 float number1=13.5;
 double number2=12.4;

 printf("number1 = %.2f\n", number1);
 printf("number2 = %.2lf\n", number2);

 char chr1 = 'c';
 printf("character = %c\n", chr1);



 return 0;
}
