# Contact Editor Homework for Data Structures and Algorithms
Made for course CENG301 in METU



## Assignment
In this homework, you are going to implement a contact editor. This editor will be able to list all contacts, add
a new contact and search a contact. You are given a text file “contacts.txt”.

Each line of this file contains the first name,last name, phone and e-mail of a contact. These values are separated by “/”
character. You will keep the details of the contacts in the following structure:

```
typedef struct{
    char fname[10];
    char lname[10];
    char phone[20];
    char email[20];
}Contact;
```

* Write a function **listContacts()** that will list all contacts in the file with id, first name, last name, phone and e-
mail. Use the following function prototype:
```
void listContacts()
{
  //write your code here
}
```

* Write a function **insertContact()** that will insert a new contact. Use the following function prototype:
```
void insertContact(char fname[], char lname[], char phone[], char email[])
{
  //write your code here
}
```

* Write a function **showContact()** that will search contacts. Function will take the first name of a contact and
print the list of contacts with this name. Use the following function prototype:
```
void showContact(char fname[])
{
  //write your code here
}
```

Your program will be a menu driven one and present the following options to the user:

```
  MENU
  L - List all contacts
  I - Insert a new contact
  S - Show contact
  E - Exit
  Selection:
```

When the user press :
* L : the program will list all contacts in the file with first name, last name, phone and e-mail.
* I : the program will ask the first name, last name, phone and e-mail of the new contact from the user and insert
this contact at the end of the file.
* S : the program will ask the name of the contact being searched from the user and print the list of the contacts
with that name. If there are no contacts found, then you will print : “No contacts found” on the screen.
