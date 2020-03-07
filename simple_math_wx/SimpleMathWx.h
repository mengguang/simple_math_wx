///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/timer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class SimpleMath
///////////////////////////////////////////////////////////////////////////////
class SimpleMath : public wxFrame
{
	private:

	protected:
		wxStaticText* m_questionText;
		wxButton* m_restartButton;
		wxTextCtrl* m_answerText;
		wxStaticText* m_notifyText;
		wxStaticText* m_timeUsed;
		wxStaticText* m_questionNumber;
		wxTimer m_eximTimer;

		// Virtual event handlers, overide them in your derived class
		virtual void onRestartButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void onAnswerInput( wxCommandEvent& event ) { event.Skip(); }
		virtual void onEximTimerUpdate( wxTimerEvent& event ) { event.Skip(); }


	public:

		SimpleMath( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Simple Math Exam"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxCAPTION|wxCLOSE_BOX|wxTAB_TRAVERSAL );

		~SimpleMath();

};

