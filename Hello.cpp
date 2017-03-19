//All programs must include the file <FL/Fl.H>
#include <FL/Fl.H>
//In addition the program must include a header file for each FLTK class it uses
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include  <FL/Fl_Button.H>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define Width 400
#define Height 200
/*call back that always return a void
 * pointer to the widget that invoked calleback
 * we tell it the user data that we want 
 */
static void MyFunction(Fl_Widget *w, long userdata){
 cout<<"CALLBACK!\n";
	cout<<userdata<<endl;
	exit(0);
}
static void MyQuit(Fl_Widget *w, void* userdata){
 cout<<"WIN QUIT :) \n";
	exit(0); // if you remove this it will disable the exit functionallity of "X"
}
int main(){
/********************************************* WIN *********************************************/
// Instance a new window object
Fl_Window *win = new Fl_Window(0,0,Width,Height,"First Program");//
/* Fl_Window(int x, int y, int w, int h, const char *title = 0)	
 * Destructor ~Fl_Window() : The destructor also deletes all the children.;
 */
win->color(FL_WHITE);
win->callback(MyQuit);
/********************************************* BOX *********************************************/
//Add a new box object to the window
Fl_Box *box = new Fl_Box(10,10,300,50,"Hello, World!,");
/* Fl_Box(int x, int y, int w, int h, const char * = 0) ;
 * Fl_Box(Fl_Boxtype b, int x, int y, int w, int h, const char *)
 * box types: http://fltk.org/doc-1.1/common.html#boxtypes
 * --> Destructor 
 * ~Fl_Box(void); 
 */
//set additional fields on the box to specify its appearance
box->box(FL_ROUNDED_BOX); //FL_UP_BOX
box->labelfont(FL_BOLD+FL_ITALIC );
box->labelcolor(FL_BLUE);
box->color(FL_WHITE);
box->labelsize(36);
box->labeltype(FL_SHADOW_LABEL	 );
/********************************************* Button *********************************************/
Fl_Button *but= new Fl_Button(100,70,100,50,"Testing");
but->callback(MyFunction,1234);
/* whenever the button is pressed it will call MyFunction
 * user data is optional and it can be anything (int, class pointer,.. )as long as it is one piece of data
 */

//done defining the new window 
win->end();

//Make the window visible, passing along any user options
win->show();

//enter the "command loop" waiting for events
return Fl::run();
}

/*
 * 1) Top-level windows initially have visible() set to 0 and parent() set to NULL
 *      Subwindows initially have visible() set to 1 and parent() set to the parent window pointer.
 * 2) http://fltk.org/doc-1.1/enumerations.html#Enumerations
 * 3) 
 *
*/