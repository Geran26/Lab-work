#include <stdio.h>

int main() {
    FILE *input;
    input = fopen("test.txt", "r");
    if(input == NULL) {
        printf("cannot open file");
        return 0;
    }
    int arrayData[3][3];
    int row = 0, column = 0;
    while(!feof(input)) {
        for(row = 0; row<3; row++){
            for(column = 0; column<3; column++){
                    fscanf(input, "%d", &arrayData[row][column]);
            }
        }
    }
    int maximum = arrayData[0][0]; //records the ongoing maximum number
    int location_row = 0, location_column = 0;
    for(row = 0; row < 3; row++){ //For all elements of the string (This function only needs i to be less than 26 as there is only26 possible rotations)
        for(column = 0; column < 3; column++) {
            if(arrayData[row][column] > maximum) {
                maximum = arrayData[row][column];
                location_row = row;
                location_column = column;
            }      
        }
    }
    printf("Maximum element is arrayData[%d][%d] = %d\n", location_row, location_column, maximum);
    fclose(input);
    return 0;
}
    
