#include <stdio.h>
#include <stdlib.h>
#include "dataset.h"

int main(void)
{
    // =========================
    // Test 1: Valid initialization
    // =========================

    struct Dataset dataset1;

    bool result1 = InitializeDataset(&dataset1, 4);

    printf("Test 1 - Valid initialization\n");
    printf("Result: %s\n", result1 ? "true" : "false");
    printf("Records: %s\n", dataset1.records != NULL ? "allocated" : "NULL");
    printf("Size: %d\n", dataset1.Size);
    printf("Capacity: %d\n", dataset1.Capacity);
    printf("IsSortedByID: %s\n\n", dataset1.IsSortedByID ? "true" : "false");

    free(dataset1.records);
    dataset1.records = NULL;


    // =========================
    // Test 2: Invalid capacity
    // =========================

    struct Dataset dataset2;

    bool result2 = InitializeDataset(&dataset2, 0);

    printf("Test 2 - Invalid capacity\n");
    printf("Result: %s\n", result2 ? "true" : "false");
    printf("Records: %s\n", dataset2.records != NULL ? "allocated" : "NULL");
    printf("Size: %d\n", dataset2.Size);
    printf("Capacity: %d\n", dataset2.Capacity);
    printf("IsSortedByID: %s\n\n", dataset2.IsSortedByID ? "true" : "false");


    // =========================
    // Test 3: NULL Dataset
    // =========================

    bool result3 = InitializeDataset(NULL, 4);

    printf("Test 3 - NULL Dataset\n");
    printf("Result: %s\n", result3 ? "true" : "false");
    printf("No crash occurred.\n");

    return 0;
}