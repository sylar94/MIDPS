//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int i=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
char buffer[50];
if(Edit1->GetTextLen()>0){
itoa(++i,buffer,10);
Edit1->SetTextBuf(buffer);
Label2->SetTextBuf("i Increased");
}
else{
itoa(++i,buffer,10);
Edit1->SetTextBuf(buffer);
Label2->SetTextBuf("i Increased");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
char buffer[50];
if(Edit1->GetTextLen()>0){
itoa(--i,buffer,10);
Edit1->SetTextBuf(buffer);
Label2->SetTextBuf("i Decreased");
}
else{
itoa(--i,buffer,10);
Edit1->SetTextBuf(buffer);
Label2->SetTextBuf("i Decreased");
}
}
//---------------------------------------------------------------------------
