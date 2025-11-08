#ifndef DATA_STRUCTURE_H_
#define DATA_STRUCTURE_H_
typedef struct {

    char surname[50];
    char name[50];
    char workplace[50];
    char workplacePost[50]; 
    char telephoneNumber[50];
    char email[50];
    char socialMedia[50];
    char messanger[50];

}phoneBook;

void PBAdd(phoneBook *ptr); 

void PBEdit(phoneBook *ptr);

void PBDelete(phoneBook *ptr);

void PBOutput(phoneBook *ptr);

#endif