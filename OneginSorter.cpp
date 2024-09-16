#include "HeaderData.h"

int Sorting_Strings_Inversive(char **onegin_adress)
{

    for (int s = NUMBEROFSTRINGS; s > 0; s--)
    {
        for (int i = NUMBEROFSTRINGS; i > 0; i--)
        {
            int j = LENGOFSTRINGS;
            while (j < LENGOFSTRINGS && onegin_adress[i][j] != 0)
            {
                if  (
                    tolower(onegin_adress[i - 1][j]) -
                    tolower(onegin_adress[i][j]) > 0
                    )
                {
                    Swapping_Strings(onegin_adress, i - 1, i);                         /*привычка в кодстайл*/
                    break;
                }

                if (
                   tolower(onegin_adress[i - 1][j]) -
                   tolower(onegin_adress[i][j]) == 0
                   )
                {
                    j -= 1;
                }

                break;

            }
        }
    }

    return 0;
}

int Sorting_Strings(char **onegin_adress)
{

    for (int s = 0; s < NUMBEROFSTRINGS; s++)
    {
        for (int i = 0; i < NUMBEROFSTRINGS -1; i++)
        {
            int j = 0;
            while (j < LENGOFSTRINGS && onegin_adress[i][j] != 0)
            {
                if  (
                    tolower(onegin_adress[i][j]) -
                    tolower(onegin_adress[i + 1][j]) > 0
                    )
                {
                    Swapping_Strings(onegin_adress, i, i + 1);                         /*привычка в кодстайл*/
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


int Swapping_Strings(char **onegin_adress, int adress_of_string_1, int adress_of_string_2) /**/
{
    char *Temp = onegin_adress[adress_of_string_1];

    onegin_adress[adress_of_string_1] = onegin_adress[adress_of_string_2];
    onegin_adress[adress_of_string_2] = Temp;

    return 0;
         // папки на инглише
         // нейминг
         // манипул€ци€-объект(функции)
}
