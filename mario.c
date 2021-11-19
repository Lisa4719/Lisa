#include <cs50.h>
#include <studio.h>

int main(void)
{
    int h, , dot, hash;

do
{
    h = get_int ("Height: ")
}
while (h<1 && h>8);

for (dot = 0; dot< h-1; dot++)
{
    printf(".")
}

for (hash = 0; hash<1; hash++)
{
    printf("#");
}
}