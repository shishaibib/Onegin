#include "HeaderData.h"

int Sorting_Strings_Inversive(char **onegin_adress, int number_of_strings)
{

    for (int s = number_of_strings + 1; s > 0; s--)
    {
        for (int i = number_of_strings + 1; i > 0; i--)
        {
            int j = 0;
            while (j > onegin_adress[i - 1] - onegin_adress[i - 2] && onegin_adress[i - 1][j] != 0)
            {
                if  (
                    tolower(onegin_adress[i][-j - 1]) -
                    tolower(onegin_adress[i - 1][-j - 1]) > 0
                    )
                {
                    Swapping_Strings(onegin_adress, i - 1, i - 2);
                    break;
                }

                if  (
                    tolower(onegin_adress[i][-j - 1]) -
                    tolower(onegin_adress[i - 1][-j - 1]) == 0
                    )
                {
                    j += 1;
                }

                break;

            }
        }
    }

    return 0;
}

int Sorting_Strings(char **onegin_adress, int number_of_strings)
{

    for (int s = 0; s < number_of_strings; s++)
    {
        for (int i = 0; i < number_of_strings - 1; i++)
        {
            int j = 0;
            while (j < (onegin_adress[i + 1] - onegin_adress[i]) && onegin_adress[i][j] != 0)
            {
                if  (
                    tolower(onegin_adress[i][j]) -
                    tolower(onegin_adress[i + 1][j]) > 0
                    )
                {
                    Swapping_Strings(onegin_adress, i, i + 1);
                    break;
                }

                if (
                   tolower(onegin_adress[i][j]) -
                   tolower(onegin_adress[i + 1][j]) == 0
                   )
                {
                    j += 1;
                }

                break;

            }
        }
    }

    return 0;
}


int Swapping_Strings(char **onegin_adress, int adress_of_string_1, int adress_of_string_2)
{
    char *Temp = onegin_adress[adress_of_string_1];

    onegin_adress[adress_of_string_1] = onegin_adress[adress_of_string_2];
    onegin_adress[adress_of_string_2] = Temp;

    return 0;
}
