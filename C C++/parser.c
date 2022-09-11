#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; //Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    //Remove the trailing spaces from the beginning
    while (string[0] == ' ')
    {
        //Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {

            string[i] = string[i + 1];
        }
    }
    //Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "    <h1>       this is a heading    </h1>     ";
    puts(string);
    parser(string);
    printf("The parsed string is ~~%s~~", string);

    return 0;
}

/*#include <stdio.h>
#include <string.h>

void parser(char str[])
{

    for (int a = 0; a < strlen(str); a++)
    {
        if (str[a] == '>')
        {
            for (int b = a; b < strlen(str); b++)
            {
                if (str[b] == '<')
                {
                    for (int i = a; i < b; i++)
                    {
                        printf("%c", str[i]);
                    }
                }
            }
        }
    }
}

int main()
{
    char str[] = "<h1>Hello my name is Nirbhay</h1>";
    parser(str);
    //printf("\n.%c.", str[4]);
    //puts(str);

    return 0;
}
*/
