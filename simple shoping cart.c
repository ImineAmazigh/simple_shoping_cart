#include <stdio.h>

int main() {
    //declaration of the variables
    char item[10];
    float price;
    int amount;
    char currency = '$';
    float bill_total_price;
    //some inputs :)
    printf("enter your item name:\n");
    fgets(item, sizeof(item), stdin);
    printf("enter your item price:\n");
    scanf("%f", &price);
    printf("enter how many you want to buy:\n");
    scanf("%d", &amount);
    bill_total_price = amount * price;
    printf("here's you bill of %s is %.2f %c", item,bill_total_price,currency);

    return 0;
}
