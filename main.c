#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

typedef struct Osoba
{
    char nazwisko[MAX_LEN];
    char* imiona;
    long long pesel;
    float pensja;
} Osoba;

Osoba* makeOsoba(char *nazwisko, char *imiona, long long pesel, float pensja)
{
    Osoba *temp = malloc(sizeof(Osoba));
    strcpy(temp->nazwisko, nazwisko);
    temp->imiona = imiona;
    temp->pesel = pesel;
    temp->pensja = pensja;
    return temp;
}

Osoba makeOsoba2(const Osoba *osoba)
{
    Osoba temp;
    strcpy(temp.nazwisko, osoba->nazwisko);
    temp.imiona = osoba->imiona;
    temp.pesel = osoba->pesel;
    temp.pensja = osoba->pensja;

    return temp;
}

float getSalary(const Person *Person)
{
    return Person->salary;
}

void show(const Person *product)
{
    printf("Surname: %s \n", product->surname);
    printf("Name: %s \n", product->imiona);
    printf("PESEL: %lld \n", product->pesel);
    printf("Salary: %f \n", product->Salary);
}

void destroy(Osoba* osoba)
{
   free(osoba);
}

int main()
{
    Osoba *o1 = makeOsoba("1", "Mieszko", 12345678, 0992);
    show(o1);
    printf("%f\n", getPensja(o1));
    Osoba o2 = makeOsoba2(o1);
    show(&o2);
    return 0;
}

















































