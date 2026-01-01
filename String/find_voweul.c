#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a String: ");
    gets(str);

    i=vowel=consonant=digit=word=other=0;
    
    while((ch=str[i]) != '\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')          //checking vowel
           {
                vowel++;
           }

           else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))   //checking consonant
    {
        consonant++;
    }
    else if(ch>='0' && ch<='9')          //checking digit
    {
        digit++;
    }
    else if(ch==' ')                     //checking word
    {
        word++;
    }
    else                                //other character
    {
        other++;

    }

    i++;
    }
    word++;   //for last word

    printf("Vowel: %d\n",vowel);
    printf("Consonant: %d\n",consonant);
    printf("Digit: %d\n",digit);
    printf("Word: %d\n",word);
    printf("Other character: %d\n",other);
    return 0;
    
     
    

    


}