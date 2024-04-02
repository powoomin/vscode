#include <stdio.h>
/*
ID? Hong
Password? 1234!@#$

입력받은 ID: Hong [Password: 1234!@#$]
*/
struct login_data
{
    char id[20];
    char password[20];
};
int add_user()
{
    printf("ID? ");
    fgets()
    return 0;
}
int main(void)
{
    struct login_data *user1; // 선언
    user1 = add_user(); // 데이터 입력작업 수행
    return 0;
}