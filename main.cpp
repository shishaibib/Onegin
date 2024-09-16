#include "HeaderData.h"

int main()
{

    char Output_Text[NUMBEROFSTRINGS][LENGOFSTRINGS] = {};
    char **onegin_adress = 0;
    onegin_adress = (char **)calloc(NUMBEROFSTRINGS + 1, sizeof(char*));

    File_Reader(Output_Text);

    printf("The text was:\n");

    for (int i = 0; i < NUMBEROFSTRINGS; i++)
        printf("%s", Output_Text[i]);

    onegin_adress[0] = &(Output_Text[0][0]);

    Fill_Adress(onegin_adress, Output_Text);

    Sorting_Strings(onegin_adress);

    Sorting_Strings_Inversive(onegin_adress);

    printf("\n");
    printf("After sort:\n");

    for (char i = 0; i < NUMBEROFSTRINGS; i++)
        printf("%s",onegin_adress[i]);

    return 0;

}





