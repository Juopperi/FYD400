#include <stdio.h>

void printArray(double *array[2][2]){
    for(int x = 0 ; x < 2 ; x++){
        for(int y = 0 ; y < 2 ; y++){
            printf("%.1f ",array[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

void clearArray(double **array[2][2]){
    for(int x = 0 ; x < 2 ; x++){
        for(int y = 0 ; y < 2 ; y++){
            (*array)[x][y] = 1;
        }
    }
}

void printArrayFile(double *array[2][2],FILE *stream){
    for(int x = 0 ; x < 2 ; x++){
        for(int y = 0 ; y < 2 ; y++){
            fprintf(stream, "%.1f ",array[x][y]);
        }
    }
}

void readArrayFile(double *array[2][2],FILE *stream){
    //fscanf(stream, "%f %f \n %f %f",&array[0][0],&array[0][1],&array[1][0],&array[1][1]);
    for(int x = 0 ; x < 2 ; x++){
        for(int y = 0 ; y < 2 ; y++){
            array[x][y] = 5;
        }
    }
}

int main(){
    FILE *fp,*fpr;

    const char *filenames[3] = {"matris1.bin","matris2.bin","matris3.bin"};
    double* matrixnames[3];
    double a1[2][2] = {{0.0, 1.0} , {-1.0, 0.0}};
    double a2[2][2] = {{0.0, 1.0} , {1.0, 0.0}};
    double a3[2][2] = {{0.0, -1.0} , {1.0, 0.0}};

    matrixnames[0] = *a1;
    matrixnames[1] = *a2;
    matrixnames[2] = *a3;
    
    for(int i = 0; i < 3;i++){
        fp = fopen(filenames[i],"w");
        printArrayFile(matrixnames[i],fp);
        fclose;
        printArray(matrixnames[i]);
    }

    for(int i = 0; i < 3;i++){
        clearArray(&(matrixnames[i]));
    }
    printf("%f",a1[1][1]);

    for(int j = 0; j < 3;j++){
        //fpr = fopen(filenames[j],"r");
        //readArrayFile(matrixnames[j],fpr);
        //fclose;
        printArray(matrixnames[j]);
    }

    printf("%f",a1[1][1]);

}