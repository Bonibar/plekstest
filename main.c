#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
  //Bonjour, C'est Alaric qui m'a dit de faire ça.
  //Voici la pull request
  my_putchar("Bonjour le FORWARD");
  return (1);
}

