#include<stdio.h>

main() {
	
    int i, length, usrlength, upr = 0, lwr = 0, num = 0, spe = 0, loglen, logusrlen;
    char usr[10], pwd[10], regusr[10], regpwd[10];

    printf("Register Your Username & Password");

    printf("\nEnter Your Username: ");
    gets(regusr);
    printf("Enter Your Password: ");
    gets(regpwd);

    usrlength = strlen(regusr);
    length = strlen(regpwd);

    printf("%d", usrlength);
    printf("\n%d", length);

    for (i = 0; i < length; i++) {
        if (regpwd[i] >= 65 && regpwd[i] <= 90)
            upr++;
        if (regpwd[i] >= 97 && regpwd[i] <= 122)
            lwr++;
        if (regpwd[i] >= 48 && regpwd[i] <= 57)
            num++;
        if (regpwd[i] == '@' || regpwd[i] == '#' || regpwd[i] == '$' || regpwd[i] == '&')
            spe++;
    }

    if (upr > 0 && lwr > 0 && spe > 0 && num > 0) {
        printf("\nRegistration Successful....");
    } else {
        printf("\nPlease Enter Valid Username & Password.");
    }

    printf("\nEnter Your Username & Password For Login\n");

    printf("Enter Your Username: ");
    gets(usr);
    printf("Enter Your Password: ");
    gets(pwd);

    logusrlen = strlen(usr);
    loglen = strlen(pwd);

    printf("%d", logusrlen);
    printf("\n%d", loglen);

    for (i = 0; i < logusrlen && loglen; i++) {
        if (pwd[i] >= 65 && pwd[i] <= 90)
            upr++;
        if (pwd[i] >= 97 && pwd[i] <= 122)
            lwr++;
        if (pwd[i] >= 48 && pwd[i] <= 57)
            num++;
        if (pwd[i] == '@' || pwd[i] == '#' || pwd[i] == '$' || pwd[i] == '&')
            spe++;
    }

    if (strcmp(regusr, usr) == 0 && strcmp(regpwd, pwd) == 0) {
        printf("\nLogin Successful....");
    } else {
        printf("\nLogin Failed. Invalid Credentials.");
    }

}

