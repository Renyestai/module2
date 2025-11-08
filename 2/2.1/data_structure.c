#include <stdio.h>
#include <string.h>
#include "data_structure.h"

void PBAdd(phoneBook* ptr) 

{ 
    int choice; 

    printf("Enter surname: "); 

    fgets(ptr->surname, 50, stdin); 

    getchar(); 

    printf("Enter name: "); 

    fgets(ptr->name, 50, stdin); 

    getchar(); 

    while(1){
    printf("What additional information would you like to enter?\n"); 

    printf("1. Telephone number\n2. Workplace\n3. Position\n4. Email\n5. Social media\n6. Messanger\n7. Exit\n"); 

    scanf("%d", &choice); 

    getchar(); 

    switch (choice) 

    { 

    case 1: 

        printf("Enter telephone number: "); 
        fgets(ptr->telephoneNumber, 50, stdin); 
        getchar(); 
        break; 

    case 2: 

        printf("Enter workplace: "); 
        fgets(ptr->workplace, 50, stdin); 
        getchar(); 
        break; 

    case 3: 

        printf("Enter position: "); 

        fgets(ptr->workplacePost, 50, stdin); 

        getchar(); 

        break; 

    case 4: 

        printf("Enter email: "); 

        fgets(ptr->email, 50, stdin); 

        getchar(); 

        break; 

     case 5: 

        printf("Enter social media: "); 

        fgets(ptr->socialMedia, 50, stdin); 

        getchar(); 

        break; 
    case 6: 

        printf("Enter messanger: "); 

        fgets(ptr->messanger, 50, stdin); 

        getchar(); 

        break; 
    case 7: 

        return; 
    default: 

        printf("Invalid choice.\n"); 

        break; 

    } 
    }
} 

 

void PBEdit(phoneBook *ptr)
{
    int choice; 
    while (1) 

    { 

        printf("What information would you like to edit?\n"); 

        printf("1. Surname\n2. Name\n3. Telephone number\n4. Workplace\n5. Position\n6. Email\n7. Social media\n8. Messanger\n9. Finish editing\n"); 

        scanf("%d", &choice); 

        getchar(); 

  

        switch (choice) 

        { 

        case 1: 

            printf("Enter surname: "); 

            fgets(ptr->surname, 50, stdin); 

            getchar(); 

            break; 

        case 2: 

            printf("Enter name: "); 

            fgets(ptr->name, 50, stdin); 

            getchar(); 

            break; 

        case 3: 

            printf("Enter telephone number: "); 

            fgets(ptr->telephoneNumber, 50, stdin); 

            getchar(); 

            break; 

        case 4: 

            printf("Enter workplace: "); 

            fgets(ptr->workplace, 50, stdin); 

            getchar(); 

            break; 

        case 5: 

            printf("Enter position: "); 

            fgets(ptr->workplacePost, 50, stdin); 

            getchar(); 

            break; 

        case 6: 

            printf("Enter email: "); 

            fgets(ptr->email, 50, stdin); 

            getchar(); 

            break; 

        case 7: 

            printf("Enter social media: "); 

            fgets(ptr->socialMedia, 50, stdin); 

            getchar();

            break; 

        case 8: 

            printf("Enter messanger: "); 

            fgets(ptr->messanger, 50, stdin); 

            getchar(); 

            break; 

        case 9: 

            return; 

        default: 

            printf("Invalid choice.\n"); 

            break; 

        } 

    } 
}

void PBDelete(phoneBook *ptr)
{
    memset(ptr->surname, 0, 50);
    memset(ptr->name, 0, 50);
    memset(ptr->telephoneNumber,0, 50);
    memset(ptr->workplace, 0, 50);
    memset(ptr->workplacePost, 0, 50);
    memset(ptr->email, 0, 50);
    memset(ptr->socialMedia, 0, 50);
    memset(ptr->messanger, 0, 50);
}

void PBOutput(phoneBook *ptr)
{
    printf("Surname and name: %s %s\n", ptr->surname, ptr->name);
    printf("Workplace: %s\n", ptr->workplace);
    printf("Workplace position: %s\n", ptr->workplacePost);
    printf("Telephone number: %s\n", ptr->telephoneNumber);
    printf("Email: %s\n", ptr->email);
    printf("Social media: %s\n", ptr->socialMedia);
    printf("Messanger: %s\n", ptr->messanger);
}