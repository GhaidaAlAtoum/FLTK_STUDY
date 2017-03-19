#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include  <FL/Fl_Button.H>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define Width 400
#define Height 200
class Foo: public Fl_Window
{
     private: 
             static void MyFunction(Fl_Widget *w, long userdata){
             cout<<"CALLBACK!\n";
	         cout<<userdata<<endl;
             exit(0);
                     }
		     static void MyQuit(Fl_Widget *w, void* userdata){
             cout<<"WIN QUIT :) \n";
	         exit(0);
                      }
		     
     public:
             int data;
             Foo(int w, int h, const char * name =0): Fl_Window(w,h,name)
             {   color(FL_WHITE);
                 data = 1234;
	             callback(MyQuit);
				 Fl_Button *but= new Fl_Button(10,10,100,25,"Gaida");
                 but->callback(MyFunction,1234);
				 but->color(FL_WHITE);
				 	         }
			};


int main(){
Foo foo(Width,Height,"First Program");//

//done defining the new window 
foo.end();

//Make the window visible, passing along any user options
foo.show();

//enter the "command loop" waiting for events
return Fl::run();
}

