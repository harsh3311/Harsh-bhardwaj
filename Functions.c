// A Function is a block of code which gets executed when we call it.
// // Case 1 - function with no parameters and no return value
#include <stdio.h>
void display()
{
    printf("Hello from Display\n");
}
int main()
{
    printf("Hello from main()\n");
    display();
    printf("Again main()\n");
    display();
}

// Case 2 - function with parameters but with no return value
// #include <stdio.h>
// void area(int l,int b) // Formal Arguments
// {
//     int a;
//     a=l*b;
//     printf("Area is %d",a); // Actual Arguments
// }
// int main()
// {
//    area(10,5);
// }

// // Case 3 - Functions with parameters and return value
// #include <stdio.h>
// int area(int len,int b) // Formal Arguments
// {
//     int a;
//     a=len*b;
//     return a;
// }
// int main()
// {
//    int l=10,b=5,a;
//    a=area(l,b); // actual Arguements
//    printf("Artea of rectangle is %d",a);
// }

// to find sum of Elements of an Array :
// #include <stdio.h>
// int main()
// {
//     int a[5] , i , sum=0;
//     printf("enter array elements:");
//     for(i=0 ; i<5; i++)
//     {
//         scanf("%d" , &a[i]);
//     }
//      for(i=0 ; i<5; i++)
//     {
//         sum=sum+a[i];
//     }
//     printf("the sum of the array elements is %d" , sum);
//     return 0;
// }

// Structure
// #include <stdio.h>
// // Create a structure called myStructure
// struct myStructure {
//   int myNum;
//   char myLetter;
// };

// int main() {
//   // Create a structure variable of myStructure called s1
//   struct myStructure s1;

//   // Assign values to members of s1
//   s1.myLetter= 13;
//   s1.myLetter = 'B';

//   // Print values
//   printf("My number: %d\n", s1.myNum);
//   printf("My letter: %c\n", s1.myLetter);

//   return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int a=10,b=20,*p,s=0;
//     p=&a;
//     a++;
//     (*p)++;
//     s=a + b + *p;
//     printf("a=%d, b=%d\n",a,b);
//     printf("sum is %d\n",s);
//     return 0;
// }