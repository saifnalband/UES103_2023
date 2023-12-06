/*
 * Created on Sat Dec 17 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include<stdio.h>
struct student {
  char name[50];
  char Class[100];
  int roll_number;
  float marks[5];
};

int main() {
  struct student s[2];
  for (int i = 0; i < 2; i++) {
    printf("\nEnter details of student %d\n", i + 1);

    printf("Enter name: ");
    scanf("%s", s[i].name);

    printf("\nEnter roll no: ");
    scanf("%d", &s[i].roll_number);

    printf("\nEnter class: ");
    scanf("%s", s[i].Class);
    for (int j = 0; j < 5; j++) {
      printf("\nEnter the marks in subject %d (out of 100): ", j + 1);
      scanf("%f", &s[i].marks[j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("Name\t\tRoll no\t\t\tClass\t\t\t\tMarks\n");
  for (int i = 0; i < 2; i++) {
    printf("%s\t\t%d\t\t\t%s\t\t",
      s[i].name, s[i].roll_number, s[i].Class);
    for (int j = 0; j < 5; j++) {
      printf("%.2f\t", s[i].marks[j]);
    }
    printf("\n");
  }
  return 0;
}
