/*
** nb_even.c for evn in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:50:13 2013 todoro_v
** Last update Wed Dec 18 10:11:45 2013 todoro_v
*/

#include <stdlib.h>

int	nb_even(int *numbers)
{
  int	b;
  int	a;

  a = 0;
  b = 0;
  if (numbers == NULL)
    return (0);
  while (numbers[a] != -1)
    {
      if (numbers[a] % 2 == 0)
	b = b + 1;
      a = a + 1;
    }
  return (b);
}
