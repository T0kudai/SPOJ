#include<bits/stdc++.h>

char str[1000005];

int main()
{
    int t,i,j;
    scanf("%i",&t);
    while(t--) {
        scanf("%s",str);
        int length = strlen(str);
        j = length;
        i = -1;
        while(++i <= --j) {
            if(str[i] != str[j]) {
                break;
            }
        }
        if(j < i) {
            /*   Number is palindrome   */

            if(length & 1) {
                /* odd length  */

                if(str[length/2] < '9'){
                    /* check the middle one not 9 */

                    str[length/2]++;

                    printf("%s\n",str);
                }

                else {
                    str[length/2] = '0';

                    i = length/2 - 1;
                    j = length/2 + 1;

                    while(i >= 0) {

                        if(str[i] < '9') {
                            str[i]++;
                            str[j]++;
                            break;
                        }

                        else {
                            str[i] = str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        printf("1");

                        i = length;
                        while(--i > 0) {
                            printf("0");
                        }

                        printf("1\n");
                    }

                    else {

                        printf("%s\n",str);
                    }
                }
            }

            else {
                /*  even length  */

                    i = length/2 - 1;
                    j = length/2;

                    while(i >= 0) {

                        if(str[i] < '9') {
                            str[i]++;
                            str[j]++;
                            break;
                        }

                        else {
                            str[i] = str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        printf("1");

                        i = length;
                        while(--i > 0) {
                            printf("0");
                        }

                        printf("1\n");
                    }

                    else {

                        printf("%s\n",str);
                    }
            }
        }

        else {
            if(length & 1) {
                i = length/2 - 1;
                j = length/2 + 1;
            }

            else {
                i =length/2 - 1;
                j = length/2;
            }

            int flag;

            while(i >= 0) {

                if(str[i] - str[j] > 0) {
                    flag = 1;
                    break;
                }

                else if( str[i] - str[j] < 0 ) {
                    flag = 2;
                    break;
                }

                i--;
                j++;
            }

            if(length & 1) {
                i = length/2 - 1;
                j = length/2 + 1;
            }

            else {
                i = length/2 - 1;
                j = length/2;
            }

            if(flag == 1) {    /*  line 1*/
                while(i >= 0) {
                    str[j] = str[i];

                    i--;
                    j++;
                }
            }

            else if(flag == 2 && length&1 && str[length/2] < '9'){    /* line 2*/
                str[length/2]++;

                i = length/2 - 1;
                j = length/2 + 1;

                while(i >= 0) {
                   str[j] = str[i];
                   i--;
                   j++;
                }
            }

            else {                          /* line 3   */

                if( length & 1) {
                    str[length/2] = '0';
                }

                while(i >= 0) {
                    if(str[i] < '9') {
                        str[i]++;
                        str[j] = str[i];
                        break;
                    }

                    else {
                        str[i] = str[j] = '0';
                    }
                    i--;
                    j++;
                }

                while(i >= 0) {
                    str[j] = str[i];

                    i--;
                    j++;
                }
            }

            printf("%s\n",str);
        }
    }

    return 0;
}