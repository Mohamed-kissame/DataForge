#include "dataset.h"
#include <stdbool.h>
#include <stdlib.h>

bool InitializeDataset(struct Dataset *dataset , int initialCapacity)
{

    if(dataset == NULL){

        return false;
    }

        dataset->records = NULL;
        dataset->Capacity = 0;
        dataset->Size = 0;
        dataset->IsSortedByID = true;

    
    if(initialCapacity <= 0){

        return false;
        
    }
   

    struct Record * records = malloc(initialCapacity * sizeof * records);

    if(records == NULL){
        
        return false;
    }

    dataset->records = records;
    dataset->Capacity = initialCapacity;
    dataset->Size = 0;
    dataset->IsSortedByID = true;

    return true;


}
