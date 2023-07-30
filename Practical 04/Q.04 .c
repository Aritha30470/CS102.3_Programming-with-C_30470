#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

        printf(" Enter a letter: ");
        scanf(" %c", &letter);

        switch (letter)

         {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
       	 	case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("\n  '%c' is a vowel.\n", letter);
            break;
        	default:
            	printf("\n  '%c' is not a vowel.\n", letter);
            break;
        }

    return 0;
}
