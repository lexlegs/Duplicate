#include "DupeyDupe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int i;
    int counter = 1;
    int dupeIndex = 0;
    int dupeFlag = 0;
    char **array;

    while (counter < argc)
    {
        for (i = 1; i < argc; ++i)
        {
            if (counter == i)
                continue;

            if (strcmp(argv[counter], argv[i]) == 0)
            {
                if ((counter - 1) == i)
                {
                    if (strcmp(argv[counter], "dupe") == 0)
                    {
                        dupeFlag = 1;
                    }
                }
                else
                    dupeIndex = counter;
            }
        }
        ++counter;
    }

    if (dupeIndex >= 1)
    {
        printf("%s\n", argv[dupeIndex]);

        if (dupeFlag == 1)
            printf("dupe dupe!\n");
    }

    else
    {
        printf("no dupey dupe :(\n");
    }

    return 0;
}
