/*Name: Pablo Velazquez
 *I certify that this is my own work and not the work of others. 
 *This program displays a shopping list with the item number, description,
 *price, count, and total price of each item. The total price is calculated
 *by multiplying the count by the price of the item.
 */

#include <stdio.h>

int main(){
    
    int itemNum[5]; //array to hold the item numbers
    itemNum[0] = 345;
    itemNum[1] = 7474;
    itemNum[2] = 987;
    itemNum[3] = 2342;
    itemNum[4] = 47;

    char* itemName[5]; //array to hold the item names
    itemName[0] = "Bookshelf";
    itemName[1] = "Pencil";
    itemName[2] = "Chair";
    itemName[3] = "Computer";
    itemName[4] = "Videogame";

    float itemCost[5]; //array to hold the item cost
    itemCost[0] = 78.51;
    itemCost[1] = 1.99;
    itemCost[2] = 129.99;
    itemCost[3] = 1295.40;
    itemCost[4] = 59.99;

    int itemCount[5]; //array to hold the item count
    itemCount[0] = 4;
    itemCount[1] = 100;
    itemCount[2] = 6;
    itemCount[3] = 3;
    itemCount[4] = 1;

    int i = 0;
    int size = sizeof(itemNum)/sizeof(itemNum[0]); //size stores the size of the array itemNum
    
    printf("\n"); //new line for easier viewing

    //print the headers
    printf("%s \t %-6s %18s %10s %15s\n", "Item Num", "Description", "Price", "Count", "Extended Price");

    for(i = 0; i < size; i++){ //use a for loop to go through the array
        //using printf formatting to make sure the output aligns with the headers 
        printf("%06d \t\t %-20s $%8.2f %10d \t $%8.2f \n", itemNum[i], itemName[i], itemCost[i], itemCount[i], itemCount[i]*itemCost[i]);
    }
    printf("\n"); //new line for easier viewing
    return 0;

}
