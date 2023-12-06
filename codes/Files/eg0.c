/*
 * Created on Wed Dec 21 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h> 
int main(){ 
  FILE *file; 
  // fopen is used for creating new file and opening existing files
  file = fopen("file0.txt", "w");
  fprintf(file, "Hello! Welcome to Thapar Institute.\n");
} 
