// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#ifndef _CLIPPER1_UI_H
#define _CLIPPER1_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_scrSplash
void ui_scrSplash_screen_init(void);
void ui_event_scrSplash(lv_event_t * e);
extern lv_obj_t * ui_scrSplash;
extern lv_obj_t * ui_lblSplash;
extern lv_obj_t * ui_lblSplashStatus;
extern lv_obj_t * ui_lblVersion;
extern lv_obj_t * ui_lblTitle;
// SCREEN: ui_scrMain
void ui_scrMain_screen_init(void);
extern lv_obj_t * ui_scrMain;
void ui_event_btnMainConfig(lv_event_t * e);
extern lv_obj_t * ui_btnMainConfig;
void ui_event_btnMainRCSW(lv_event_t * e);
extern lv_obj_t * ui_btnMainRCSW;
void ui_event_btnMainPreset(lv_event_t * e);
extern lv_obj_t * ui_btnMainPreset;
extern lv_obj_t * ui_btnMain9;
void ui_event_btnMainPresetTX(lv_event_t * e);
extern lv_obj_t * ui_btnMainPresetTX;
extern lv_obj_t * ui_btnMainRs485;
extern lv_obj_t * ui_lblMainRs485;
void ui_event_btnMainSettings(lv_event_t * e);
extern lv_obj_t * ui_btnMainSettings;
void ui_event_btnMainWifi(lv_event_t * e);
extern lv_obj_t * ui_btnMainWifi;
void ui_event_btnMainProtAna(lv_event_t * e);
extern lv_obj_t * ui_btnMainProtAna;
extern lv_obj_t * ui_lblMainConfig;
extern lv_obj_t * ui_lblMainRCSW;
extern lv_obj_t * ui_lblMainProtAna;
extern lv_obj_t * ui_lblMainPresetTx;
extern lv_obj_t * ui_lblMainStatus;
extern lv_obj_t * ui_lblMainSettings;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Image5;
// SCREEN: ui_scrProtAna
void ui_scrProtAna_screen_init(void);
extern lv_obj_t * ui_scrProtAna;
extern lv_obj_t * ui_lblProtAnalyzerTitle;
extern lv_obj_t * ui_txtProtAnaResults;
void ui_event_btnProtAnaCncl(lv_event_t * e);
extern lv_obj_t * ui_btnProtAnaCncl;
void ui_event_btnProtAnaClear(lv_event_t * e);
extern lv_obj_t * ui_btnProtAnaClear;
extern lv_obj_t * ui_lblProtAnaCncl;
void ui_event_swtProtAnaRxEn(lv_event_t * e);
extern lv_obj_t * ui_swtProtAnaRxEn;
extern lv_obj_t * ui_lblProtAnaRXEn;
extern lv_obj_t * ui_lblProtAnaClear;
extern lv_obj_t * ui_lblMainFreq;
void ui_event_txtMainFreq(lv_event_t * e);
extern lv_obj_t * ui_txtMainFreq;
extern lv_obj_t * ui_lblProtAnaReceived;
extern lv_obj_t * ui_lblProtAnaBitLength;
extern lv_obj_t * ui_txtProtAnaReceived;
extern lv_obj_t * ui_txtProtAnaBitLength;
extern lv_obj_t * ui_lblProtAnaBinary;
extern lv_obj_t * ui_txtProtAnaBinary;
extern lv_obj_t * ui_lblProtAnaPulsLen;
extern lv_obj_t * ui_txtProtAnaPulsLen;
extern lv_obj_t * ui_lblProtAnaTriState;
extern lv_obj_t * ui_txtProtAnaProtAnaTriState;
extern lv_obj_t * ui_txtProtAnaProtocol;
extern lv_obj_t * ui_lblProtAnaProtocol;
extern lv_obj_t * ui_Label1;
// SCREEN: ui_scrKybdNum
void ui_scrKybdNum_screen_init(void);
extern lv_obj_t * ui_scrKybdNum;
void ui_event_btnKybdOK(lv_event_t * e);
extern lv_obj_t * ui_btnKybdOK;
void ui_event_btnKybdCncl(lv_event_t * e);
extern lv_obj_t * ui_btnKybdCncl;
extern lv_obj_t * ui_txtKybdFreq;
extern lv_obj_t * ui_lblKybdTitle;
extern lv_obj_t * ui_lblKybdValueUnits;
extern lv_obj_t * ui_lblKybdCancel;
extern lv_obj_t * ui_lblKybdOk;
void ui_event_KybdNumeric(lv_event_t * e);
extern lv_obj_t * ui_KybdNumeric;
// SCREEN: ui_scrPresets
void ui_scrPresets_screen_init(void);
extern lv_obj_t * ui_scrPresets;
extern lv_obj_t * ui_lblPresetsTitle;
extern lv_obj_t * ui_lblPresetsFolder;
extern lv_obj_t * ui_lblPresetsFile;
void ui_event_btnPresetsOk(lv_event_t * e);
extern lv_obj_t * ui_btnPresetsOk;
extern lv_obj_t * ui_lblPresetsBack;
extern lv_obj_t * ui_lblPresetsStatus;
extern lv_obj_t * ui_lblPresetsTxFile;
void ui_event_ddPresetsFolder(lv_event_t * e);
extern lv_obj_t * ui_ddPresetsFolder;
void ui_event_ddPresetsFile(lv_event_t * e);
extern lv_obj_t * ui_ddPresetsFile;
void ui_event_btnPresetTx(lv_event_t * e);
extern lv_obj_t * ui_btnPresetTx;
extern lv_obj_t * ui_lblPresetTx;
void ui_event_btnPresetTesla(lv_event_t * e);
extern lv_obj_t * ui_btnPresetTesla;
extern lv_obj_t * ui_lblPresetTesla;
// SCREEN: ui_scrSettings
void ui_scrSettings_screen_init(void);
extern lv_obj_t * ui_scrSettings;
extern lv_obj_t * ui_lblSettingsTitle;
void ui_event_btnSettingsOTA(lv_event_t * e);
extern lv_obj_t * ui_btnSettingsOTA;
extern lv_obj_t * ui_lblSettingsOTA;
extern lv_obj_t * ui_lblSettingsStatus;
void ui_event_btnSettingsBack(lv_event_t * e);
extern lv_obj_t * ui_btnSettingsBack;
extern lv_obj_t * ui_lblSettingsBack;
extern lv_obj_t * ui_lblSettingsWifiIP;
extern lv_obj_t * ui_lblSettingsIPAddr;
extern lv_obj_t * ui_lblSettingsInfo;
extern lv_obj_t * ui_barProgress;
extern lv_obj_t * ui_swSettingsWifiMode;
extern lv_obj_t * ui_lblSettingsWifiSSID;
extern lv_obj_t * ui_txtSettingsWifiSSID;
extern lv_obj_t * ui_lblSettingsWifiKey;
extern lv_obj_t * ui_txtSettingsWifiKey;
extern lv_obj_t * ui_lblSettingsWifiMode;
extern lv_obj_t * ui_lblSettingsWifiModeAP;
extern lv_obj_t * ui_lblSettingsWifiModeSTA;
extern lv_obj_t * ui_btnSettingsSave;
extern lv_obj_t * ui_lblSettingsSave;
void ui_event_btnRotate(lv_event_t * e);
extern lv_obj_t * ui_btnRotate;
extern lv_obj_t * ui_lblRotate;
// SCREEN: ui_scrWifiApps
void ui_scrWifiApps_screen_init(void);
extern lv_obj_t * ui_scrWifiApps;
extern lv_obj_t * ui_lblWifiMain;
extern lv_obj_t * ui_tabWifiApps;
extern lv_obj_t * ui_WifiScan;
void ui_event_btnWifiScannerScan(lv_event_t * e);
extern lv_obj_t * ui_btnWifiScannerScan;
extern lv_obj_t * ui_lblWifiScannerScan;
extern lv_obj_t * ui_txtWifiScanNetsFound;
extern lv_obj_t * ui_lblWifiScanNetsFound;
extern lv_obj_t * ui_ddlWifiSSID;
extern lv_obj_t * ui_WifiApps;
void ui_event_btnWifiBack(lv_event_t * e);
extern lv_obj_t * ui_btnWifiBack;
extern lv_obj_t * ui_lblWifiBack;
// SCREEN: ui_scrRCSWMain
void ui_scrRCSWMain_screen_init(void);
extern lv_obj_t * ui_scrRCSWMain;
extern lv_obj_t * ui_lblRCSWMain;
extern lv_obj_t * ui_tabRCSWApps;
extern lv_obj_t * ui_TenPole;
void ui_event_btnTenPoleTxOn(lv_event_t * e);
extern lv_obj_t * ui_btnTenPoleTxOn;
extern lv_obj_t * ui_lblTenPoleTxOn;
void ui_event_btnTenPoleTxOff(lv_event_t * e);
extern lv_obj_t * ui_btnTenPoleTxOff;
extern lv_obj_t * ui_lblTenPoleTxOff;
void ui_event_TenPoleSW0(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW0;
void ui_event_TenPoleSW1(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW1;
void ui_event_TenPoleSW2(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW2;
void ui_event_TenPoleSW3(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW3;
void ui_event_TenPoleSW4(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW4;
void ui_event_TenPoleSW5(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW5;
void ui_event_TenPoleSW6(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW6;
void ui_event_TenPoleSW7(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW7;
void ui_event_TenPoleSW8(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW8;
void ui_event_TenPoleSW9(lv_event_t * e);
extern lv_obj_t * ui_TenPoleSW9;
extern lv_obj_t * ui_lblBit0;
extern lv_obj_t * ui_lblBit1;
extern lv_obj_t * ui_lblBit2;
extern lv_obj_t * ui_lblBit3;
extern lv_obj_t * ui_lblBit4;
extern lv_obj_t * ui_lblBit5;
extern lv_obj_t * ui_lblBit6;
extern lv_obj_t * ui_lblBit7;
extern lv_obj_t * ui_lblBit8;
extern lv_obj_t * ui_lblBit9;
extern lv_obj_t * ui_ddlTenProto;
void ui_event_txt10PoleFreq(lv_event_t * e);
extern lv_obj_t * ui_txt10PoleFreq;
extern lv_obj_t * ui_lblRCSWStatus;
extern lv_obj_t * ui_NEW;
void ui_event_btnRCSWBack(lv_event_t * e);
extern lv_obj_t * ui_btnRCSWBack;
extern lv_obj_t * ui_lblRCSWBack;
// SCREEN: ui_scrCC1101Scan
void ui_scrCC1101Scan_screen_init(void);
extern lv_obj_t * ui_scrCC1101Scan;
extern lv_obj_t * ui_lblRCSWApps1;
extern lv_obj_t * ui_tabCC1101Scan;
extern lv_obj_t * ui_Scanner;
extern lv_obj_t * ui_txtScannerData;
void ui_event_txtScanStartFq(lv_event_t * e);
extern lv_obj_t * ui_txtScanStartFq;
void ui_event_txtScanStopFq(lv_event_t * e);
extern lv_obj_t * ui_txtScanStopFq;
extern lv_obj_t * ui_lblScanStartFq;
extern lv_obj_t * ui_lblScanStopFq;
void ui_event_swScannerOn(lv_event_t * e);
extern lv_obj_t * ui_swScannerOn;
extern lv_obj_t * ui_Label2;
void ui_event_btnScannerClear(lv_event_t * e);
extern lv_obj_t * ui_btnScannerClear;
extern lv_obj_t * ui_lblScannerClear;
void ui_event_sldThreshold(lv_event_t * e);
extern lv_obj_t * ui_sldThreshold;
extern lv_obj_t * ui_lblSldThreshold;
extern lv_obj_t * ui_lblThreshold;
extern lv_obj_t * ui_Config;
void ui_event_btnScanBack(lv_event_t * e);
extern lv_obj_t * ui_btnScanBack;
extern lv_obj_t * ui_lblScanBack;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_splashbkgnd2_png);    // assets\SplashBkgnd2.png
LV_IMG_DECLARE(ui_img_mainbackground_png);    // assets\MainBackground.png
LV_IMG_DECLARE(ui_img_wifilogo_png);    // assets\WifiLogo.png
LV_IMG_DECLARE(ui_img_analyzericon_png);    // assets\AnalyzerIcon.png
LV_IMG_DECLARE(ui_img_subrecordplay_png);    // assets\SubRecordPlay.png
LV_IMG_DECLARE(ui_img_flippericon_png);    // assets\FlipperIcon.png
LV_IMG_DECLARE(ui_img_hackbkgnd2_png);    // assets\Hackbkgnd2.png
LV_IMG_DECLARE(ui_img_blankpgbkgnd_png);    // assets\BlankPgBkgnd.png

LV_FONT_DECLARE(ui_font_LCD20at8BPP);
LV_FONT_DECLARE(ui_font_LCD22at8BPP);
LV_FONT_DECLARE(ui_font_LCD24at8BPP);
LV_FONT_DECLARE(ui_font_LCD30at8BPP);
LV_FONT_DECLARE(ui_font_Verdana11);
LV_FONT_DECLARE(ui_font_Verdana12);
LV_FONT_DECLARE(ui_font_Verdana14);
LV_FONT_DECLARE(ui_font_Verdana16);
LV_FONT_DECLARE(ui_font_Verdana18);
LV_FONT_DECLARE(ui_font_Verdana24);
LV_FONT_DECLARE(ui_font_Verdana8);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
