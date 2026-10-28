

#include <stdio.h>

int main()
{
    printf("===================================================================================================================\n\n");
    printf("======================================  WELCOME TO SUHAIL'S SIR'S HUT  ============================================\n\n");
    printf("===================================================================================================================\n\n");
    // Quantities for Veg items (initialized to 0)
    int corn_pizza = 0, burger = 0, veg_roll = 0, paneer_roll = 0, french_fries = 0;

    // Quantities for Non-Veg items (initialized to 0)
    int chicken_pizza = 0, EGG_Roll = 0, COCK = 0, CHICKEN_Burger = 0, CHICKEN_Roll = 0;

    int partChoice, itemChoice, qty;
    while (1)
    {
        printf("\nSelect Part:\n1. VEG PART\n2. NON VEG PART\n3. Print Bill & Exit\nEnter Choice: ");
        scanf("%d", &partChoice);

        if (partChoice == 3)
            break;

        switch (partChoice)
        {
        case 1: // VEG PART
            printf("\n======================= VEG PART =======================\n\n");
            printf("  S.No.  Item Name               Price\n");
            printf("  -----------------------------------------------------\n");
            printf("   1.    pizza               --->  %d rs\n", 150);
            printf("   2.    Burger              --->  %d rs\n", 100);
            printf("   3.    VEG Roll            --->  %d rs\n", 70);
            printf("   4.    Paneer Roll         --->  %d rs\n", 60);
            printf("   5.    French Fries        --->  %d rs\n", 80);
            printf("\n========================================================\n\n");

            printf("Select Item Number (1-5): ");
            scanf("%d", &itemChoice);
            printf("Enter Quantity: ");
            scanf("%d", &qty);

            switch (itemChoice)
            {
            case 1:
                corn_pizza += qty;
                break;
            case 2:
                burger += qty;
                break;
            case 3:
                veg_roll += qty;
                break;
            case 4:
                paneer_roll += qty;
                break;
            case 5:
                french_fries += qty;
                break;
            default:
                printf("Invalid Item!\n");
            }
            break;

        case 2: // NON VEG PART
            printf("\n===================== NON VEG PART =====================\n\n");
            printf("  S.No.  Item Name               Price\n");
            printf("  -----------------------------------------------------\n");
            printf("   1.    chicken_pizza       --->  %d rs\n", 175);
            printf("   2.    EGG_Roll            --->  %d rs\n", 70);
            printf("   3.    COCK                --->  %d rs\n", 80);
            printf("   4.    CHICKEN_Burger      --->  %d rs\n", 145);
            printf("   5.    CHICKEN_Roll        --->  %d rs\n", 65);
            printf("\n========================================================\n\n");

            printf("Select Item Number (1-5): ");
            scanf("%d", &itemChoice);
            printf("Enter Quantity: ");
            scanf("%d", &qty);

            switch (itemChoice)
            {
            case 1:
                chicken_pizza += qty;
                break;
            case 2:
                EGG_Roll += qty;
                break;
            case 3:
                COCK += qty;
                break;
            case 4:
                CHICKEN_Burger += qty;
                break;
            case 5:
                CHICKEN_Roll += qty;
                break;
            default:
                printf("Invalid Item!\n");
            }
            break;

        default:
            printf("Invalid Part Selected!\n");
        }
    }

    // Calculating total amount
    int subtotal = (corn_pizza * 150) + (burger * 100) + (veg_roll * 70) + (paneer_roll * 60) + (french_fries * 80) +
                   (chicken_pizza * 175) + (EGG_Roll * 70) + (COCK * 80) + (CHICKEN_Burger * 145) + (CHICKEN_Roll * 65);

    if (subtotal == 0)
    {
        printf("\nNo items ordered!\n");
        return 0;
    }

    // GST calculations (18% Split into 9% CGST and 9% SGST)
    float cgst = subtotal * 0.09;
    float sgst = subtotal * 0.09;
    float grand_total = subtotal + cgst + sgst;

    // Printing Final Invoice Card
    printf("\n==========================================\n");
    printf("               FINAL RECEIPT              \n");
    printf("==========================================\n");

    if (corn_pizza > 0)
        printf("Pizza (Veg)    x%d   ---> %d rs\n", corn_pizza, corn_pizza * 150);
    if (burger > 0)
        printf("Burger         x%d   ---> %d rs\n", burger, burger * 100);
    if (veg_roll > 0)
        printf("VEG Roll       x%d   ---> %d rs\n", veg_roll, veg_roll * 70);
    if (paneer_roll > 0)
        printf("Paneer Roll    x%d   ---> %d rs\n", paneer_roll, paneer_roll * 60);
    if (french_fries > 0)
        printf("French Fries   x%d   ---> %d rs\n", french_fries, french_fries * 80);

    if (chicken_pizza > 0)
        printf("Chicken Pizza  x%d   ---> %d rs\n", chicken_pizza, chicken_pizza * 175);
    if (EGG_Roll > 0)
        printf("EGG Roll       x%d   ---> %d rs\n", EGG_Roll, EGG_Roll * 70);
    if (COCK > 0)
        printf("COCK           x%d   ---> %d rs\n", COCK, COCK * 80);
    if (CHICKEN_Burger > 0)
        printf("Chicken Burger x%d   ---> %d rs\n", CHICKEN_Burger, CHICKEN_Burger * 145);
    if (CHICKEN_Roll > 0)
        printf("Chicken Roll   x%d   ---> %d rs\n", CHICKEN_Roll, CHICKEN_Roll * 65);

    printf("------------------------------------------\n");
    printf("Subtotal            : %d rs\n", subtotal);
    printf("CGST (9%%)           : %.2f rs\n", cgst);
    printf("SGST (9%%)           : %.2f rs\n", sgst);
    printf("==========================================\n");
    printf("GRAND TOTAL         : %.2f rs\n", grand_total);
    printf("==========================================\n\n");
    printf("               THANK - U                  \n\n");
    printf("============= VISIT AGAIN =================\n\n");

    return 0;
}
