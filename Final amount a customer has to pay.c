#include <stdio.h>

int main() 
{
   float order_amount, discount , delivery_charge , final_amount;
    int membership; 
    printf("Enter order amount (in ₹) and membership:");
    scanf("%f%d",&order_amount,&membership);
    if (order_amount >= 500) 
     {   delivery_charge = 0; 
        if (membership == 1) 
            discount = 0.10 * order_amount; 
        else 
            discount = 0;
     }
    else 
      {  
        delivery_charge =50; 
        discount = 0;
      }
    final_amount = order_amount - discount + delivery_charge;
    printf("₹%.2f\n", final_amount);
}
