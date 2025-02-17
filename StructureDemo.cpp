#include <stdio.h>
struct Studentinfo
{
    int id;
    char name[10];
    float fees;
};
struct Studentinfo S;

void input()
{

    printf("Enter the Student Id:=");
    scanf("%d", &S.id);
    printf("Enter the Student name:=");
    scanf("%s", &S.name);
    printf("Enter the Student fees:=");
    scanf("%f", &S.fees);
}

void display()
{

    printf("\nId:=%d", S.id);
    printf("\nName:=%s", S.name);
    printf("\nFees:=%f", S.fees);
}

int main()
{

    input();
    display();

    return 0;
}