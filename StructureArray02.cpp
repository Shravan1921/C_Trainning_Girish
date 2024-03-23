

#include <stdio.h>
#include <string.h>

typedef struct item_rec{
    int item_id;
    char item_name[31];
    int qoh;
    float rate;
} ITEM;

int main() {

    ITEM items[5] = {
        {1,"Shirts",10,1.11},
        {2,"Pants",20,2.22},
        {3,"Dress",30,3.33},
        {4,"Jackets",40,4.44},
        {5,"Caps",50,5.55}
    };

    char choice;
    do {
        int itemId;
        printf("Enter Item ID:");
        scanf("%d", &itemId);

        int index = -1;
        for (int i = 0; i < 5; i++) {
            if (items[i].item_id == itemId) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            printf("Error: Item ID not found.\n");
            continue;
        }

        int sellQty;
        printf("Input Sell Qty:");
        scanf("%d", &sellQty);

        if (sellQty > items[index].qoh) {
            printf("Error: Cannot sell more than QOH.\n");
            continue;
        }

        printf("\nItem ID: %d\n", items[index].item_id);
        printf("Sell Qty: %d\n", sellQty);
        printf("QOH: %d\n", items[index].qoh);
        printf("Sell Qty: %d\n", items[index].rate);
        float toatlCost = sellQty * items[index].rate;
        printf("Total Cost: % .2f\n", toatlCost);

        items[index].qoh -= sellQty;

        printf("\nDo you want to continue (Y/N): ");
        scanf("%c", &choice);
    } while (choice == 'Y' || choice == 'y');

    printf("\n Array of items:\n");
    printf("%-10s %-20s %-10s %-10s", "Item ID", "Item Name", "QOH", "Rate");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10d %-10.2f\n", items[i].item_id, items[i].item_name, items[i].qoh, items[i].rate);
    }

    return 0;
}