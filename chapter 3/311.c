#include <cvirte.h>
#include <userint.h>
#include "3_1_1.h"
#include <ansi_c.h>

static int panelHandle, panel2;
// add varaibles *textbox and textlength
// they are used to move text from panel 1 to panel 2
char *textbox;
int textlength=50;

int main (int argc, char *argv[]){
    if (InitCVIRTE (0, arg, 0) == 0)
        return -1; //Out of memory
    if ((panelHandle = LoadPanel (0,"3_1_1.uir", PANEL)) < 0)
        return -1;
    if ((panel2 = LoadPanel (0,"3_1_1.uir", PANEL_2)) < 0)
        return -1;
    DisplayPanel (panelHandle);
    DisplayPanel (panel2);
    RunUSerInterface ();
    DiscardPanel (panelHandle);
    DiscardPanel (panel2);
    return 0;
}

int CVICALLBACK panelCB (int panel, int event, void *callbackDAta, int eventData1, int eventData2){
    switch (event){
        case EVENT_GOT_FOCUS:
            break;
        case EVENT_LOST_FOCUS:
            break;
        case EVENT_CLOSE:
            QuitUserInterface(0);
            break;
    }
    return 0;
}

int CVICALLBACK panelCB_2 (int panel, int event, void *callbackDAta, int eventData1, int eventData2){
    switch (event){
        case EVENT_GOT_FOCUS:
            break;
        case EVENT_LOST_FOCUS:
            break;
        case EVENT_CLOSE:
            QuitUserInterface(0);
            break;
    }
    return 0;
}

int CVICALLBACK okCV(int panel, int control, int event, void*callbackData, int eventData1, int eventData2){
    switch(event){
        case EVENT_COMMIT:
            textbox = malloc (sizeof(char)*(textlength+1));
            GetCtrlVal(panelHandle, PANEL_TextBoxCtrl,textbox);
            SetCtrlVal(panel2,PANEL_2_TextBoxCtrl_2,textbox);
            break;
    }
    return 0;
}