#include <stdio.h>

char s[] = {
	'\t',
	'0',
	'\n',
	'}',
	';',
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
	' ',
	'(',
	')',
	' ',
	'{',
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
	'\\',
	'n',
	'\\',
	'n',
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
	'\t',
	'f',
	'o',
	'r',
	' ',
	'(',
	'i',
	'n',
	't',
	' ',
	'i',
	'=',
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
	' ',
	'{',
	'\n',
	'\t',
	'\t',
	's',
	'w',
	'i',
	't',
	'c',
	'h',
	'(',
	's',
	'[',
	'i',
	']',
	')',
	' ',
	'{',
	'\n',
	'\t',
	'\t',
	'\t',
	'c',
	'a',
	's',
	'e',
	' ',
	'\'',
	'\\',
	't',
	'\'',
	':',
	'\n',
	'\t',
	'\t',
	'\t',
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
	'\'',
	'\\',
	'\\',
	't',
	'\'',
	',',
	'\\',
	'n',
	'"',
	')',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'\t',
	'b',
	'r',
	'e',
	'a',
	'k',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'c',
	'a',
	's',
	'e',
	' ',
	'\'',
	'\\',
	'n',
	'\'',
	':',
	'\n',
	'\t',
	'\t',
	'\t',
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
	'\'',
	'\\',
	'\\',
	'n',
	'\'',
	',',
	'\\',
	'n',
	'"',
	')',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'\t',
	'b',
	'r',
	'e',
	'a',
	'k',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'c',
	'a',
	's',
	'e',
	' ',
	'\'',
	'\\',
	'\\',
	'\'',
	':',
	'\n',
	'\t',
	'\t',
	'\t',
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
	'\'',
	'\\',
	'\\',
	'\\',
	'\\',
	'\'',
	',',
	'\\',
	'n',
	'"',
	')',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'\t',
	'b',
	'r',
	'e',
	'a',
	'k',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'c',
	'a',
	's',
	'e',
	' ',
	'\'',
	'\\',
	'\'',
	'\'',
	':',
	'\n',
	'\t',
	'\t',
	'\t',
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
	'\'',
	'\\',
	'\\',
	'\\',
	'\'',
	'\'',
	',',
	'\\',
	'n',
	'"',
	')',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'\t',
	'b',
	'r',
	'e',
	'a',
	'k',
	';',
	'\n',
	'\t',
	'\t',
	'\t',
	'd',
	'e',
	'f',
	'a',
	'u',
	'l',
	't',
	':',
	'\n',
	'\t',
	'\t',
	'\t',
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
	'\'',
	'%',
	'c',
	'\'',
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
	'\t',
	'\t',
	'}',
	'\n',
	'\t',
	'}',
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
	'%',
	's',
	'"',
	',',
	' ',
	's',
	')',
	';',
	'\n',
	'}',
	'\n',
	'\n',
	0
};

int main () {
	printf("#include <stdio.h>\n\nchar s[] = {\n");
	for (int i=0; s[i]; i++) {
		switch(s[i]) {
			case '\t':
				printf("\t'\\t',\n");
				break;
			case '\n':
				printf("\t'\\n',\n");
				break;
			case '\\':
				printf("\t'\\\\',\n");
				break;
			case '\'':
				printf("\t'\\\'',\n");
				break;
			default:
				printf("\t'%c',\n", s[i]);
		}
	}
	printf("%s", s);
}

