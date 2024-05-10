#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vowel=0,consonant=0,digit=0,word=0,others=0,i=0;
    char str[100],ch;

    printf("Enter your string: ");
    gets(str);

    while((ch=str[i])!='\0')
    {

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowel++;
        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else
        {
            others++;
        }
        i++;
    }
    word++;

    printf("Vowel= %d\n",vowel);
    printf("Consonant= %d\n",consonant);
    printf("Digit= %d\n",digit);
    printf("Word= %d\n",word);
    printf("Others= %d\n",others);


    return 0;
}
