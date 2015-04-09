/*
** aff_alpha_sup.c for aff_alpha_sup.c in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM/ex_02
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:22:41 2013 todoro_v
** Last update Mon Dec 16 15:42:11 2013 todoro_v
*/

void	aff_alpha_sup(char a)
{
  int	i;

  i = 0;
  if (a >= 'a' && a <= 'z')
    {
      i = a++ - 0x61;
      while (i < 25)
	{
	  write(1, &a, 1);
	  a = a + 1;
	  i = i + 1;
	}
    }
  write(1, "\n", 1);
}
