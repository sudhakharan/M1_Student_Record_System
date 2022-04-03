#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "add_mod_files.h"


void main_window(){
    int choice;
    SetColor(28);
    int x = 2;
    while(1){
        gotoxy(x,8);printf("1. Add Student");
        gotoxy(x,10);printf("2. Search Student");
        gotoxy(x,12);printf("3. Modify Student Record");
        gotoxy(x,14);printf("4. Generate Marks");
        gotoxy(x,16);printf("5. View Marks");
        gotoxy(x,18);printf("6. Delete Student Record");
        gotoxy(x,20);printf("7. Change password");
        gotoxy(x,22);printf("8. Exit");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                mod_student();
                break;
            case 4:
                gen_marksheet();
                break;
            case 5:
                view_marks();
                break;
            case 6:
                delete_student();
               break;
            case 7:
               break;
            case 8:
                exit(0);

                break;
            default:
                break;
        }

    }

}

int main(){
    ClearConsoleToColors(17,15);
    SetConsoleTitle("Student Record System");
    window();
    //use_pass_field();
    main_window();
    return 0;
}

