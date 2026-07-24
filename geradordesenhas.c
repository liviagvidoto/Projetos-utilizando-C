#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGH 20
char allowed_characters[] = "abcdefghijklmnopqrstuvwyxzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$&*£¢";

int main()
{
    srand(time(NULL)); //retorna o tempo do kernel
    char password[PASSWORD_LENGH+1];
    for (int i=0; i<PASSWORD_LENGH; i++)
    {
        int random_number = rand() % (sizeof(allowed_characters)-1);
        password[i] = allowed_characters[random_number];
    }
    password[PASSWORD_LENGH] = 0;
    printf("Sua senha é: %s\n", password);
}