char s[] = {
	'\t',
	'0',
	'\n',
	'}',
	';',
	'\n',
	'\n',
	'/',
	'*',
	'\n',
	' ',
	'*',
	' ',
	'T',
	'h',
	'e',
	' ',
	's',
	't',
	'r',
	'i',
	'n',
	'g',
	' ',
	's',
	' ',
	'i',
	's',
	' ',
	'a',
	'\n',
	' ',
	'*',
	' ',
	'r',
	'e',
	'p',
	'r',
	'e',
	's',
	'e',
	'n',
	't',
	'a',
	't',
	'i',
	'o',
	'n',
	' ',
	'o',
	'f',
	' ',
	't',
	'h',
	'e',
	' ',
	'b',
	'o',
	'd',
	'y',
	'\n',
	' ',
	'*',
	' ',
	'o',
	'f',
	' ',
	't',
	'h',
	'i',
	's',
	' ',
	'p',
	'r',
	'o',
	'g',
	'r',
	'a',
	'm',
	' ',
	'f',
	'r',
	'o',
	'm',
	' ',
	'\'',
	'0',
	'\'',
	'\n',
	' ',
	'*',
	' ',
	't',
	'o',
	' ',
	't',
	'h',
	'e',
	' ',
	'e',
	'n',
	'd',
	'.',
	'\n',
	' ',
	'*',
	'/',
	'\n',
	'\n',
	'#',
	'i',
	'n',
	'c',
	'l',
	'u',
	'd',
	'e',
	' ',
	'<',
	's',
	't',
	'd',
	'i',
	'o',
	'.',
	'h',
	'>',
	'\n',
	'\n',
	'i',
	'n',
	't',
	' ',
	'm',
	'a',
	'i',
	'n',
	'(',
	')',
	'\n',
	'{',
	'\n',
	' ',
	' ',
	' ',
	' ',
	'i',
	'n',
	't',
	' ',
	'i',
	';',
	'\n',
	' ',
	' ',
	' ',
	' ',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'c',
	'h',
	'a',
	'r',
	' ',
	's',
	'[',
	']',
	' ',
	'=',
	' ',
	'{',
	'\\',
	'n',
	'"',
	')',
	';',
	'\n',
	' ',
	' ',
	' ',
	' ',
	'f',
	'o',
	'r',
	' ',
	'(',
	'i',
	' ',
	'=',
	' ',
	'0',
	';',
	' ',
	's',
	'[',
	'i',
	']',
	';',
	' ',
	'i',
	'+',
	'+',
	')',
	'\n',
	'\t',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'\\',
	't',
	'%',
	'd',
	',',
	'\\',
	'n',
	'"',
	',',
	' ',
	's',
	'[',
	'i',
	']',
	')',
	';',
	'\n',
	' ',
	' ',
	' ',
	' ',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'%',
	's',
	'"',
	',',
	' ',
	's',
	')',
	';',
	'\n',
	' ',
	' ',
	' ',
	' ',
	'r',
	'e',
	't',
	'u',
	'r',
	'n',
	'(',
	'0',
	')',
	';',
	'\n',
	'}',
	'\n',
	0
};

#include <stdio.h>

int main()
{
    int i;
    printf("char s[] = {\n");
    for (i = 0; s[i]; i++)
	printf("\t%d,\n", s[i]);
    printf("%s", s);
    return(0);
}
