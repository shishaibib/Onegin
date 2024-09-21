#include "HeaderData.h"

int Read_Text_From_File(char** output_text, int size_of_file, int* number_of_strings, char **onegin_adress)
{
    char temp_symbol = 0;
    FILE *onegin_text = fopen("Onegin.txt", "r");

    int amount_of_symbol_in_last_string = 0;

    if(onegin_text != NULL)
    {

        for(int i = 0; i < (size_of_file - *number_of_strings) && temp_symbol != EOF; i++)
        {
            amount_of_symbol_in_last_string ++;

            temp_symbol = getc(onegin_text);    //fread (записать в м у) считать строку
            (*output_text)[i] = temp_symbol;

            if(temp_symbol == '\n')
            {

                *number_of_strings += 1;
                onegin_adress[*number_of_strings] = onegin_adress[*number_of_strings - 1] + amount_of_symbol_in_last_string;

                printf("Length_Of_String_%d = %d\n", *number_of_strings, amount_of_symbol_in_last_string);
                amount_of_symbol_in_last_string = 0;

            }

        }

    }

    fclose(onegin_text);

    return 0;

}

off_t Fsize(const char *filename)
{
    struct stat st;
    if (stat(filename, &st) == 0)
        return st.st_size;
    return -1;
}
