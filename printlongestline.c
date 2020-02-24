#include <stdio.h>

#define MAXLINE 1000 /*Maximum input line size*/

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/*prints longest line in the input*/
int main()
{
        int len;
        int max;
        char longest[MAXLINE];
        char line[MAXLINE];

        while((len = getline2(line, MAXLINE)) > 0)
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }
        if (max > 0){
                printf("%d\n", max);
                printf("%s\n", longest);
        }

        return 0;
}

int getline2(char s[], int len)
{
        int i, c;
        /*Fill in the line in s*/
        for(i=0; ((c = getchar()) != EOF) && c != '\n'; ++i){
                if (i < len - 1)
                        s[i] = c;
        }
                

        /* Count the newline and add to s */
        if(c == '\n'){
                s[i] = c;
                ++i;
        }
        /*End the line in s with \0 */
        s[i] = '\0';
        return i;
}


void copy(char to[], char from[])
{
        int i;
        for(i=0; (to[i] = from[i]) != '\0'; ++i)
                ;
}
