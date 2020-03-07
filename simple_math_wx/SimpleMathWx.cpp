///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "SimpleMathWx.h"

///////////////////////////////////////////////////////////////////////////

SimpleMath::SimpleMath( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 500,300 ), wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	bSizer4->SetMinSize( wxSize( 500,300 ) );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_questionText = new wxStaticText( this, wxID_ANY, wxT("10 + 8"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxST_NO_AUTORESIZE );
	m_questionText->Wrap( -1 );
	m_questionText->SetFont( wxFont( 38, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer3->Add( m_questionText, 3, wxALL|wxEXPAND, 5 );

	m_restartButton = new wxButton( this, wxID_ANY, wxT("Restart"), wxDefaultPosition, wxDefaultSize, 0 );
	m_restartButton->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer3->Add( m_restartButton, 1, wxALL|wxEXPAND, 5 );


	bSizer4->Add( bSizer3, 1, wxEXPAND, 5 );

	m_answerText = new wxTextCtrl( this, wxID_ANY, wxT("18"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_answerText->SetFont( wxFont( 38, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer4->Add( m_answerText, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_notifyText = new wxStaticText( this, wxID_ANY, wxT("Score: 100"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxST_NO_AUTORESIZE );
	m_notifyText->Wrap( -1 );
	m_notifyText->SetFont( wxFont( 26, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer2->Add( m_notifyText, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_timeUsed = new wxStaticText( this, wxID_ANY, wxT("Time Used: 30 S"), wxDefaultPosition, wxDefaultSize, 0 );
	m_timeUsed->Wrap( -1 );
	m_timeUsed->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer41->Add( m_timeUsed, 1, wxALL|wxEXPAND, 5 );

	m_questionNumber = new wxStaticText( this, wxID_ANY, wxT("No. 30"), wxDefaultPosition, wxDefaultSize, 0 );
	m_questionNumber->Wrap( -1 );
	m_questionNumber->SetFont( wxFont( 18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_questionNumber->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );

	bSizer41->Add( m_questionNumber, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer41, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();
	m_eximTimer.SetOwner( this, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	m_restartButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimpleMath::onRestartButtonClicked ), NULL, this );
	m_answerText->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( SimpleMath::onAnswerInput ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( SimpleMath::onEximTimerUpdate ) );
}

SimpleMath::~SimpleMath()
{
	// Disconnect Events
	m_restartButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimpleMath::onRestartButtonClicked ), NULL, this );
	m_answerText->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( SimpleMath::onAnswerInput ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( SimpleMath::onEximTimerUpdate ) );

}
