/* Generated by re2c 0.13.5 on Tue Oct  4 10:30:42 2011 */
#line 1 "a.l"
#include <stdio.h>

char *scan(char *p){
#define YYCTYPE char
#define YYCURSOR p
#define YYLIMIT p
#define YYMARKER q
#define YYFILL(n)
	
#line 13 "a.c"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy2;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy6;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy4;
	default:	goto yy8;
	}
yy2:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy15;
yy3:
#line 10 "a.l"
	{return "number";}
#line 91 "a.c"
yy4:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy13;
yy5:
#line 11 "a.l"
	{return "lower";}
#line 99 "a.c"
yy6:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy11;
yy7:
#line 12 "a.l"
	{return "upper";}
#line 107 "a.c"
yy8:
	++YYCURSOR;
#line 13 "a.l"
	{return "unkown";}
#line 112 "a.c"
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy11:
	switch (yych) {
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy10;
	default:	goto yy7;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy13:
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy12;
	default:	goto yy5;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy15:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy14;
	default:	goto yy3;
	}
}
#line 14 "a.l"

}

int main(int argc, char* argv[])
{
	printf("%s\n", scan(argv[1]));

	return 0;
}
