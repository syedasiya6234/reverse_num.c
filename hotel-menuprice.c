#include<stdio.h>
#include<conio.h>
int main()
 {
    int item,qty;
    float price, total;
    printf("《《《《《HOTEL MENU》》》》》\n");
    printf("1. chapati chicken - Rs.130\n");
    printf("2. Dosa kajukurma  - Rs.120\n");
    printf("3. Idly sambar     - Rs.80\n");
    printf("4. Meals           - Rs.100\n");
    printf("\nEnter item number(1-4):");
    scanf("%d", &item);
    printf("Enter qty:");
    scanf("%d", &qty);
    switch(item)
     {
     case 1:
            price =130;
            break;
     case 2:  
            price =120;
            break;
     case 3:
            price =80;
            break;
     case 4:
            price =100;
            break;
     default:
     printf("Invalid item number!");
     return 0;
    }
    total = price * qty;
    printf("\nYou selected item %d\n",item);
    printf("Total Bill = Rs. %.2f\n",total);
    return 0;
}