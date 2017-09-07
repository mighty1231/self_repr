#include <stdio.h>

char s[] = {
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

