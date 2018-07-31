#include <stdio.h>
main()
{
  typedef *char[10] strings;
    strings a={"you a pig","what the hell you are"};
    printf("%s",strings[1]);
}
