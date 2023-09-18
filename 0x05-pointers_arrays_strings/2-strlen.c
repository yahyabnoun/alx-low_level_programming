/**
* _strlen - lenght of s
* @s: array
* Return: int.
*/
int _strlen(char *s)
{
int len = 0;

while(*s != '\0')
{
s++;
len++;
}
return (len);
}
