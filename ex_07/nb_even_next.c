/*
** nb_even_next.c for even in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM/ex_07
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:52:32 2013 todoro_v
** Last update Wed Dec 18 11:00:40 2013 todoro_v
*/

int     nb_even(int *numbers)
{
  int   b;
  int   a;

  a = 0;
  b = 0;
  if (numbers == NULL)
    return (0);
  while (numbers[a] != -1)
    {
      if (numnbers[a] % 2 == 0)
	b = b + 1;
      if (numbers[a] % 2 == 1)
        numbers[a] = numbers[a] + 1;
      a = a + 1;
    }
  return (b);
}
