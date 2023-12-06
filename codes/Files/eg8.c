/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[50];
  int i = 0;
  FILE *file;
  if (file = fopen(argv[1], "r"))
  {
    while (fscanf(file, "%d", &numbers[i]) != EOF)
    {
      i++;
    }
    fclose(file);

    numbers[i] = '\0';

    for (i = 0; numbers[i] != '\0'; i++)
      printf("%d\n", numbers[i]);
  }

  return 0;
}