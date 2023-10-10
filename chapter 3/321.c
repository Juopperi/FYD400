#include <ansi_c.h>
#include <cvirte.h>
#include <userint.h>
#include "3_2_1.h"
#include "toolbox.h"

static int panelHandle;
//two variables that change the position
int x;
int y;

int main(int argc, char *argv[]){
    if(InitCVirte (0,argv,0) == 0)
        return -1 
    if((panelHandle = LoadPanel (0,"3_2_1.uir",PANEL)) < 0)
        return -1

    DisplayPanel (panelHandle);
    RunUserInterface ();
    DiscardPanel (panelHandle);
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

int CVICALLBACK ColorCB (int panel, int control, int event, void *callbackData, int eventData1, int evetnData2){
    int color=0;

    switch(event){
        case EVENT_COMMIT
            GetCtrlVal(panelHandle,PANEL_COLORNUM,&color);
            SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,AFTER_TEXT_COLOR,color);
            break;
    }
    return 0;
}

int CVICALLBACK UpCB (int panel, int control, int event, void *callbackData, int eventData1, int evetnData2){
    y=-10;
    switch(event){
        case EVENT_COMMIT
            GetCtrlVal(panelHandle,PANEL_TEXTMSG,ATTR_TOP,&y);
            y-=10;
            SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,y);
            break;
    }
    return 0;
}

int CVICALLBACK DownCB (int panel, int control, int event, void *callbackData, int eventData1, int evetnData2){
    y=10;
    switch(event){
        case EVENT_COMMIT
            GetCtrlVal(panelHandle,PANEL_TEXTMSG,ATTR_TOP,&y);
            y+=10;
            SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,y);
            break;
    }
    return 0;
}

int CVICALLBACK RightCB (int panel, int control, int event, void *callbackData, int eventData1, int evetnData2){
    y=10;
    switch(event){
        case EVENT_COMMIT
            GetCtrlVal(panelHandle,PANEL_TEXTMSG,ATTR_TOP,&y);
            y+=10;
            SetCtrlAttribute(panelHandle,PANEL_TEXTMSG,ATTR_TOP,y);
            break;
    }
    return 0;
}