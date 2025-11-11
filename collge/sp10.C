#include <stdio.h>
#include <conio.h>
#define SIZE 10 // Size of hash table
// Structure for each element in the hash table
struct HashItem
{
 int key;
 int value;
};
// Declare hash table
struct HashItem hashTable[SIZE];
// Function to initialize hash table
void initHashTable()
{
 int i;
 for (i = 0; i < SIZE; i++)
 {
 hashTable[i].key = -1; // -1 indicates empty slot
 hashTable[i].value = -1;
 }
}
// Hash function using division method
int hashFunction(int key)
{
 return key % SIZE;
}
// Insert key-value pair
void insert(int key, int value)
{
 int index = hashFunction(key);
 int startIndex = index;
 while (hashTable[index].key != -1)
 {
 index = (index + 1) % SIZE;
 if (index == startIndex)
 {
 printf("\nHash Table is full! Cannot insert more.\n");
 return;
 }
 }
 hashTable[index].key = key;
 hashTable[index].value = value;
 printf("\nInserted (Key: %d, Value: %d) at Index %d\n", key, value,
index);
}
// Search for a key
void search(int key)
{
 int index = hashFunction(key);
 int startIndex = index;
 while (hashTable[index].key != -1)
 {
 if (hashTable[index].key == key)
 {
 printf("\nKey %d found at Index %d with Value = %d\n", key,
index, hashTable[index].value);
 return;
 }
 index = (index + 1) % SIZE;
 if (index == startIndex)
 break;
 }
 printf("\nKey %d not found in the hash table.\n", key);
}
// Display hash table
void display()
{
 int i;
 printf("\n--- Hash Table ---\n");
 printf("Index\tKey\tValue\n");
 for (i = 0; i < SIZE; i++)
 {
 if (hashTable[i].key != -1)
 printf("%d\t%d\t%d\n", i, hashTable[i].key, hashTable[i].value);
 else
 printf("%d\t--\t--\n", i);
 }
}
void main()
{
 int choice, key, value;
 clrscr(); // Clear screen
 initHashTable();
 while (1)
 {
 printf("\n=== Hash Table using Division Method ===\n");
 printf("1. Insert (key, value)\n");
 printf("2. Search (key)\n");
 printf("3. Display Table\n");
 printf("4. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 printf("\nEnter Key (integer): ");
 scanf("%d", &key);
 printf("Enter Value (integer): ");
 scanf("%d", &value);
 insert(key, value);
 break;
 case 2:
 printf("\nEnter Key to Search: ");
 scanf("%d", &key);
 search(key);
 break;
 case 3:
 display();
 break;
 case 4:
 printf("\nExiting program...\n");
 getch();
 return;
 default:
 printf("\nInvalid choice! Please try again.\n");
 }
 }
}