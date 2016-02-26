#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
  //Bonjour, C'est Alaric qui m'a dit de faire ça.
  //Je suis un chinois
  //Je passe ma vie à faire des poule request x)
  //Au revoir :)
  my_putchar("Bonjour le FORWARD");
  return (-42);
}

