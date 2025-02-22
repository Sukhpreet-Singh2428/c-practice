// #include<stdio.h>
// #include<math.h>
// int main() {
//     // printf("Hello, World\n");

//     // int number = 37;
//     // char star = '*';
//     // int age = 17;
//     // float pi = 3.14;
//     // age = 18;
//     // printf("%d\n", number);
//     // printf("%c\n", star);
//     // printf("%f\n",pi);
//     // printf("%d\n", age);
//     // printf("age is %d\n", age);
//     // printf("pi is %f\n", pi);
//     // printf("star is %c\n", star);

//     // input
//     // scanf("data type", &(address)variable);
//     // int age;
//     // printf("enter age :");
//     // scanf("%d", &age);
//     // printf("age is : %d\n", age);

//     // take number input from user in a and b, and print sum of a and b
//     // int a;
//     // printf("enter number a :");
//     // scanf("%d", &a);
//     // int b;
//     // printf("enter number b :");
//     // scanf("%d", &b);
//     // printf("sum of a and b is : %d\n", a+b);
//     // printf("sub is : %d\n", a-b);
//     // printf("mul is : %d\n", a*b);

//     // area of square
//     // int a;
//     // printf("enter side of square :");
//     // scanf("%d", &a);
//     // printf("area of square is : %d\n", a*a);
//     // area of circle
//     // float r;
//     // printf("enter radius of circle :");
//     // scanf("%f", &r);
//     // printf("area of circle is : %f\n", 3.14*r*r);

//     // int b,c;
//     // b = c = 1;  //instructions and operators
//     // int a = b+c;
//     // int power = pow(a,b);
//     // printf("%d", power);

//     // printf("%d",5%3); //modulus operator
//     // printf("%d \n", -8%3);

//     // printf("%d \n", 2/3);
//     // printf("%f", 2.0/3);

//     // type conversion
//     // int a = (int) 1.9999999;
//     // printf("%d \n", a);
//     // int a = 4 * 3/6 * 2;  // associative rule, to calculate from left to right  
//     // printf("%d", a);      // (my thinking, we can do this also by --> this we use BODMAS rule [brackets, order, division, multiplication, addition, subtraction])
//     // a = 4 * 3/6 * 2  answer : 4
//     // a = 5*2 - 3*2    answer : 4
//     // a = 5*2/2*3      answer : 15
//     // a = 5*(2/2)*3    answer : 15
//     // a 5+2/2*3        answer : 8

//     // write a program to check whether a number is divisible by 2 or not
//     // int a;
//     // printf("enter a number :");
//     // scanf("%d", &a);
//     // printf("divisible by 2 : %d\n", a%2==0);  // 1 means true, 0 means false

//     // --> char stars = '**'; // char can only store one character, this will give wwarming as char have less space in memory and it will store only one character
//     //                    // compiler will give implicit conversion warning

//     // int x;
//     // printf("enter a number :");
//     // scanf("%d", &x);
//     // printf("%d", x>9 && x<100);  // 1 means true, 0 means false

    
//     // Conditional statements ~ if-else and switch-case

//     // int age;
//     // printf("Enter your age : ");
//     // scanf("%d", &age);
//     // if(age > 18) {
//     //     printf("adult\n");
//     //     printf("they can vote\n");
//     //     printf("they can drive\n");
//     // } else {
//     //     printf("not adult\n");
//     // }
//     // printf("thank you");    // this will print after if-else block
//     // // If we have only one statement in if-else block then we can skip curly braces

//     // int age;
//     // printf("Enter your age : ");
//     // scanf("%d", &age);
//     // if(age >= 18) {
//     //     printf("adult\n");
//     // } 
//     // else if(age > 13 && age < 18) {
//     //     printf("teenager\n");
//     // }
//     // else {
//     //     printf("child\n");
//     // }

//     // Ternary operator
//     // condition ? doSomething if True : doSomething if False;
//     // int age;
//     // printf("enter your age : ");
//     // scanf("%d", &age);
//     // age >= 18 ? printf("adult\n") : printf("not adult\n");

//     // SWITCH-CASE
//     // switch(expression) {
//     // case 1: //dosomething
//     //         break;
//     // case 2: //dosomething
//     //         break;
//     // default: //dosomething    --> like else in if-else
//     //}

//     // int day;  //1-mon; 2-tues; 3-wed
//     // printf("enter day(1-7) : ");
//     // scanf("%d", &day);

//     // switch (day) {
//     //     case 1 : printf("monday\n");
//     //              break;
//     //     case 2 : printf("tuesday\n");
//     //              break;
//     //     case 3 : printf("wednesday\n");
//     //              break;
//     //     case 4 : printf("thursday\n");
//     //              break;
//     //     case 5 : printf("friday\n");
//     //              break;
//     //     case 6 : printf("saturday\n");
//     //              break;
//     //     case 7 : printf("sunday\n");
//     //              break;
//     //     default : printf("not a valid day! \n");
//     // }

//     // char day;  //m-mon; t-tues; w-wed; T-thurs; f-fri; s-sat; S-sun
//     // printf("enter day(1-7) : ");
//     // scanf("%s", &day);

//     // switch (day) {
//     //     case 'm' : printf("monday\n");
//     //              break;
//     //     case 't' : printf("tuesday\n");
//     //              break;
//     //     case 'w' : printf("wednesday\n");
//     //              break;
//     //     case 'T' : printf("thursday\n");
//     //              break;
//     //     case 'f' : printf("friday\n");
//     //              break;
//     //     case 's' : printf("saturday\n");
//     //              break;
//     //     case 'S' : printf("sunday\n");
//     //              break;
//     //     default : printf("not a valid day! \n");
//     // }

//     // SWITCH PROPERTIES
//     // (A). CASES CAN BE IN ANY ORDER
//     // (B). NESTED SWITCHE (SWITCH INSIDE SWITCH) ARE ALLOWED

//     // Nested if-else
//     // int number;
//     // printf("enter a number : ");
//     // scanf("%d", &number);
//     // if(number >= 0) {
//     //     printf("positive\n");
//     //     if(number%2 == 0) {
//     //         printf("even\n");
//     //     } else {
//     //         printf("odd\n");
//     //     }
//     // } else {
//     //     printf("negative\n");
//     // }

//     // Q). WRITE A PROGRAM TO CHECK IF A STUDENT PASSED OR FAILED
//     // MARKS > 30 IS PASS
//     // MARKS <= 30 IS FAIL
//     // ---------------------------------------------------------
//     // int marks;
//     // printf("enter marks(0-100) : ");
//     // scanf("%d", &marks);
//     // if(marks > 30 && marks <= 100) {
//     //     printf("pass\n");
//     // } else if(marks>=0 && marks<=30) {
//     //     printf("fail\n");
//     // } else {
//     //     printf("wrong marks\n");
//     // }
//     // marks<=30 ? printf("FAIL\n") : printf("PASS\n");  // <--- ternary operator

//     // Q). WRITE A PROGRAM TO GIVE GRADES TO STUDENTS
//     // MARKS < 30 IS C
//     // 30 <= MARKS < 70 IS B
//     // 70 <= MARKS < 90 IS A
//     // 90 <= MARKS <= 100 IS A+
//     // ---------------------------------------------------------
//     // int marks;
//     // printf("enter marks(0-100) : ");
//     // scanf("%d", &marks);
//     // if(marks >= 90 && marks <= 100) {
//     //     printf("A+\n");
//     // } else if(marks >= 70 && marks < 90) {
//     //     printf("A\n");
//     // } else if(marks >= 30 && marks < 70) {
//     //     printf("B\n");
//     // } else if(marks >= 0 && marks < 30) {
//     //     printf("C\n");
//     // } else {
//     //     printf("wrong marks\n");
//     // }

//     // Q). WRITE A PROGRAM TO FIND IF A CHARACTER ENTERED BY USER IS UPPER CASE OR NOT
//     // ---------------------------------------------------------
//     // char ch;
//     // printf("enter a character : ");
//     // scanf("%c", &ch);
//     // if(ch >= 'A' && ch <= 'Z') {
//     //     printf("upper case\n");
//     // } else {
//     //     printf("not upper case\n");
//     // }

//     // Q). WRITE A PROGRAM TO FIND IF A CHARACTER ENTERED BY USER IS VOWEL OR NOT
//     // ---------------------------------------------------------
//     // char ch;
//     // printf("enter a character : ");
//     // scanf("%c", &ch);
//     // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//     //     printf("vowel\n");
//     // } else {
//     //     printf("not vowel\n");
//     // }


//     // LOOPS
//     // (A). FOR LOOP
//     // (B). WHILE LOOP
//     // (C). DO-WHILE LOOP

//     // FOR LOOP
//     // for(initialization; condition; increment/decrement) {
//     //     //do something
//     // }
//     // for(int i=1; i<=5; i = i+1) {
//     //     printf("Hello World\n");
//     // }
//     // for(int i=1; i<=5; i+=1) {
//     //     printf("%d\n", i);
//     // }
//     // for(int i=10; i>=1; i = i-1) {
//     //     printf("%d\n", i);
//     // }
//     // for(int i=0; i<=10; i++) {
//     //     printf("%d \n", i);
//     // }
    
//     // -------***********************************************************-------
//     // INCREMENT OPERATOR
//     // ++i (pre-increment)
//     // i++ (post-increment)
//     // int i=1;
//     // printf("%d\n", i++);  //use, then increment  <--- print 1
//     // printf("%d\n", i);    // <--- print 2
//     // printf("%d\n", ++i);   // increment, then use  <--- print 2
//     // printf("%d\n", i);     // <--- print 2

//     // DECREMENT OPERATOR
//     // --i (pre-decrement)
//     // i-- (post-decrement)
//     // int i=1;
//     // printf("%d\n", i--);  //use, then decrement  <--- print 1
//     // printf("%d\n", i);    // <--- print 0
//     // printf("%d\n", --i);   // decrement, then use  <--- print 0
//     // printf("%d\n", i);     // <--- print 0
//     // -------***********************************************************-------

//     // for(float i=1.0; i<=5.0; i++){
//     //     printf("%f\n", i);
//     // }

//     // for(char ch='a'; ch<='z'; ch++) {
//     //     printf("%c\n", ch);
//     // }

//     // INFINITE LOOP
//     // for(int i=1; ;i++) {
//     //     printf("%d\n", i);
//     //}

//     // WHITE LOOP
//     // while(condition) {
//     //     //do something
//     // }
//     // int i=1;
//     // while(i<=5) {
//     //     printf("%d\n", i);
//     //     i++;
//     // }

//     // ----------------------------------------------------------------------------
//     //Q). PRINT THE NUMBERS FROM O TO N, IF N IS GIVEN BY USER
//     // int n;            // <--- using for loop
//     // printf("enter the value of n : ");
//     // scanf("%d", &n);
//     // for(int i=0; i<=n; i++) {
//     //     printf("%d\n", i);
//     // }
//     // int n;           // <--- using while loop
//     // printf("enter number : ");
//     // scanf("%d", &n);
//     // int i=0;
//     // while(i<=n) {
//     //     printf("%d\n", i);
//     //     i++;
//     // }
//     // ----------------------------------------------------------------------------

//     // DO-WHILE LOOP
//     // do {
//     //     //do something
//     // } while(condition);

//     // int i = 1;
//     // do {
//     //     printf("%d\n", i);
//     //     i++;
//     // } while(i<=5);

//     // Q). PRINT THE SUM OF FIRST N NATURAL NUMBERS. ALSO PRINT THEM IN REVRESE ORDER
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int n;       <--- method 1
//     // printf("Enter number : ");
//     // scanf("%d", &n);
//     // int sum = 0;
//     // for(int i=1; i<=n; i++) {
//     //     sum = sum + i;
//     // }
//     // printf("sum is : %d\n", sum);
//     // for(int i=n; i>=1; i--) {
//     //     printf("%d\n", i);
//     // }
//     // int n;      <--- method 2
//     // printf("Enter number : ");
//     // scanf("%d", &n);
//     // int sum = 0;
//     // for(int i=1,j=n; i<=n && j>=1; i++,j--) {
//     //     sum += i;
//     //     printf("%d\n", j);
//     // }
//     // printf("sum is : %d\n", sum);

//     // Q). PRINT THE TABLE OF A NUMBER INPUT BY THE USER.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int n;
//     // printf("enter the number : ");
//     // scanf("%d", &n);
//     // for(int i=1; i<=10; i++) {
//     //     printf("%d * %d = %d\n", n, i, n*i);
//     // }

//     // Q). PRINT THE FACTORIAL OF A NUMBER INPUT BY THE USER.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int n;
//     // printf("enter number : ");
//     // scanf("%d", &n);
//     // int fact = 1;
//     // for(int i=1; i<=n; i++) {
//     //     fact = fact*i;
//     // }
//     // printf("%d\n", fact);

//     // BREAK STATEMENT
//     // for(int i=1; i<=5; i++) {
//     //     if(i==3) {
//     //         break;
//     //     }
//     //     printf("%d\n", i);
//     // }
//     // printf("end\n");

//     // Q).KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBER.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // do{
//     //     int n;
//     //     printf("enter a number : ");
//     //     scanf("%d", &n);
//     //     printf("you entered : %d\n", n);
//     //     if(n%2 != 0) {
//     //         break;
//     //     }
//     // } while(1);
//     // printf("thank you\n");

//     // Q). KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // do {
//     //     int n;
//     //     printf("enter number : ");
//     //     scanf("%d", &n);
//     //     printf("you entered : %d\n", n);
//     //     if(n%7==0) {
//     //         break;
//     //     }
//     // } while(1);
//     // printf("ended\n");

//     // CONTINUE STATEMENT
//     // for(int i=1; i<=5; i++) {
//     //     if(i==3) {
//     //         continue;
//     //     }
//     //     printf("%d\n", i);
//     // }

//     // Q). PRINT THE NUMBERS FROM 1 TO 10 EXCEPT 6.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // for(int i=1; i<=10; i++) {
//     //     if(i==6) {
//     //         continue;
//     //     }
//     //     printf("%d\n", i);
//     // }

//     // Q). PRINT ALL THE ODD NUMBERS FROM 5 TO 30.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // for(int i=5; i<=30; i++) {
//     //     if(i%2==0) {
//     //         continue;
//     //     }
//     //     printf("%d\n", i);
//     // }

//     // Q). PRINT REVERSE OF THE TABLE FOR A NUMBER N.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int n;
//     // printf("enter number : ");
//     // scanf("%d", &n);
//     // for(int i =10; i>=1;i--) {
//     //     printf("%d * %d = %d\n", n, i, n*i);
//     // }

//     // Q). CALCULATE THE SUM OF ALL NUMBERS BETWEEN 5 TO 50.(INCLUDING 5 & 50)
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int sum = 0;
//     // for(int i=5; i<=50; i++) {
//     //     sum += i;
//     // }
//     // printf("sum is : %d\n", sum);

//     // Q). WRITE A PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // int n;
//     // printf("enter number : ");
//     // scanf("%d", &n);
//     // int isPrime = 1;
//     // for(int i=2; i<n; i++) {
//     //     if(n%i==0) {
//     //         isPrime = 0;
//     //         break;
//     //     }
//     // }
//     // if(n<=1) {
//     //     isPrime = 0;
//     // }
//     // if(isPrime) {
//     //     printf("prime\n");
//     // } else {
//     //     printf("not prime\n");
//     // }

//     // Q). WRITE A PROGRAM TO PRINT ALL PRIME NUMBERS BETWEEN 1 TO 100.
//     // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//     // for(int i=2; i<=100; i++) {
//     //     int isPrime = 1;
//     //     for(int j=2; j<i; j++) {
//     //         if(i%j==0) {
//     //             isPrime = 0;
//     //             break;
//     //         }
//     //     }
//     //     if(isPrime) {
//     //         printf("%d\n", i);
//     //     }
//     // }
//     return 0;
// }


// FUNCTIONS 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// #include<stdio.h>

// void printHello();   // declaration or prototype

// int main() {
//     printHello();   // function call
//     printHello();
//     return 0;
// }

// void printHello() {   // function definition
//     printf("Hello!\n");
//     printf("My name is Sukhpreet\n");
// }

// Q). Write 2 functions - one to print "Hello" & second to print "good bye".
// #include<stdio.h>

// void printhello();
// void printgoodbye();

// int main(){
//     printhello();
//     printgoodbye();
//     return 0;
// }

// void printhello(){
//     printf("Hello\n");
// }
// void printgoodbye(){
//     printf("Good Bye\n");
// }

//Q). Write a function that prints Namaste if user is Indian and Bonjour if the user is French.
#include<stdio.h>

void Namaste();
void Bonjour();

int main() {
    printf("enter f for french & i for indian : ");
    char c;
    scanf("%c", &c);
    if(c=='i'){
        Namaste();
    }
    else{
        Bonjour();
    }
}

void Namaste() {
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour");
}