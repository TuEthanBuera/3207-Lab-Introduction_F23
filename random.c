#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int charval = 65+ rand()%26;
    return (char)charval;

}
