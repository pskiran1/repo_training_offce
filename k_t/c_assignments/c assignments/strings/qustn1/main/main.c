
#include "header.h"

int main()
{
	char sizes[MAX];
	int size; /*size of string */
	char *str = NULL; /*it stores the given source string */
	char *dst = NULL; /* it stores the destination string */

	printf("enter the size of string \n");
	
	fgets(sizes, MAX, stdin);
	if (sizes == NULL) {    /* check that fgets is reads the string or not */
		printf ("fgets failed\n");
		return 0;
	}
	
		

	size = myatoi(sizes); /* convert ascii to integer */

	if (NULL == (str = (char *) malloc(sizeof(char) * size))) {
		printf("Malloc for src failed\n"); /* checking malloc is 								   								allocate storage or not */
		exit (0);
	}

	if (NULL == (dst = (char *) malloc(sizeof(char) * size))) {
		printf("Malloc for dst failed\n"); /* checking malloc is                
                                                allocate storage or not */
		exit (0);
	}

	printf("enter the source string \n");
	fgets(str, size, stdin);
	if (str == NULL) {       /* check that fgets is reads the string or not */
		printf ("fgets failed\n");
		return 0;
	}
	
	*(str + str_len(str) - 1) = '\0';
	
	mystrcpy(dst, str); /* passing arguments to mystrcpy dst and str */

	printf("the destination string is \n");
	printf("%s\n",dst);
	
	free(str); /*free the storage allocating to str and dst */
	free(dst);
	
	return 0;
}
	
	
