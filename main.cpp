#include "graphics.hpp"
#include "widgets.hpp"
#include "examplecheckbox.hpp"
#include "statictext.hpp"
#include "texteditor.hpp"
#include "window.hpp"
#include "pushbutton.hpp"
#include <vector>

using namespace std;
using namespace genv;


///////////////////////////////////////////////////
class MyWindow : public Window {
public:
    StaticText *tx1;
    StaticText *tx2;
    StaticText *tx3;
    StaticText *tx4;
    StaticText *tx5;
    StaticText *tx6;
    StaticText *tx7;
    TextEditor *ed1;
    TextEditor *ed2;
    TextEditor *ed3;
    TextEditor *ed4;
    TextEditor *ed5;
    TextEditor *ed6;
    TextEditor *ed7;
    TextEditor *ed8;
    PushButton *button;
    PushButton *button1;
    PushButton *button2;
    PushButton *button3;
    PushButton *button4;
    PushButton *button5;
    PushButton *button6;
    PushButton *button7;
    PushButton *button8;
    PushButton *button9;
    PushButton *button10;
    PushButton *button11;
    PushButton *button12;
    PushButton *button13;
    PushButton *start;
    MyWindow() {
        start = new PushButton(this,100,830,40,30,"->","Start");
        button = new PushButton(this, 120, 10, 40, 30,"->", "tovabjut1");
        button1 = new PushButton(this, 120, 110, 40, 30,"->", "tovabjut2");
        button2 = new PushButton(this, 120, 220, 40, 30,"->", "tovabjut3");
        button3 = new PushButton(this, 120, 320, 40, 30,"->", "tovabjut4");
        button4 = new PushButton(this, 120, 430, 40, 30,"->", "tovabjut5");
        button5 = new PushButton(this, 120, 530, 40, 30,"->", "tovabjut6");
        button6 = new PushButton(this, 120, 640, 40, 30,"->", "tovabjut7");
        button7 = new PushButton(this, 120, 740, 40, 30,"->", "tovabjut8");
        button8 = new PushButton(this, 300, 60, 40, 30,"->", "tovabjut9");
        button9 = new PushButton(this, 300, 270, 40, 30,"->", "tovabjut10");
        button10 = new PushButton(this, 300, 480, 40, 30,"->", "tovabjut11");
        button11 = new PushButton(this, 300, 690, 40, 30,"->", "tovabjut12");
        button12 = new PushButton(this, 470, 150, 40, 30,"->", "tovabjut13");
        button13 = new PushButton(this, 470, 580, 40, 30,"->", "tovabjut14");
       tx1 = new StaticText(175,60,100,40," ");
       tx2 = new StaticText(175,270,100,40," ");
       tx3 = new StaticText(175,480,100,40," ");
       tx4 = new StaticText(175,690,100,40," ");
       tx5 = new StaticText(360,150,100,40," ");
       tx6 = new StaticText(360,580,100,40," ");
       tx7 = new StaticText(550,360,100,50," ");
        ed1 = new TextEditor(10,10,100,40," ");
        ed2 = new TextEditor(10,110,100,40," ");
        ed3 = new TextEditor(10,220,100,40," ");
        ed4 = new TextEditor(10,320,100,40," ");
        ed5 = new TextEditor(10,430,100,40," ");
        ed6 = new TextEditor(10,530,100,40," ");
        ed7 = new TextEditor(10,640,100,40," ");
        ed8 = new TextEditor(10,740,100,40," ");
        widgets.push_back(tx1);
        widgets.push_back(tx2);
        widgets.push_back(tx3);
        widgets.push_back(tx4);
        widgets.push_back(tx5);
        widgets.push_back(tx6);
        widgets.push_back(tx7);
        widgets.push_back(ed1);
        widgets.push_back(ed2);
        widgets.push_back(ed3);
        widgets.push_back(ed4);
        widgets.push_back(ed5);
        widgets.push_back(ed6);
        widgets.push_back(ed7);
        widgets.push_back(ed8);
        widgets.push_back(button);
        widgets.push_back(button1);
        widgets.push_back(button2);
        widgets.push_back(button3);
        widgets.push_back(button4);
        widgets.push_back(button5);
        widgets.push_back(button6);
        widgets.push_back(button7);
        widgets.push_back(button8);
        widgets.push_back(button9);
        widgets.push_back(button10);
        widgets.push_back(button11);
        widgets.push_back(button12);
        widgets.push_back(button13);
        widgets.push_back(start);
   }
    void esemeny(string mitortent) {
        start->enabled();
        if (mitortent == "tovabjut1") {
            tx1->setText(ed1->value());
            button1->disabled();
            button->disabled();
            }
        if(mitortent == "tovabjut2"){
            tx1->setText(ed2->value());
            button->disabled();
            button1->disabled();
        }
          if(mitortent == "tovabjut3"){
            tx2->setText(ed3->value());
            button2->disabled();
            button3->disabled();
        }
          if(mitortent == "tovabjut4"){
            tx2->setText(ed4->value());
            button3->disabled();
            button2->disabled();
        }
          if(mitortent == "tovabjut5"){
            tx3->setText(ed5->value());
            button4->disabled();
            button5->disabled();
        }
          if(mitortent == "tovabjut6"){
            tx3->setText(ed6->value());
            button4->disabled();
            button5->disabled();
        }
          if(mitortent == "tovabjut7"){
            tx4->setText(ed7->value());
            button6->disabled();
            button7->disabled();
        }
          if(mitortent == "tovabjut8"){
            tx4->setText(ed8->value());
            button6->disabled();
            button7->disabled();
        }
          if(mitortent == "tovabjut9"){
            tx5->setText(tx1->value());
            button8->disabled();
            button9->disabled();
        }
          if(mitortent == "tovabjut10"){
            tx5->setText(tx2->value());
            button8->disabled();
            button9->disabled();
        }
          if(mitortent == "tovabjut11"){
            tx6->setText(tx3->value());
            button10->disabled();
            button11->disabled();
        }
          if(mitortent == "tovabjut12"){
            tx6->setText(tx4->value());
            button10->disabled();
            button11->disabled();
        }
         if(mitortent == "tovabjut13"){
            tx7->setText(tx5->value());
            button12->disabled();
            button13->disabled();
        }
         if(mitortent == "tovabjut14"){
            tx7->setText(tx6->value()+" THE WINNER!!!");
            button12->disabled();
            button13->disabled();
        }
        if (mitortent == "Start") {
                start->enabled();
                button1->enabled();
                button2->enabled();
                button3->enabled();
                button4->enabled();
                button5->enabled();
                button6->enabled();
                button7->enabled();
                button8->enabled();
                button9->enabled();
                button10->enabled();
                button11->enabled();
                button12->enabled();
                button13->enabled();

        }
    }
};

int main()
{
    gout.open(900,900);
    MyWindow *mywindow = new MyWindow;
    mywindow->event_loop();
    return 0;
}
