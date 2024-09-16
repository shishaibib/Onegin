#include "HeaderData.h"

int File_Reader(char Output_Text[NUMBEROFSTRINGS][LENGOFSTRINGS])
{

    FILE *onegin_text = fopen("Onegin.txt", "r"/*?*/);

    if(onegin_text != NULL)
    {

        char Input_Text[NUMBEROFSTRINGS][LENGOFSTRINGS] = {};

        for(int i = 0; i < NUMBEROFSTRINGS; i++)
        {
            fgets(Input_Text[i], LENGOFSTRINGS, onegin_text);

            int j = 0;

            for(j = 0; j < LENGOFSTRINGS && Input_Text[i][j] != '\n'; j++)
            {
                Output_Text[i][j] = Input_Text[i][j];
            }
            Output_Text[i][j] = '\n';
        }

    }

    fclose(onegin_text);

    return 0;

}

int Fill_Adress(char **onegin_adress, char Output_Text[NUMBEROFSTRINGS][LENGOFSTRINGS])
{

    for (int i = 0; i < NUMBEROFSTRINGS; i++)
    {
        onegin_adress[i] = Output_Text[i];
    }

    return 0;
}
