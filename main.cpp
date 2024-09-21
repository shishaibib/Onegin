#include "HeaderData.h"

int main()    //!!!!!!!!!!!!!!!!!!!! comparatori
{             // !!!!!!!!!!!!!!!!!!!!!структуры

    onegin_parametrs onegin = {0, 0, 0};

    int size_of_file = Fsize("Onegin.txt");
    printf("size:%d\n",size_of_file);

    onegin.onegin_adress = (char **)calloc(size_of_file, sizeof(char*));
    onegin.output_text = (char *)calloc(size_of_file, sizeof(char*));
    onegin.onegin_adress[0] = &(onegin.output_text[0]);

    Read_Text_From_File(&onegin.output_text, size_of_file, &onegin.number_of_strings, onegin.onegin_adress);
    printf("number of strings =  %d \n",onegin.number_of_strings);
    printf("The text was:\n");

    for (int i = 0; i < size_of_file; i++)
        printf("%c", onegin.output_text[i]);

    Sorting_Strings(onegin.onegin_adress, onegin.number_of_strings);               /* компаратором чтоб убить копипаст*/

    Sorting_Strings_Inversive(onegin.onegin_adress, onegin.number_of_strings);

    printf("\n After sort:\n");

    for (int i = 0; i < onegin.number_of_strings; i++)
    {
        int j = 0;
        while(onegin.onegin_adress[i][j] != '\n')
        {
            printf("%c",onegin.onegin_adress[i][j]);
            j++;
        }

        printf("\n");
    }

    free(onegin.onegin_adress);
    free(onegin.output_text);

     return 0;

}





