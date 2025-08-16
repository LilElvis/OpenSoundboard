#include "IconsFontaudio.h"
#include "MainLayer.hpp"
#include "Utils.hpp"
#include <filesystem>
#include <imgui.h>

namespace osb {

	MainLayer::MainLayer()
	{

	}

	MainLayer::~MainLayer()
	{

	}

	void MainLayer::OnAttach()
	{
		std::filesystem::path p = "fonts\\fontaudio.ttf";
		std::filesystem::path absolute_path = std::filesystem::absolute(p);
		Utils::AddAudioIcons(absolute_path.string().data());
	}

	void MainLayer::OnDetach()
	{

	}

	void MainLayer::OnUIRender()
	{
		ShowUnicodeFontDemo();
	}

	void MainLayer::ShowUnicodeFontDemo()
	{
		ImGui::Text(ICON_FAD_ADR);
		ImGui::Text(ICON_FAD_ADSR);
		ImGui::Text(ICON_FAD_AHDSR);
		ImGui::Text(ICON_FAD_AR);
		ImGui::Text(ICON_FAD_ARMRECORDING);
		ImGui::Text(ICON_FAD_ARPCHORD);
		ImGui::Text(ICON_FAD_ARPDOWN);
		ImGui::Text(ICON_FAD_ARPDOWNANDUP);
		ImGui::Text(ICON_FAD_ARPDOWNUP);
		ImGui::Text(ICON_FAD_ARPPLAYORDER);
		ImGui::Text(ICON_FAD_ARPRANDOM);
		ImGui::Text(ICON_FAD_ARPUP);
		ImGui::Text(ICON_FAD_ARPUPANDOWN);
		ImGui::Text(ICON_FAD_ARPUPDOWN);
		ImGui::Text(ICON_FAD_ARROWS_HORZ);
		ImGui::Text(ICON_FAD_ARROWS_VERT);
		ImGui::Text(ICON_FAD_AUTOMATION_2P);
		ImGui::Text(ICON_FAD_AUTOMATION_3P);
		ImGui::Text(ICON_FAD_AUTOMATION_4P);
		ImGui::Text(ICON_FAD_BACKWARD);
		ImGui::Text(ICON_FAD_BLUETOOTH);
		ImGui::Text(ICON_FAD_CARET_DOWN);
		ImGui::Text(ICON_FAD_CARET_LEFT);
		ImGui::Text(ICON_FAD_CARET_RIGHT);
		ImGui::Text(ICON_FAD_CARET_UP);
		ImGui::Text(ICON_FAD_CLOSE);
		ImGui::Text(ICON_FAD_COPY);
		ImGui::Text(ICON_FAD_CPU);
		ImGui::Text(ICON_FAD_CUTTER);
		ImGui::Text(ICON_FAD_DIGITAL_COLON);
		ImGui::Text(ICON_FAD_DIGITAL_DOT);
		ImGui::Text(ICON_FAD_DIGITAL0);
		ImGui::Text(ICON_FAD_DIGITAL1);
		ImGui::Text(ICON_FAD_DIGITAL2);
		ImGui::Text(ICON_FAD_DIGITAL3);
		ImGui::Text(ICON_FAD_DIGITAL4);
		ImGui::Text(ICON_FAD_DIGITAL5);
		ImGui::Text(ICON_FAD_DIGITAL6);
		ImGui::Text(ICON_FAD_DIGITAL7);
		ImGui::Text(ICON_FAD_DIGITAL8);
		ImGui::Text(ICON_FAD_DIGITAL9);
		ImGui::Text(ICON_FAD_DISKIO);
		ImGui::Text(ICON_FAD_DRUMPAD);
		ImGui::Text(ICON_FAD_DUPLICATE);
		ImGui::Text(ICON_FAD_ERASER);
		ImGui::Text(ICON_FAD_FFWD);
		ImGui::Text(ICON_FAD_FILTER_BANDPASS);
		ImGui::Text(ICON_FAD_FILTER_BELL);
		ImGui::Text(ICON_FAD_FILTER_BYPASS);
		ImGui::Text(ICON_FAD_FILTER_HIGHPASS);
		ImGui::Text(ICON_FAD_FILTER_LOWPASS);
		ImGui::Text(ICON_FAD_FILTER_NOTCH);
		ImGui::Text(ICON_FAD_FILTER_REZ_HIGHPASS);
		ImGui::Text(ICON_FAD_FILTER_REZ_LOWPASS);
		ImGui::Text(ICON_FAD_FILTER_SHELVING_HI);
		ImGui::Text(ICON_FAD_FILTER_SHELVING_LO);
		ImGui::Text(ICON_FAD_FOLDBACK);
		ImGui::Text(ICON_FAD_FORWARD);
		ImGui::Text(ICON_FAD_H_EXPAND);
		ImGui::Text(ICON_FAD_HARDCLIP);
		ImGui::Text(ICON_FAD_HARDCLIPCURVE);
		ImGui::Text(ICON_FAD_HEADPHONES);
		ImGui::Text(ICON_FAD_KEYBOARD);
		ImGui::Text(ICON_FAD_LOCK);
		ImGui::Text(ICON_FAD_LOGO_AAX);
		ImGui::Text(ICON_FAD_LOGO_ABLETONLINK);
		ImGui::Text(ICON_FAD_LOGO_AU);
		ImGui::Text(ICON_FAD_LOGO_AUDACITY);
		ImGui::Text(ICON_FAD_LOGO_AUDIOBUS);
		ImGui::Text(ICON_FAD_LOGO_CUBASE);
		ImGui::Text(ICON_FAD_LOGO_FL);
		ImGui::Text(ICON_FAD_LOGO_JUCE);
		ImGui::Text(ICON_FAD_LOGO_LADSPA);
		ImGui::Text(ICON_FAD_LOGO_LIVE);
		ImGui::Text(ICON_FAD_LOGO_LV2);
		ImGui::Text(ICON_FAD_LOGO_PROTOOLS);
		ImGui::Text(ICON_FAD_LOGO_RACKEXT);
		ImGui::Text(ICON_FAD_LOGO_REAPER);
		ImGui::Text(ICON_FAD_LOGO_REASON);
		ImGui::Text(ICON_FAD_LOGO_REWIRE);
		ImGui::Text(ICON_FAD_LOGO_STUDIOONE);
		ImGui::Text(ICON_FAD_LOGO_TRACKTION);
		ImGui::Text(ICON_FAD_LOGO_VST);
		ImGui::Text(ICON_FAD_LOGO_WAVEFORM);
		ImGui::Text(ICON_FAD_LOOP);
		ImGui::Text(ICON_FAD_METRONOME);
		ImGui::Text(ICON_FAD_MICROPHONE);
		ImGui::Text(ICON_FAD_MIDIPLUG);
		ImGui::Text(ICON_FAD_MODRANDOM);
		ImGui::Text(ICON_FAD_MODSAWDOWN);
		ImGui::Text(ICON_FAD_MODSAWUP);
		ImGui::Text(ICON_FAD_MODSH);
		ImGui::Text(ICON_FAD_MODSINE);
		ImGui::Text(ICON_FAD_MODSQUARE);
		ImGui::Text(ICON_FAD_MODTRI);
		ImGui::Text(ICON_FAD_MODULARPLUG);
		ImGui::Text(ICON_FAD_MONO);
		ImGui::Text(ICON_FAD_MUTE);
		ImGui::Text(ICON_FAD_NEXT);
		ImGui::Text(ICON_FAD_OPEN);
		ImGui::Text(ICON_FAD_PASTE);
		ImGui::Text(ICON_FAD_PAUSE);
		ImGui::Text(ICON_FAD_PEN);
		ImGui::Text(ICON_FAD_PHASE);
		ImGui::Text(ICON_FAD_PLAY);
		ImGui::Text(ICON_FAD_POINTER);
		ImGui::Text(ICON_FAD_POWERSWITCH);
		ImGui::Text(ICON_FAD_PRESET_A);
		ImGui::Text(ICON_FAD_PRESET_AB);
		ImGui::Text(ICON_FAD_PRESET_B);
		ImGui::Text(ICON_FAD_PRESET_BA);
		ImGui::Text(ICON_FAD_PREV);
		ImGui::Text(ICON_FAD_PUNCH_IN);
		ImGui::Text(ICON_FAD_PUNCH_OUT);
		ImGui::Text(ICON_FAD_RAM);
		ImGui::Text(ICON_FAD_RANDOM_1DICE);
		ImGui::Text(ICON_FAD_RANDOM_2DICE);
		ImGui::Text(ICON_FAD_RECORD);
		ImGui::Text(ICON_FAD_REDO);
		ImGui::Text(ICON_FAD_REPEAT_ONE);
		ImGui::Text(ICON_FAD_REPEAT);
		ImGui::Text(ICON_FAD_REW);
		ImGui::Text(ICON_FAD_ROUNDSWITCH_OFF);
		ImGui::Text(ICON_FAD_ROUNDSWITCH_ON);
		ImGui::Text(ICON_FAD_SAVE);
		ImGui::Text(ICON_FAD_SAVEAS);
		ImGui::Text(ICON_FAD_SCISSORS);
		ImGui::Text(ICON_FAD_SHUFFLE);
		ImGui::Text(ICON_FAD_SLIDER_ROUND_1);
		ImGui::Text(ICON_FAD_SLIDER_ROUND_2);
		ImGui::Text(ICON_FAD_SLIDER_ROUND_3);
		ImGui::Text(ICON_FAD_SLIDERHANDLE_1);
		ImGui::Text(ICON_FAD_SLIDERHANDLE_2);
		ImGui::Text(ICON_FAD_SOFTCLIP);
		ImGui::Text(ICON_FAD_SOFTCLIPCURVE);
		ImGui::Text(ICON_FAD_SOLO);
		ImGui::Text(ICON_FAD_SPEAKER);
		ImGui::Text(ICON_FAD_SQUARESWITCH_OFF);
		ImGui::Text(ICON_FAD_SQUARESWITCH_ON);
		ImGui::Text(ICON_FAD_STEREO);
		ImGui::Text(ICON_FAD_THUNDERBOLT);
		ImGui::Text(ICON_FAD_TIMESELECT);
		ImGui::Text(ICON_FAD_UNDO);
		ImGui::Text(ICON_FAD_UNLOCK);
		ImGui::Text(ICON_FAD_USB);
		ImGui::Text(ICON_FAD_V_EXPAND);
		ImGui::Text(ICON_FAD_VROUNDSWITCH_OFF);
		ImGui::Text(ICON_FAD_VROUNDSWITCH_ON);
		ImGui::Text(ICON_FAD_VSQUARESWITCH_OFF);
		ImGui::Text(ICON_FAD_VSQUARESWITCH_ON);
		ImGui::Text(ICON_FAD_WAVEFORM);
		ImGui::Text(ICON_FAD_XLRPLUG);
		ImGui::Text(ICON_FAD_ZOOMIN);
		ImGui::Text(ICON_FAD_ZOOMOUT);
	}
}