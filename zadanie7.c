#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define FILENAME "zadanie7.txt"
#define COUNT 101

char pre[COUNT];
char ste[COUNT];
char all[COUNT * 2] = "";
char answer[COUNT * 2] = "";

int needswap(char l, char r);
int canswap(char l, char r);

char rootNode(char);

int main() {
    // Definiuje zmienne oraz wczytuje plik.
    FILE *file = fopen(FILENAME,"rb");
    char firstChar, secondChar;
    int i=0;

    // Sprawdzam czy pli zostal na pewno wczytany, bo inaczej sypie the bad way.
    if (file == NULL) {
        perror(FILENAME);
        exit(EXIT_FAILURE);
    }

    // Czytamy plik
    while (!feof(file) && fscanf(file,"Step %c must be finished before step %c can begin.\n",&firstChar,&secondChar)) {
        // Tworze rownolegle tablice z krokami ktore musza byc wykonane oraz krokami ktore
        pre[i]=firstChar;
        ste[i]=secondChar;
        i++;

        if (strchr(all,firstChar) == NULL) {
            strncat(all, &firstChar, 1);
        }
        if (strchr(all,secondChar) == NULL) {
            strncat(all, &secondChar, 1);
        }
    }

    // Znajduje rootNode
    char* strIter = all;
    char activeChar;

    while(*strIter) {
        activeChar = *strIter;

        if (!strchr(ste, activeChar)) {
            strncat(answer, &activeChar, 1);
        }

        *strIter++;
    }

    qsort(answer, strlen(answer), strcmp);
    printf("%s", answer);
    // Zwalniam locka
    fclose(file);
}
//
//    // for each step, find
//
//
//    // sort alpha first
//    for (int i=0;i<strlen(all)-1;++i) {
//        for (int j=i+1;j<strlen(all);++j) {
//            // sort steps in order of preq / alpha
//            char l=all[i];
//            char r=all[j];
//            if ((needswap(l,r))||(r<l&&canswap(l,r))) {//||needswap(l,r)) {
//                all[i]=r;
//                all[j]=l;
//                printf("%c before %c -> %s\n",r,l,all);
//            }
//        }
//    }
//    printf("String sorted %s\n",all);
//
//
//    // for (int i=0;i<strlen(all)-1;++i) {
//    //     for (int j=i+1;j<strlen(all);++j) {
//    //         // sort steps in order of preq / alpha
//    //         char l=all[i];
//    //         char r=all[j];
//    //         if (needswap(l,r)) {
//    //             all[i]=r;
//    //             all[j]=l;
//    //             printf("%c before %c -> %s\n",r,l,all);
//    //         }
//    //     }
//    // }
//    // printf("Order: %s\n",all);
//
//    printf("Part 1: ...: \n");
//
//    printf("Part 2: ...: \n");
//    return 0;
//}
//
//int needswap(char l, char r)
//{
//    printf("Comparing %c and %c\n",l,r);
//    for (int i=0;i<COUNT;++i) {
//        if (pre[i]==r && ste[i]==l)
//            return 1;
//    }
//    return 0;
//}
//
//int canswap(char l, char r)
//{
//    printf("Can swap %c and %c: ",l,r);
//    for (int i=0;i<COUNT;++i) {
//        if (pre[i]==l && ste[i]==r) {
//            printf("no\n");
//            return 0;
//        }
//    }
//    printf("yes\n");
//    return 1;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//
//#define FILENAME "zadnie7.txt"
//#define COUNT 101
//
//// Definiuje stringi na trzymanie stepow.
//char pre[COUNT];
//char ste[COUNT];
//char all[COUNT*2] = "";
//
//// Tworze interfejsy zeby miec mozliwosc uzywania funkcji bez uprzedniego ich tworzenia.
//int needswap(char l, char r);
//int canswap(char l, char r);
//
//int main()
//{
//    // Definiuje zmienne oraz wczytuje plik.
//    FILE *file = fopen(FILENAME,"rb");
//    char fs,ss;
//    int c=0;
//
//    // Sprawdzam czy pli zostal na pewno wczytany.
//    if (file == NULL) {
//        perror(INPUT);
//        exit(EXIT_FAILURE);
//    }
//
//
//    while (!feof(file) && fscanf(file,"Step %c must be finished before step %c can begin.\n",&fs,&ss)) {
//        // Tworze rownolegle tablice z krokami ktore musza byc wykonane oraz krokami ktore
//        pre[c]=fs;
//        ste[c++]=ss;
//
//        if (strchr(all,fs)==NULL) strncat(all,&fs,1);
//        if (strchr(all,ss)==NULL) strncat(all,&ss,1);
//
//        printf("String %s\n",all);
//    }
//    // Zwalniam ?locka?
//    fclose(file);
//
//    // for each step, find
//
//
//    // sort alpha first
//    for (int i=0;i<strlen(all)-1;++i) {
//        for (int j=i+1;j<strlen(all);++j) {
//            // sort steps in order of preq / alpha
//            char l=all[i];
//            char r=all[j];
//            if ( (needswap(l,r)) || (r < l && canswap(l,r)) ) {
//                all[i]=r;
//                all[j]=l;
//                printf("%c before %c -> %s\n",r,l,all);
//            }
//        }
//    }
//    printf("String sorted %s\n",all);
//
//    return 0;
//}
//
//int needswap(char l, char r)
//{
//    printf("Comparing %c and %c\n",l,r);
//    for (int i=0;i<COUNT;++i) {
//        if (pre[i]==r && ste[i]==l)
//            return 1;
//    }
//    return 0;
//}
//
//int canswap(char l, char r)
//{
//    printf("Can swap %c and %c: ",l,r);
//    for (int i=0;i<COUNT;++i) {
//        if (pre[i]==l && ste[i]==r) {
//            printf("no\n");
//            return 0;
//        }
//    }
//    printf("yes\n");
//    return 1;
//}
