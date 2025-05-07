#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double rmb = 1;
    while(true)
    {
        char c = get_char("Here is %f, Double it and give it to the next person? ", rmb);
        if(c == 'y')
        {
           rmb = rmb * 2;
        }
        else
        {
            break;
        }
    }
    printf("Here's ￥%f\n", rmb);
}
