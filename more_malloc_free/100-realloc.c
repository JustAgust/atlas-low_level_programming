#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{ /* declaring vars */
unsigned int index;
char *newpoint;
char *optr = ptr;
/*if newsize is zero free pointer return null*/
if(new_size == 0)
{
free(ptr);
return(NULL);
}
/*if equal do nothing return */
if (new_size == old_size)
{
return (ptr);
}
/* allocate new mem */
newpoint = malloc(new_size);
/*if ptr is null*/
if(ptr == NULL)
{
    return (newpoint);
}

/*copy old to new*/
else
{

for (index = 0; index < old_size; index++)
newpoint[index] = optr[index];

/* free old */
    free (ptr);
    return (newpoint);
    }
}
