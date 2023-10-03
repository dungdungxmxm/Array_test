#include <stdio.h>


void menu();
// ---------------------------------------------------------------
void menu()
{
    printf("\n************MENU****************");
    printf("\n1. Input c to create a new aray of integer.");
    printf("\n2. Input p to print array.");
    printf("\n3. Input i to push a item to the end of array.");
    printf("\n4. Input d to delete a item at the k position.");
    printf("\n5. Input s to sort array in ascending order.");
    printf("\n6. Input x to sort array in descending order.");
    printf("\n7. Input t to find if a item is in array(x input from keyboard)?.");
    printf("\n9. Input e to quit program.");
    printf("\n*********************************");
}
int main(int argc, char const *argv[])
{
    char choice;

    do
    {
        menu();
        printf("\nPlease select a function: ");
        scanf("%c", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 'c':
            Array_CreateEmptyArray(&arr, &n);
            break;
        case 'p':
            Array_print(arr, n);
            break;
        case 'i':
            int data;
            printf("\nInput data to add to array: ");
            scanf("%d", &data);
            fflush(stdin);
            Array_AddToEnd(&arr, data, &n);
            break;
        case 'd':
            int delete_pos;
            printf("\nInput position k to delete: ");
            scanf("%d", &delete_pos);
            fflush(stdin);
            Array_DeleteAtK(&arr, &n, delete_pos);
            break;
        case 's':
            Array_SortAssending(arr, n);
            break;
        case 'x':
            Array_SortDescending(arr, n);
            break;
        case 't':
            int x;
            printf("Input x need to find: ");
            scanf("%d", &x);
            fflush(stdin);
            Array_FindElement(arr, n, x);
            break;
        case 'e':
            printf("\nYou have quit the program.");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
        printf("\n");
    } while (choice != 'e');

    return 0;
}
