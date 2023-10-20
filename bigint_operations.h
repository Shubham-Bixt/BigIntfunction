#ifndef BIGINT_OPERATIONS_H

#define BIGINT_OPERATIONS_H

typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

typedef struct BigInt
{
    Node* head;
} BigInt;


void insertDigit(BigInt* num, int digit);

void initBigInt(BigInt* num);

void subtractBigInts(BigInt* num1, BigInt* num2, BigInt* result); 

void addBigInts(BigInt* num1, BigInt* num2, BigInt* result);

void clearBigInt(BigInt* num);

void displayReversedBigInt(BigInt* num);

#endif
