#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    int age;
};

void addContact() {
    struct Contact c;
    FILE *file = fopen("contacts.txt", "a");
    
    printf("Enter name: ");
    scanf("%s", c.name);
    printf("Enter phone: ");
    scanf("%s", c.phone);
    printf("Enter age: ");
    scanf("%d", &c.age);
    
    fprintf(file, "%s %s %d\n", c.name, c.phone, c.age);
    fclose(file);
    
    printf("\nContact added successfully!\n");
}

void viewContacts() {
    struct Contact c;
    FILE *file = fopen("contacts.txt", "r");
    
    if (file == NULL) {
        printf("No contacts found!\n");
        return;
    }
    
    printf("\n=== Contact List ===\n");
    while (fscanf(file, "%s %s %d", c.name, c.phone, &c.age) != EOF) {
        printf("Name: %s, Phone: %s, Age: %d\n", c.name, c.phone, c.age);
    }
    printf("====================\n");
    
    fclose(file);
}

int main() {
    int choice;
    
    while (1) {
        printf("\n=== Contact Manager ===\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            addContact();
        } else if (choice == 2) {
            viewContacts();
        } else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    
    return 0;
}