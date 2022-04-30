#define _CRT_SECURE_NO_WARNINGS /*sacnf 오류 무시*/
#include <stdio.h>
#include <string.h>

#define ASCCIIaValue 97u

typedef struct
{
    char InputString[100];
    int OutputAlphabet[26];

}Struct1;
Struct1 *p_Data;
Struct1 s1;

void main()
{
    p_Data = &s1;
 
    printf("Please type string less than 100 strings and only small letter\n");

    scanf("%s", p_Data->InputString);

    int Arrpos;

    for (int cnt = 0; cnt < 26; cnt++)
    {
        p_Data->OutputAlphabet[cnt] = -1;
    }
    
    for (int cnt = 0; cnt < 100; cnt++)
    {
        if (p_Data->InputString[cnt] == "\0")
        {
            break;
        }
        else
        {
            Arrpos = (p_Data->InputString[cnt] - ASCCIIaValue);
           
            p_Data->OutputAlphabet[Arrpos] = cnt;
        }
    }
    printf("Result is : \n {");
    for (int cnt = 0; cnt < 26; cnt++)
    {
        printf("%d  ", p_Data->OutputAlphabet[cnt]);
    }
    printf("}");
 
}