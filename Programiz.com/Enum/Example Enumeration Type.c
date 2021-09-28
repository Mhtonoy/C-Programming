#include <stdio.h>
enum week {sunday,monday,tuesday,wednesday,thursday,friday,satarday};
int main()
{
    enum week today;
    today = thursday;
    printf("%d\n", today);
    return 0;
}
