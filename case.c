//No toupper() or any other C function.
#include<stdio.h>
int main ()
{
    char _lc;
    char _uc;
    printf("Enter a lowercase character :\n");
    scanf("%c", &_lc);
    //TODO: convert lowercase character to uppercase. You are not allowed to use an if statement or switch statement. For instance, if _lc stores char 'a', then char 'A' should be stored into _uc.
    int _ascii;
    _ascii = _lc;
    _uc = _ascii-32;
    printf("Letter in capital  : %c\n", _uc);
    return 0;


}
//Assignment by Veerabhadhrudu Chapalaka