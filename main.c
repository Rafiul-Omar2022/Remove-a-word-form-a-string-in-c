#include <stdio.h>
#include <string.h>

int main(){

    char str[100], strgw[100];
    scanf("%[^\n]s", str);

    scanf("%s", strgw);

    int cnt, st, end;

    for( int i=0; i<strlen(str); i++ ){
        char s[100];
        if( str[i] != ' ' ){
            cnt = 0;
            for( int j=0; j<strlen(str); j++ ) {
                    if( str[i] != ' ' ){
                        s[j] = str[i];
                        end = i;
                        cnt++;
                        i++;
                    }
            }

            s[cnt] = '\0';
            if( !strcmp( s, strgw ) ){
                st = end - cnt;
                break;
            }
        }
    }

    for( int i=0; i<strlen(str); i++ ){

        if( i < st || i > end  ) printf("%c", str[i]);

    }


    return 0;
}
