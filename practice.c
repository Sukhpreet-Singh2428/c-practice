// PRIME NUMBERS 
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     int isprime = 1;
//     if(n==1){
//         printf("Not Prime");
//     } else if(n==0){
//         printf("Not prime");
//     } else {
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 isprime = 0;
//             }
//         }
//     }
//     if(isprime==1){
//         printf("Prime");
//     } else{
//         printf("Not prime");
//     }
//     return 0;
// }

// // SUM OF DIGITS
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     int sum=0;
//     while(n){
//         int m = n%10;
//         sum += m;
//         n=n/10;
//     }
//     printf("%d \n", sum);
//     return 0;
// }

// REVERSE DIGITS
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     int reversed = 0;
//     while(n){
//         int m = n%10;
//         reversed = reversed*10 + m;
//         n = n/10;
//     }
//     printf("%d \n", reversed);
//     return 0;
// }

// // PALINDROME NUMBER
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     int original = n;
//     int reversed = 0;
//     while(n){
//         int m = n%10;
//         reversed = reversed*10 + m;
//         n = n/10;
//     }
//     if(original==reversed){
//         printf("palindrome \n");
//     }else{
//         printf("Not palindrome \n");
//     }
// }


// PRACTICE QUESTIONS :
// Write a C Program to input three integer values and the output of the program must display the sum of two largest values out of the three numbers entered. 

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter values of three numbers: ");
//     scanf("%d %d %d", &a,&b,&c);
//     if(((a>b) && (a>c) && (b>c)) || ((b>a) && (b>c) && (a>c))){
//         int sum=0;
//         sum = a+b;
//         printf("%d", sum);
//     } else if(((a>b) && (a>c) && (c>b)) || ((c>a) && (c>b) && (a>b))){
//         int sum=0;
//         sum = a+c;
//         printf("%d", sum);
//     }else{
//         int sum=0;
//         sum = b+c;
//         printf("%d", sum);
//     }
// }


// In Chitkara University, there are some rules and regulations to allow a student to appear in the End Term Exams (ETE). Every student should have at least 75% attendance overall to appear in exams. But, if his/her attendance is below 75% then, a student will be only allowed to appear in ETE if he/she has a medical cause. Ask the user for medical cause (Y or N or y or n) in case if attendance percentage is below 75%. 
// Take the following input from the user:
// No. of classes attended, No. of classes held
// If the attendance is below 75% then ask user to enter whether he or she has medical cause or not (Enter either n, N , y or Y)
// Print the status of the student as “Allowed” or “Not allowed” accordingly.


// Input Format:
// The input consists of two integer values, Number of classes attended, Number of classes held.
// And if the percentage is below 75% then only the user needs to enter the medical cause.  
// Output Format:
// The output prints Allowed or Not allowed.

// #include<stdio.h>
// int main() {
//     int a,b;
//     char c;
//     printf("Enter No. of classes attened, No. of classes held : ");
//     scanf("%d %d", &a,&b);
//     float percentage = ((float)a/(float)b)*100;
//     if((int)percentage<75){
//         printf("enter whether he or she has medical cause or not : ");
//         scanf(" %c", &c);
//         if(c=='y' || c=='Y'){
//             printf("Allowed \n");
//         } else if(c=='n' || c=='N'){
//             printf("Not allowed \n");
//         }
//     } else{
//         printf("Allowed");
//     }
//     return 0;
// }

//"VideoShare" is an online video-sharing platform. The company has decided to rate its user's channels based on the sum total of the number of views received online and the subscribers.
// This sum total is referred to as User Points. The rating will be given according to the below charts: 
// User Points Rating 
// < 50 Poor
// 51 - 60 Good 
// 61 - 80 Excellent 
// 81 - 100 Outstanding 
// The whole process is automated and is carried out by the company's system. 
// Write a code to find the rating of the given user's channel based on the user points using if-else statement.

// Input Format:
// The input consists of integer value, ie rating value. (for e.g. 77)

// Output Format:
// The output prints Excellent.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter rating value : ");
//     scanf("%d", &n);
//     if(n>=81 && n<=100){
//         printf("Outstanding");
//     } else if(n>=61 && n<=80){
//         printf("Excellent");
//     } else if(n>=51 && n<=60){
//         printf("Good");
//     } else{
//         printf("Poor");
//     }
//     return 0;
// }

// Calculate the Grade of a student studying in Chitkara University. The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a grade as per the following rules:
// Average percentage above or equal to 60 - A
// Average percentage between 50 and 59 - B
// Average percentage between 40 and 49 - C
// Average percentage less than 40 – Fail
// Write a program to calculate the grade obtained by the student.
// Input Format:
// The input consists of 5 integer values for 5 different subjects.
// Output Format:
// The output prints grade “A” or “Fail”.

// #include<stdio.h>
// int main(){
//     int n1,n2,n3,n4,n5;
//     printf("Enter the marks of five subjects : ");
//     scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
//     float avg = ((float)n1 + (float)n2 + (float)n3 + (float)n4 + (float)n5)/5.0;
//     if((int)avg >= 60){
//         printf("A");
//     } else if((int)avg>= 50 && (int)avg<=59){
//         printf("B");
//     } else if((int)avg>=40 && (int)avg<=49){
//         printf("C");
//     } else{
//         printf("Fail");
//     }
//     return 0;
// }

// Write a C program to find the number of days in a month using a switch case statement. The number of days in February can be displayed as “28 or 29”.For example, in January month numbers of days are 31.
// Input Format:
// The input consists of an integer value for month. (for e.g. 6)
// Output Format:
// The output prints Number of days (i.e. 30)

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the integer value for month : ");
//     scanf("%d", &n);
//     switch(n){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//                 printf("31 \n");
//                 break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//                 printf("30 \n");
//                 break;
//         case 2: printf("28 or 29 \n");
//                 break;
//     }
//     return 0;
// }

// A manufacturing company has classified its executives into four levels for the benefit of certain perks. The levels and corresponding perks are shown below:

// Level
// Perks:
// Conveyance allowance
// Entertainment allowance
// 1
// 1000
// 500

// 2
// 750
// 200

// 3
// 500
// 100

// 4
// 250
// ____

// An executive’s gross salary includes basic pay, house rent allowance at 25% of basic pay and other perks. 
// Write a program that will read an executive’s level number, and basic pay and then compute the Gross Salary.
// Input Format:
// The input consists of two integer values, one for level number another for basic pay.
// Output Format:
// The output prints gross salary.

// #include<stdio.h>
// int main() {
//     int level,basic;
//     printf("Eneter level and basic : ");
//     scanf("%d %d", &level, &basic);
//     float gross, houserent, perk;
//     switch(level){
//         case 1: perk = 1000 + 500;
//                 break;
//         case 2: perk = 750 + 200;
//                 break;
//         case 3: perk = 500 + 100;
//                 break;
//         case 4: perk = 250 + 0;
//                 break;
//     }
//     houserent = 0.25*basic;
//     gross = perk + houserent + basic;
//     printf("%f \n", gross);
//     return 0;
// }


// You are provided with a character ch and you have to check whether the given character is an alphabet or not. If a given character is an alphabet then print ”Character is an alphabet”  else print ”Character is not an alphabet” .Implement using conditional operator.
// Input Format:
// The input consists of a single character. (for e.g. A)
// Output Format:
// The output prints Character is an alphabet.

// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter character : ");
//     scanf("%c", &c);
//     ((c>='a' && c<='z') || (c>='A' && c<='Z')) ? printf("Character is an alphabet") : printf("Character is not an alphabet");
//     return 0;
// }


// Write a program to add or subtract the numbers based on the condition that if first number is greater than second number then subtract second number from first number otherwise add two numbers using conditional operator.
// Input Format:
// The input consists of two integer values. (for e.g. 6  5)
// Output Format:
// The output prints result. (i.e. 1)

// #include<stdio.h>
// int main() {
//     int a,b;
//     printf("Enter two values : ");
//     scanf("%d %d", &a,&b);
//     (a>b) ? printf("%d", a-b) : printf("%d", a+b);
//     return 0;
// }