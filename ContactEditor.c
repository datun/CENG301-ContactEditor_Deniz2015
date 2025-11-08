#include <stdio.h>
#include <string.h>

/* Name: dAtun*/
/* ID:   ####### */


typedef struct{
        char fname[10];
        char lname[10];
        char phone[20];
        char email[20];
}Contact;

Contact person, a[10];

/* FUNCITONS */
/*DONE*/
void listContacts()
{
FILE *fin;
fin = fopen("contacts.txt","r");
while(fscanf(fin, "%s %s %s %s\n" , &person.fname, &person.lname, &person.phone, &person.email ) != EOF)
                  printf("%s %s %s %s\n", person.fname, person.lname, person.phone, person.email);
fclose(fin);
}     

/*DONE*/
void insertContact()
{
FILE *fin;
fin = fopen("contacts.txt","a");
printf("\nInput Contact:\n"
       "Name Surname Phone Email\n");
scanf("%s %s %s %s", &person.fname, &person.lname, &person.phone, &person.email);
fprintf(fin,"%s %s %s %s\n", person.fname, person.lname, person.phone, person.email);
fclose(fin);
}

void showContact()
{
FILE *fin;
fin = fopen("contacts.txt","r");

char string1[10];
int a2 = 1;
int b2 = 0;
printf("\nInsert First Name:\n");
scanf("%s",&string1);
for(a2;a2 <= sizeof(Contact); a2++)
 {
      fscanf(fin, "%s %s %s %s\n" , &person.fname, &person.lname, &person.phone, &person.email );
      if ( strcmp(string1,person.fname) == 0 )
           {
           b2 = 1;
           break;
           }
 }   
if (b2)
     {
     printf("%s %s %s %s\n", person.fname, person.lname, person.phone, person.email );
     }
 else if(!b2)
     {
     printf("No contacts found\n");
     }
fclose(fin);
}















/* MAIN MENU*/ /*FUNCTION CALL RETURN LEFT*/
int main()
{
    
char selection;
int a1 = 1;
while(a1)
  {
  printf(    "\n Select Option:\n" 
           "L - List\n"
           "I - Insert New Contact\n"
           "S - Show Contact\n"
           "E - Exit\n"
           "\nEnter selection:");
  scanf("\n%s", &selection);
     switch(selection)
     {
      case 'L':
           printf("\n");
           listContacts();
           break;
      case 'I':
           printf("\n");
           insertContact();
           break;
      case 'S':
           printf("\n");
           showContact();
           break;
      case 'E':
           a1 = 0;
           break;
      default:
       printf("\n");
       printf("Wrong selection, choose wisely!\n");
      }
  }   
return 0;
}
