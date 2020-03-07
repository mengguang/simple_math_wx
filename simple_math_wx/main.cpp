#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "SimpleMathWxSimpleMath.h"

class MyApp : public wxApp
{
public:
	bool OnInit() override;
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	auto frame = new SimpleMathWxSimpleMath(nullptr);
	frame->Show(true);
	return true;
}
