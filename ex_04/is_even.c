/*
** is_even.c for is_even.c in /home/todoro_v/rendu/Piscine-rattrapage-Jour_01AM/ex_04
** 
** Made by todoro_v
** Login   <todoro_v@epitech.net>
** 
** Started on  Mon Dec 16 15:45:46 2013 todoro_v
** Last update Mon Dec 16 15:46:18 2013 todoro_v
*/

int	is_even(int number)
{
  if (number < 0)
    number = -number;
  if (number % 2 == 1)
    return (0);
  else
    return (1);
}
