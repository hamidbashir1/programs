#include<stdio.h>
#include<stdlib.h>

    float accountBalance,amount;

    void initializeAccount();
    void getBalance(void);
    void askCustomer(void);
    void updateAccount(float value);
    void addGift(float giftAmount);
    void thankYou(void);

int main()
{
    int transactionCounter = 0;
    initializeAccount();
    getBalance();
    //performs first transaction
    askCustomer();
    updateAccount(amount);
    getBalance();
    //performs second transaction
    askCustomer();
    updateAccount(amount);
    addGift(5.0);
    getBalance();
    //performs third transaction
    askCustomer();
    updateAccount(amount);
    addGift(2.0);
    getBalance();
    thankYou();
}

void initializeAccount(void)
{
    accountBalance = 0.0;
}

void addGift(float giftAmount)
{
    accountBalance += giftAmount;
    printf("Congratulations! a gift of Rs. %.2f has been added to your account\n",giftAmount);
}

void askCustomer(void)
{
    printf("Next transaction please...\n");
    printf("\nEnter amount to credit(positive) or debit(negative): ");
    scanf("%f",&amount);
}

void getBalance(void)
{
    printf("\nThe current balance in your account is Rs. %.2f\n",accountBalance);
}

void updateAccount(float amount)
{
    accountBalance += amount;
    printf("The account was updated with Rs %.2f\n",amount);
}

void thankYou(void)
{
    printf("\n------Thank You!------\n");
}