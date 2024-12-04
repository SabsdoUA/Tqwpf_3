#include <stdio.h>

/*====================================================================================================*/

int max_2d(const int size, int array[][size])
{
  if (array == NULL || size <= 0)
    return -1;
  int max = array[0][0];
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (array[i][j] > max)
      {
        max = array[i][j];
      }
    }
  }
  return max;
}

int vowels_count(const int rows, const int cols, char strings[][cols])
{
  if (strings == NULL || rows <= 0 || cols <= 0)
    return -1;
  int count = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      char c = strings[i][j];
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
      {
        count++;
      }
    }
  }
  return count;
}

int is_in_array_2d(const int num, const int size, int array[][size])
{
  if (array == NULL)
    return -1;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (array[i][j] == num)
        return 1;
    }
  }
  return 0;
}

int largest_line(const int size, int array[][size])
{
  if (array == NULL)
    return -1;
  int max_sum = 0, max_index = 0;
  for (int i = 0; i < size; i++)
  {
    int sum = 0;
    for (int j = 0; j < size; j++)
    {
      sum += array[i][j];
    }
    if (i == 0 || sum > max_sum)
    {
      max_sum = sum;
      max_index = i;
    }
  }
  return max_index;
}

void swap_case_2d(const int rows, const int cols, char strings[][cols])
{
  if (strings == NULL)
    return;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (strings[i][j] >= 'a' && strings[i][j] <= 'z')
      {
        strings[i][j] -= 32;
      }
      else if (strings[i][j] >= 'A' && strings[i][j] <= 'Z')
      {
        strings[i][j] += 32;
      }
    }
  }
}

int largest_col(const int size, int array[][size])
{
  if (array == NULL)
    return -1;
  int max_sum = 0, max_index = 0;
  for (int j = 0; j < size; j++)
  {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
      sum += array[i][j];
    }
    if (j == 0 || sum > max_sum)
    {
      max_sum = sum;
      max_index = j;
    }
  }
  return max_index;
}

int count_zeroes_2d(const int size, int array[][size])
{
  if (array == NULL)
    return -1;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (array[i][j] == 0)
        count++;
    }
  }
  return count;
}

void swap_sign_2d(const int size, int array[][size])
{
  if (array == NULL)
    return;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      array[i][j] = -array[i][j];
    }
  }
}

/*====================================================================================================*/

int main()
{
  int array[2][2] = {{1, 0}, {0, -3}};
  char strings[2][50] = {"hello WORLD", "Ahoj"};

  printf("Max in array: %d\n", max_2d(2, array));
  printf("Vowel count: %d\n", vowels_count(2, 50, strings));
  printf("Is 0 in array: %d\n", is_in_array_2d(0, 2, array));
  printf("Largest line index: %d\n", largest_line(2, array));
  printf("Largest column index: %d\n", largest_col(2, array));
  printf("Zero count in array: %d\n", count_zeroes_2d(2, array));
  printf("Swapping case in strings...\n");
  swap_case_2d(2, 50, strings);
  printf("Strings after swap_case_2d: %s, %s\n", strings[0], strings[1]);
  printf("Swapping signs in array...\n");
  swap_sign_2d(2, array);
  printf("Array after swap_sign_2d: %d %d, %d %d\n", array[0][0], array[0][1], array[1][0], array[1][1]);

  return 0;
}