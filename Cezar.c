#include<stdio.h>
#include <conio.h>

int i, key;
char text[100], character, choice;

int main()
{
    loop:
    printf("What would you like to do?\n");
    printf("-Encrypt (press 1)\n");
    printf("-Decrypt (press 2)\n\n");
    scanf(" %c", &choice);

    if(choice=='1')
    {
        printf("Text: ");
        scanf(" %s", text);
        printf("Key: ");
        scanf(" %d", &key);

        for(i = 0; text[i] != '\0'; ++i)
        {
            character = text[i];

            if(character >= 'a' && character <= 'z')
            {
                character = character + key;

                if(character > 'z')
                {
                    character -= 26;
                }
                else if(character < 'a')
                {
                    character += 26;
                }

                text[i] = character;
            }
            else if(character >= 'A' && character <= 'Z')
            {
                character = character + key;

                if(character > 'Z')
                {
                    character -= 26;
                }
                else if(character < 'A')
                {
                    character += 26;
                }

                text[i] = character;
            }

        }

        printf("Encrypted text: %s\n", text);
    }
    else if(choice == '2')
    {
        printf("Text: ");
        scanf(" %s", text);
        printf("Key: ");
        scanf(" %d", &key);;

        for(i = 0; text[i] != '\0'; ++i)
        {
            character = text[i];

            if(character >= 'a' && character <= 'z')
            {
                character = character - key;

                if(character < 'a')
                {
                    character += 26;
                }
                else if(character > 'z')
                {
                    character -= 26;
                }

                text[i] = character;
            }
            else if(character >= 'A' && character <= 'Z')
            {
                character = character - key;

                if(character < 'A')
                {
                    character += 26;
                }
                else if(character > 'Z')
                {
                    character -= 26;
                }

                text[i] = character;
            }

        }

        printf("Decrypted text: %s\n", text);
    }

    printf("Press enter to try again...\n\n");
    getch();
    goto loop;
}
