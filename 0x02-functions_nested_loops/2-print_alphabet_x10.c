#include <stdio.h>

int main(void)
{
	    print_alphabet_x10();
	        return (0);
}

void print_alphabet_x10 (void)
{
	    char c;
	        int i = 0;

		    while (i <= 9) {
			            for (c = 'a'; c <= 'z'; c++) {
					                putchar(c);
							        }

				            putchar('\n');

					            i++;
						        }
}
