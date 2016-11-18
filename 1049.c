#include <stdio.h>
 
int main() {
    char ent1[20], ent2[20], ent3[20];
    
    scanf("%s",ent1);
    scanf("%s",ent2);
    scanf("%s",ent3);
    
    if (strcmp(ent1,"vertebrado") == 0) {
        if (strcmp(ent2,"ave") == 0) {
            if (strcmp(ent3,"carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(ent3,"onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(ent2,"mamifero") == 0) {
            if (strcmp(ent3,"onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(ent3,"herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(ent1,"invertebrado") == 0) {
        if (strcmp(ent2,"inseto") == 0) {
            if (strcmp(ent3,"hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(ent3,"herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(ent2,"anelideo") == 0) {
            if (strcmp(ent3,"hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(ent3,"onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}