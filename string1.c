#include <stdio.h>

void main(){
//    char name[20] = {'h', 'e', 'l', 'l', 'o', '\0'}; - possible ways of doing this

    char name1[20] = "~ Hello there.";
    char name2[20] = "~ General Kenobi.";

//    for(int i = 0; i<12; i++){
//        printf("%c", name[i]);
//    }

    printf("%s\n\n%s", name1, name2);
}