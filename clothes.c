#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NUM 100

enum TYPES {SHIRTS=1, PANTS, DRESS};

struct item{
    int type;

    union{
        char sml[4];
        int num;
    } size;
};

int main(){
    struct item prod[MAX_NUM];

    FILE* fp = fopen("item.dat", "r");

    if(!fp){
        printf("Failed to open file\n");
        return -1;
    }

    int type;
    char size[100];
    int k;

    while(!feof(fp)){
        fscanf(fp, "%d %s\n", &type, size);

        //printf("%d", type);
        //printf("%d", size);

        

        switch(type){
            // do program
            case 1:
            prod[k].type = type;
            prod[k].size.num = atoi(size);
            k++;
            break;

            case 2:
            prod[k].type = type;
            strcpy(prod[k].size.sml, size);
            k++;
            break;

            case 3:
            prod[k].type = type;
            strcpy(prod[k].size.sml, size);   
            k++;   
            break;
        }

    }

    for(int i = 0; i < k; i++){
        switch(prod[i].type){
            // do program
            case SHIRTS:
            printf("셔츠 %d호\n", prod[i].size.num);
            break;

            case PANTS:
            printf("바지 %s사이즈\n", prod[i].size.sml);
            break;

            case DRESS:
            printf("원피스 %s사이즈\n", prod[i].size.sml);
            break;
        
        }
    }

    return 0;
}

