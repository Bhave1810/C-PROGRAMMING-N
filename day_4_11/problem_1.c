// Que 1 :  A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 
// -------  Write a C program to Display total selling price, profit along with vat and service charge.
//          To calculate the selling price, profit, VAT, and service charge, follow these steps:

//          1) Calculate the selling price:

//             Selling Price = Cost Price + Profit

//             Selling Price = Rs. 3500 + (27% of Rs. 3500)


//          2) Calculate the profit:

//             Profit = Selling Price - Cost Price


//          3) Calculate VAT:

//             VAT = 12.7% of Selling Price


//          4) Calculate Service Charge:

//             Service Charge = 3.87% of Selling Price





#include <stdio.h>
int main ()
{
int cost_price=3500;

float selling_price=cost_price+0.27*3500;
printf("Selling Price=%.2f",selling_price);
float profit=selling_price-cost_price;
printf("Profit=%.2f",profit);

float vat=0.127*selling_price;
printf("VAT=%.2f",vat);
float service_charge=0.0387*selling_price;
printf("Service Charge=%.2f",service_charge);

return 0;
}

// output :Selling Price=4445.00 Profit=945.00 VAT=564.52 Service Charge=172.02