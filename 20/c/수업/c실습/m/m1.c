#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    char address[80];
    int age;
};

int main()
{
    struct person a[3];

    int i = 0;
    char c[3][5] = { "첫", "두", "세" };

    for (i = 0; i < 3; i++)
    {
        printf("%s번째 사람 인적사항을 입력하시오.\n", c[i]);
        printf("이름은? ");
        fgets(a[i].name, 20, stdin);
        printf("주소는? ");
        fgets(a[i].address, 20, stdin);
        printf("나이는? ");
        scanf("%d", &a[0].age);
        getchar();

        a[i].name[strlen(a[i].name) - 1] = '\0';
        a[i].address[strlen(a[i].address) - 1] = '\0';
    }

    printf("첫번째 사람 : %s/ %s/ %d\n", a[0].name, a[0].address, a[0].age);
    printf("두번째 사람 : %s/ %s/ %d\n", a[1].name, a[1].address, a[1].age);
    printf("세번째 사람 : %s/ %s/ %d\n", a[2].name, a[2].address, a[2].age);
    return 0;
}