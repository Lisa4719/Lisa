#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    int end;
    int years_passed;


        do
        {
          start = get_int ("Enter starting population size: \n");
        }
        while (start < 9);

        do
        {
            end = get_int ("Enter ending population size: \n");
        }
        while (end  <= start);




    for(years_passed = 0; years_passed < start / 3 - end / 4; years_passed++)

    {
        int calculation = start / 3 - end / 4;
    }


    printf("Years : %i", years_passed);