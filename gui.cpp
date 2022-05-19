
#include <wx/wx.h>
#include <wx/menu.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size);
};

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("The Credit", wxDefaultPosition, wxDefaultSize);
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size) : wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  wxMenuBar *menubar;
       wxMenu *file;
       wxMenu *help;
       wxTextCtrl *textctrl;
  wxPanel *panel = new wxPanel(this, -1);
  menubar = new wxMenuBar;
  file = new wxMenu;
  help = new wxMenu;

  menubar->Append(file, wxT("&Options"));
  menubar->Append(help, wxT("&Help"));
  SetMenuBar(menubar);

    wxPanel *panel_top = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
    panel_top->SetBackgroundColour(wxColor(33, 33, 31));
    wxPanel *panel_bottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
    panel_bottom->SetBackgroundColour(wxColor(100, 200, 100));



    wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
    sizer->Add(panel_top, 2, wxEXPAND | wxLEFT | wxTOP | wxRIGHT, 15);
    sizer->Add(panel_bottom,1,wxEXPAND| wxLEFT| wxTOP| wxRIGHT, 10);

     wxSizer *sizer_bottom = new wxBoxSizer(wxVERTICAL);
         this->SetSizerAndFit(sizer);
}
