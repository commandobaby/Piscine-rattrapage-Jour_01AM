/*
** even_next.c for evennett in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM/ex_05
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:49:04 2013 todoro_v
** Last update Wed Dec 18 09:52:20 2013 todoro_v
*/

int     is_even(int number)
{
  if (number < 0)
    number = -number;
  if (number % 2 == 1)
    return (0);
  else
    return (1);
}

int	even_next(int number)
{
  while (is_even(number) == 0)
    {
      number++;
    }
  return (number);
}
