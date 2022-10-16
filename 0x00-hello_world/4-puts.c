#include<stdio.h>
#include <string.h>

/* Entry point main and so on
 *
 */
int main(void)
{
	int *p;
	char name = "Programming is like building a multilingual puzzle\n";

       	p = &name;	
	puts(*p);    
	return (0);    
}  
