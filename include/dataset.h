#pragma once
#include <stdbool.h>

struct Record {

    int ID;
    char name[50];
    char category[20];
    int value ;
};

struct Dataset{

    struct Record * records;
    int Size;
    int Capacity;
    bool IsSortedByID;
};