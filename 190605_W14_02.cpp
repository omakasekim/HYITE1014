#include <stdio.h>
#include <string.h>


char mystrlen(char *string)
{
for (int length = 0; *string != '\0', string++)
{
length++;
}
return(length);
}


char mystrcmp(char string1[], char string2[] )
{
    for (int i = 0; ; i++)
    {
        if (string1[i] != string2[i])
        {
            return string1[i] < string2[i] ? -1 : 1;
        //1?2:3 means if 1 is true return 2, if not, print 3.
		}

        if (string1[i] == '\0')
        {
            return 0;
        }
    }
}

char* mystrcpy(char * destination, constant char* source)
{//use printf(%d\n", mystrcpt(destination, source);//
	//returns if no memory is allocated.
	if (destination == NULL)
		return NULL;
	//takes pointer to beginning of "destination"
	int *ptcpy = destination;
	//copies string pointed by source into array, pointed by destination.
	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}
	//terminating null character is included
	*destination = '\0';
	
	return ptcpy;

}

char* mystrcat(char* destination, const char* source)
{	
	//makes pointer point to end of "destination" string.
	char *ptcat = destination + mystrlen(destination);
	//appends characters of "source" to "destination" string.
	while (*source != '\0')
		*ptcat++ = *source++;
	//null terminate destination string
	*ptcat = '\0';
		
	return destination;
	
	/* char* str = (char*)calloc(100,1);
	mystrcat(str, "text "); etc; */
}




