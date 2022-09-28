#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Simple KFC Ordering Program by Mohamed Mostafa

void rerun(void);
void pay(int total);
void meals(void);
void sandwitches(void);
void friedchicken(void);
void beverages(void);

typedef struct
{
    string credit;
    string ccv;
}valar;


int main(void)
{
    int selection;
    printf("\n\n[1] KFC Meals Menu.\t[2] Sandwitches Menu.\t[3] Fried Chicken Menu.\n\n[4] Beverages Menu.\n\n[5] Exit\n\n");
    do
    {
        selection = get_int("\n[!] Select: ");
        if(selection == 1)
        {
            meals();
        }
        else if(selection == 2)
        {
            sandwitches();
        }
        else if(selection == 3)
        {
            friedchicken();
        }
        else if(selection == 4)
        {
            beverages();
        }
        else if(selection == 5)
        {
            printf("\n\n[*] KFC Order Program Has Been Terminated.\n");
            return 0;
        }    
    } while (selection < 1 || selection > 5);
    
}
// Meals Functions
void meals(void)
{
    int user_choice;int select_items;float total = 0.0;int quantity;string discount = "KFC0011";string discount_input;int choose;int pay_prompt;float total_discount;
    printf("\n\n---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| Item N.\t Item D.\t\t\t\t\t\t\t\t\t\t\t\t\t Price\t    |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 1\t\t 8-Piece Meal (4 Drums, 4 Thighs, 2 Large Sides, and 4 Biscuits)\t\t\t\t		 26.49$\t    |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 2\t\t 12-Piece Meal (3 Drums, 3 Thighs, 3 Breasts, 3 Wings, 3 Large Sides, and 6 Biscuits)\t\t\t\t 33.99$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 3\t\t 12-Piece Meal (6 Drums, 6 Thighs, 3 Large Sides, and 6 Biscuits)\t\t\t\t\t\t 34.99$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 4\t\t 16-Piece Meal (4 Drums, 4 Thighs, 4 Breasts, 4 Wings, 4 Large Sides, and 8 biscuits)\t\t\t\t 43.49$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 5\t\t 8-Piece Fill Up (4 Drums, 4 Thighs, 2 Large Mashed Potatoes & Gravy, Large Cole Slaw, and 4 Biscuits.)	\t 25.49$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 6\t\t 8-Piece Chicken Bucket (2 Drums, 2 Thighs, 2 Breasts, and 2 Wings)\t\t\t\t\t\t 19.99$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 7\t\t 8-Piece Chicken Bucket (4 Drums and 4 Thighs)\t\t\t\t\t\t\t\t\t 19.99$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 8\t\t 12-Piece Chicken Bucket (6 Drums and 6 Thighs)\t\t\t\t\t\t\t\t\t 25.99$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| 9\t\t 12-Piece Chicken Bucket (6 Drums and 6 Thighs)\t\t\t\t\t\t\t\t\t 32.49$     |\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");

    do
    {
        user_choice = get_int("\n\n[?] How Many Items You Wanna Buy?: ");
    } while (user_choice < 1 || user_choice > 9);

    for(int x = 0; x < user_choice;x++)
    {
        do
        {
            select_items = get_int("\n\n[?] Enter KFC Meal Number: ");
            do
            {
                quantity = get_int("\n\n[?] How Many KFC Meals?: ");
            } while (quantity < 1 || quantity > 20);
            if(select_items == 1)
            {
                total += quantity * 26.49;
            }
            else if(select_items == 2)
            {
                total += quantity * 33.99;
            }
            else if(select_items == 3)
            {
                total += quantity * 34.99;
            }
            else if(select_items == 4)
            {
                total += quantity * 43.49;
            }
            else if(select_items == 5)
            {
                total += quantity * 25.49;
            }
            else if(select_items == 6)
            {
                total += quantity * 19.99;
            }
            else if(select_items == 7)
            {
                total += quantity * 19.99;
            }
            else if(select_items == 8)
            {
                total += quantity * 25.99;
            }
            else if(select_items == 9)
            {
                total += quantity * 32.49;
            }
        } while (select_items < 1 || select_items > 9);
    }
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------\n");
        printf("\nChoose Action\n\n(1) Print Out Order Invoice.\n\n(2) 25 Percent Discount Voucher.\n\n");
        choose = get_int("\n[?] Select: ");
        if(choose == 1)
        {
            printf("\n----------------------------\n");
            printf("| [$] Total: %.2f\t   |",total);
            printf("\n----------------------------\n");
            pay(total);

        }
        else if(choose == 2)
        {
            discount_input = get_string("\n[?] Enter Discount Voucher Code: ");
            if(strcmp(discount,discount_input) == 0)
            {
                total_discount = total * (100-25) / 100;
                printf("\n----------------------------------\n");
                printf("| [$] Total After Discount: %.2f |",total_discount);
                printf("\n----------------------------------\n");
                pay(total_discount);
            }
            else
            {
                printf("\n[!] Invalid Voucher Code.\n\n");
            }
        }
    } while (choose < 1 || choose > 2);
    rerun();
}
// Sandwitches Functions
void sandwitches(void)
{
    int user_choice;int select_items;float total = 0.0;int quantity;string discount = "KFC0011";string discount_input;int choose;int pay_prompt;float total_discount;
    printf("\n\n---------------------------------------------------------------------------------------------\n");
    printf("| Item N.\t\t\t Item D.\t\t\t\t\t Price\t    |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 1\t\t\t\t Sandwiches And Tenders Meal	\t\t 38.49$\t    |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 2\t\t\t\t Sandwiches And Sides\t\t\t\t 26.49$     |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 3\t\t\t\t KFC Chicken Sandwich Combo\t\t\t 8.49$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 4\t\t\t\t KFC Chicken Sandwich Box\t\t\t 10.49$     |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 5\t\t\t\t KFC Chicken Sandwich\t\t\t\t 5.49$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 6\t\t\t\t Chicken Little\t\t\t\t\t 2.19$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 7\t\t\t\t Chicken Little Combo\t\t\t\t 6.39$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    do
    {
        user_choice = get_int("\n\n[?] How Many Items You Wanna Buy?: ");
    } while (user_choice < 1 || user_choice > 7);

    for(int x = 0; x < user_choice;x++)
    {
        do
        {
            select_items = get_int("\n\n[?] Enter Sandwitch Number: ");
            do
            {
                quantity = get_int("\n\n[?] How Many Sandwitches?: ");
            } while (quantity < 1 || quantity > 20);
            if(select_items == 1)
            {
                total += quantity * 38.49;
            }
            else if(select_items == 2)
            {
                total += quantity * 26.49;
            }
            else if(select_items == 3)
            {
                total += quantity * 8.49;
            }
            else if(select_items == 4)
            {
                total += quantity * 10.49;
            }
            else if(select_items == 5)
            {
                total += quantity * 5.49;
            }
            else if(select_items == 6)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 7)
            {
                total += quantity * 6.39;
            }
        } while (select_items < 1 || select_items > 7);
    }
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------\n");
        printf("\nChoose Action\n\n(1) Print Out Order Invoice.\n\n(2) 25 Percent Discount Voucher.\n\n");
        choose = get_int("\n[?] Select: ");
        if(choose == 1)
        {
            printf("\n----------------------------\n");
            printf("| [$] Total: %.2f\t   |",total);
            printf("\n----------------------------\n");
            pay(total);

        }
        else if(choose == 2)
        {
            discount_input = get_string("\n[?] Enter Discount Voucher Code: ");
            if(strcmp(discount,discount_input) == 0)
            {
                total_discount = total * (100-25) / 100;
                printf("\n----------------------------------\n");
                printf("| [$] Total After Discount: %.2f |",total_discount);
                printf("\n----------------------------------\n");
                pay(total_discount);
            }
            else
            {
                printf("\n[!] Invalid Voucher Code.\n\n");
            }
        }
    } while (choose < 1 || choose > 2);
    rerun();
}
// Fried Chicken Function
void friedchicken(void)
{
    int user_choice;int select_items;float total = 0.0;int quantity;string discount = "KFC0011";string discount_input;int choose;float total_discount;
    printf("\n\n---------------------------------------------------------------------------------------------\n");
    printf("| Item N.\t\t\t Item D.\t\t\t\t\t Price\t    |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 1\t\t\t\t 1-Piece Breast Combo		\t\t 6.29$\t    |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 2\t\t\t\t Drum & Thigh Fill Up	\t\t\t 6.79$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 3\t\t\t\t 2-Piece Chicken Combo - Breast & Wing\t\t 7.29$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 4\t\t\t\t 3-Piece Chicken Combo - 2 Breast, 1 Wing\t 8.99$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 5\t\t\t\t 3-Piece Chicken Combo - Breast, Thigh, and Wing 8.99$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 6\t\t\t\t 3-Piece Chicken Box - 2 Breast, 1 Wing\t\t 9.49$      |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| 7\t\t\t\t 4-Piece Chicken Combo\t\t\t\t 10.49$     |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    do
    {
        user_choice = get_int("\n\n[?] How Many Items You Wanna Buy?: ");
    } while (user_choice < 1 || user_choice > 7);

    for(int x = 0; x < user_choice;x++)
    {
        do
        {
            select_items = get_int("\n\n[?] Enter Fried Chicken Number: ");
            do
            {
                quantity = get_int("\n\n[?] How Many Fried Chickens?: ");
            } while (quantity < 1 || quantity > 20);
            if(select_items == 1)
            {
                total += quantity * 6.29;
            }
            else if(select_items == 2)
            {
                total += quantity * 6.79;
            }
            else if(select_items == 3)
            {
                total += quantity * 7.29;
            }
            else if(select_items == 4)
            {
                total += quantity * 8.99;
            }
            else if(select_items == 5)
            {
                total += quantity * 8.99;
            }
            else if(select_items == 6)
            {
                total += quantity * 9.49;
            }
            else if(select_items == 7)
            {
                total += quantity * 10.49;
            }
        } while (select_items < 1 || select_items > 7);
    }
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------\n");
        printf("\nChoose Action\n\n(1) Print Out Order Invoice.\n\n(2) 25 Percent Discount Voucher.\n\n");
        choose = get_int("\n[?] Select: ");
        if(choose == 1)
        {
            printf("\n----------------------------\n");
            printf("| [$] Total: %.2f\t   |",total);
            printf("\n----------------------------\n");
            pay(total);

        }
        else if(choose == 2)
        {
            discount_input = get_string("\n[?] Enter Discount Voucher Code: ");
            if(strcmp(discount,discount_input) == 0)
            {
                total_discount = total * (100-25) / 100;
                printf("\n----------------------------------\n");
                printf("| [$] Total After Discount: %.2f |",total_discount);
                printf("\n----------------------------------\n");
                pay(total_discount);
            }
            else
            {
                printf("\n[!] Invalid Voucher Code.\n\n");
            }
        }
    } while (choose < 1 || choose > 2);
    rerun();
}
// Beverages Function
void beverages(void)
{
    int user_choice;int select_items;float total = 0.0;int quantity;string discount = "KFC0011";string discount_input;int choose;float total_discount;
    printf("\n\n-----------------------------------------------------------------------------\n");
    printf("| Item N.\t\t\t Item D.\t\t\t Price\t    |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 1\t\t\t\t Pepsi\t\t\t\t 2.19$\t    |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 2\t\t\t\t Diet Pepsi\t\t\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 3\t\t\t\t Mountain Dew\t\t\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 4\t\t\t\t Mountain Dew Sweet Lightning\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 5\t\t\t\t Dr. Pepper\t\t\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 6\t\t\t\t Sweet Tea	\t\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| 7\t\t\t\t Lemonade\t\t\t 2.19$      |\n");
    printf("-----------------------------------------------------------------------------\n");
    do
    {
        user_choice = get_int("\n\n[?] How Many Items You Wanna Buy?: ");
    } while (user_choice < 1 || user_choice > 7);

    for(int x = 0; x < user_choice;x++)
    {
        do
        {
            select_items = get_int("\n\n[?] Enter Beverages Number: ");
            do
            {
                quantity = get_int("\n\n[?] How Many Beverages?: ");
            } while (quantity < 1 || quantity > 20);
            if(select_items == 1)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 2)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 3)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 4)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 5)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 6)
            {
                total += quantity * 2.19;
            }
            else if(select_items == 7)
            {
                total += quantity * 2.19;
            }
        } while (select_items < 1 || select_items > 7);
    }
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------\n");
        printf("\nChoose Action\n\n(1) Print Out Order Invoice.\n\n(2) 25 Percent Discount Voucher.\n\n");
        choose = get_int("\n[?] Select: ");
        if(choose == 1)
        {
            printf("\n----------------------------\n");
            printf("| [$] Total: %.2f\t   |",total);
            printf("\n----------------------------\n");
            pay(total);

        }
        else if(choose == 2)
        {
            discount_input = get_string("\n[?] Enter Discount Voucher Code: ");
            if(strcmp(discount,discount_input) == 0)
            {
                total_discount = total * (100-25) / 100;
                printf("\n----------------------------------\n");
                printf("| [$] Total After Discount: %.2f |",total_discount);
                printf("\n----------------------------------\n");
                pay(total_discount);
            }
            else
            {
                printf("\n[!] Invalid Voucher Code.\n\n");
            }
        }
    } while (choose < 1 || choose > 2);
    rerun();
}
// Re Run Prompt Function
void rerun(void)
{
    char q1;
    do
    {
        printf("\n-----------------------------------------------------------------------------------------------\n");
        q1 = get_char("\n[?] Do You Wanna Order Something Else? (Y = Continue / N = Exit): ");
        if(q1 == 'Y' || q1 == 'y')
        {
            main();
        }
        else if(q1 == 'N' || q1 == 'n')
        {
            printf("\n\n[*] KFC Order Program Has Been Terminated.\n");
            return;
        }
    } while(q1 != 'Y' && q1 != 'y' && q1 != 'N' && q1 != 'n');
}
// Payment Function
void pay(int total)
{
    valar cred_info[1];cred_info[0].credit = "1478523690";cred_info[0].ccv = "225";string credit_in;string ccv_in;
    float cred_balance = 3000;int pay_prompt;
    printf("\n-----------------------------------------------------------------------------------------------\n");
    printf("\nChoose Payment Method\n\n(1) Cash.\n\n(2) Credit Card.\n\n");
    do
    {
        pay_prompt = get_int("\n[?] Select: ");
        if(pay_prompt == 1)
        {
            printf("\n[^_^] Thanks For Ordering From KFC.\n");
            return;
        }
        else if(pay_prompt == 2)
        {
            do
            {
                credit_in = get_string("\n[?] Enter Credit Card Number: ");
                ccv_in = get_string("\n[?] Enter Credit Card CCV Number: ");
                if(strcmp(cred_info[0].credit,credit_in) == 0 && strcmp(cred_info[0].ccv,ccv_in) == 0)
                {
                    cred_balance -= total;
                    printf("\n-----------------------------------------------------------------------------------------------\n");
                    printf("\n[$] Order Invoice Payment Done Successfully.\n");
                    printf("\n[$] Credit Card Balance After Payment: %.2f$\n",cred_balance);
                }
                else if(strcmp(cred_info[0].credit,credit_in) != 0 || strcmp(cred_info[0].ccv,ccv_in) != 0)
                {
                    printf("\n-----------------------------------------------------------------------------------------------\n");
                    printf("\n[$] Order Invoice Payment Failed, Please Check Your Credit Card Information.\n");
                }
            } while (strcmp(cred_info[0].credit,credit_in) != 0 && strcmp(cred_info[0].ccv,ccv_in) != 0);
        }
    } while (pay_prompt < 1 || pay_prompt > 2);
}