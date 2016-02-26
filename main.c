#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
  //Bonjour, C'est Alaric qui m'a dit de faire ça.
  //Héhé, j'ai fait une pull request :)
  //Pull Request 2
  //Pull Request 3
  //Atos c'est bien :)
  //Wordline c'est encore mieux :)
  my_putchar("Bonjour le FORWARD");
  return (1);
}

