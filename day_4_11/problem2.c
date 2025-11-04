// Que 2 : Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount. 
// ------  

// The store provides three types of discounts to its customers:
// -> If the total purchase amount is less than Rs. 1000, there is no discount.
// -> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
// -> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

// Sample input  : purchase amount = 999
// Sample output : total amount = 999

// Sample input  : purchase amount = 2000
// Sample output : total amount including 5% discount = 1900

// Sample input  : purchase amount = 10000
// Sample output : total amount including 10% discount = 9000

#include <stdio.h>
int main(){
    int total_amount;
    printf("Enter Total Amount ");
    scanf("%d",&total_amount);
    float discount_10=total_amount-total_amount*0.1;
    float discount_5=total_amount-total_amount*0.05;

    (total_amount<1000 )&& printf("%.2f",total_amount);
    (total_amount>=1000 && total_amount<=5000 )&& printf("%.2f",discount_5);
    (total_amount>5000 )&& printf("%.2f",discount_10);


return 0 ;

}
