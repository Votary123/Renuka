#include <stdio.h>
int prime() ;
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'd') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);


prime();



    return 0;
}




//#include <stdio.h>

int prime() {
   int low, high, i, flag;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

      // to check prime for the next number
      // increase low by 1
      ++low;
   }

   return 0;
}


