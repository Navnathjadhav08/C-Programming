#include<stdio.h>

struct Student
{
  int RID;
  int Age;
  double Marks;
  char Division;
  int Salary;
};


int main()
{
    struct Student obj97; 
    struct Student obj260;
    struct Student *ptr = NULL;

    obj97.RID = 97;
    obj97.Age = 25;
    obj97.Marks = 87.99;
    obj97.Division = 'A';
    obj97.Salary = 90000;

    obj260.RID = 260;
    obj260.Age = 26;
    obj260.Marks = 88.990978;
    obj260.Division = 'C';
    obj260.Salary = 98000;

    ptr = &obj97;

    printf("RID of Datta : %d\n",ptr->RID); // 97
    printf("Age of Datta : %d\n",ptr->Age); // 25
    printf("Salary of Datta : %d\n",ptr->Salary); // 90000

    ptr = &obj260;
    printf("RID of omkar : %d\n",ptr->RID); // 260
    printf("Age of omkar : %d\n",ptr->Age); // 26
    printf("Salary of omkar : %d\n",ptr->Salary); // 98000

    return 0;
}
