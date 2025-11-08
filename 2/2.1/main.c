// Eltex_2module_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*2.1. Написать программу для работы со списком контактов
(телефонная книга). 
Хранить сведения о Ф.И.О. человека, его месте работы и
должности, номерах телефона, адресах электронной почты, ссылки на
страницы в соцсетях и профили в мессенджерах. +
Обязательными для
заполнения являются фамилия и имя, остальные поля заполняются при
необходимости. 
Для хранения данных использовать массивы. +
Программа должна предоставлять возможность добавления, редактирования и удаления контакта.*/

#include <stdio.h>
#include "data_structure.h"

int main()
{
    phoneBook PB, *ptr = &PB;
    int choice;

    while (1)
    {
        printf("Menu for the phonebook:\n 1. Create an entry.\n 2. Edit an entry\n 3. Delete an entry\n 4. Output an entry\n 5. Exit\n");
    
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            PBAdd(ptr);
            break;
        case 2:
            PBEdit(ptr);
            break;
        case 3:
            PBDelete(ptr);
            break;
        case 4:
            PBOutput(ptr);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5\n");
        }

    }

}