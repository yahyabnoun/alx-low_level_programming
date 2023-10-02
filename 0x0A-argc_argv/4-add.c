#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int i = 1;
int sum=0;
if (argc == 1)
{
    printf("%d\n", 0);    
}
else if (argc > 1)
{
    for (;i < argc;i++)
        {
          if (atoi(argv[i]))
            {        
                sum+=atoi(argv[i]);   
            }  
            else
            {
                printf("%s\n", "Error");
                return (0);
            }
            
        }
    printf("%d\n", sum);
}

return (0);
}
