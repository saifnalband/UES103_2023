/*
 * Created on Wed Dec 14 2022
 *
 * Copyright (c) 2022 Your Company
 */
#include <stdio.h>
#include <string.h>
struct Players{
    /* data */
    char name[50];
    char country[50];
    int jerseyNo;
    char section;
};
// pass by value
void printDetails(struct Players ply){
    // printing values 
    printf( "Player Name : %s\n", ply.name);
    printf( "Player Country : %s\n", ply.country);
    printf( "Player No : %d\n", ply.jerseyNo);
    printf( "Player Section : %c\n", ply.section);
}
// pass by references
void changeDetails(struct Players* ply){
    (*ply).jerseyNo = 8;
    ply->section = 'E';
}
int main(){
    struct Players player3 = {"MESSI" ,"Argentina", 10, 'S'};
    // pass by value
    printDetails(player3);
    // pass by references
    changeDetails(&player3);
    printf("-------------------------\n");
    printDetails(player3);
    printf("Size of player3 is: %lu\n",sizeof(player3)); 
}
