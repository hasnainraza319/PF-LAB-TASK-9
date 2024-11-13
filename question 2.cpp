#include <stdio.h>
void calculate_total_cost() {
    int bolt_price = 5;    
    int nut_price = 3;    
    int washer_price = 1;  
    int bolts, nuts, washers;
    printf("Enter the number of bolts: ");
    scanf("%d", &bolts);
    printf("Enter the number of nuts: ");
    scanf("%d", &nuts);
    printf("Enter the number of washers: ");
    scanf("%d", &washers);
    if (nuts < bolts && washers < 2 * bolts) {
        printf("Check the Order: too few nuts\n");
        printf("Check the Order: too few washers\n");
    }
    else if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
    }
    else if (washers < 2 * bolts) {
        printf("Check the Order: too few washers\n");
    }
    else {

        int total_cost = (bolts * bolt_price) + (nuts * nut_price) + (washers * washer_price);
        printf("Order is OK. Total cost: %d cents.\n", total_cost);
    }
}
int main() {
    calculate_total_cost();
    return 0;
}

