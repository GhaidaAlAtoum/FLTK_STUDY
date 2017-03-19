#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include  <FL/Fl_Button.H>
#include<iostream>
#include<stdlib.h>
using namespace std;

void but_cb(Fl_Widget *o,void*){
Fl_Button *b=(Fl_Button*)o;
	char newcap[]="changed";
	b->label(newcap);// problemm
	// solve b->copy_label(newcap);
	
}
int main(){
	Fl_Window *win = new Fl_Window(300,200,"Testing");
	//win->begin();
	Fl_Button *but=new Fl_Button(10,150,70,30,"Click me");
	
	win->end(); // here or after sane 
	but->callback(but_cb);
		
	win->show();
	return Fl::run();
}