/*
** aff_is_supp.c for aff_is_sup.c in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM/ex_03
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:44:04 2013 todoro_v
** Last update Mon Dec 16 15:44:46 2013 todoro_v
*/

void	aff_if_sup(char *str)
{
  int	i;

  i = 1;
  write(1, &str[0], 1);
  while (str[i] != '\0')
    {
      if (str[i] >= str[i - 1])
	write(1, &str[i], 1);
      i++;
    }
}
