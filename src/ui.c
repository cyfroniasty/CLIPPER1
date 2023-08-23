// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_scrSplash
void ui_scrSplash_screen_init(void);
void ui_event_scrSplash(lv_event_t * e);
lv_obj_t * ui_scrSplash;
lv_obj_t * ui_lblSplash;
lv_obj_t * ui_lblSplashStatus;
lv_obj_t * ui_lblVersion;
lv_obj_t * ui_lblTitle;

// SCREEN: ui_scrMain
void ui_scrMain_screen_init(void);
lv_obj_t * ui_scrMain;
void ui_event_btnMainConfig(lv_event_t * e);
lv_obj_t * ui_btnMainConfig;
void ui_event_btnMainRCSW(lv_event_t * e);
lv_obj_t * ui_btnMainRCSW;
void ui_event_btnMainPreset(lv_event_t * e);
lv_obj_t * ui_btnMainPreset;
lv_obj_t * ui_btnMain9;
void ui_event_btnMainPresetTX(lv_event_t * e);
lv_obj_t * ui_btnMainPresetTX;
lv_obj_t * ui_btnMainRs485;
lv_obj_t * ui_lblMainRs485;
void ui_event_btnMainSettings(lv_event_t * e);
lv_obj_t * ui_btnMainSettings;
void ui_event_btnMainWifi(lv_event_t * e);
lv_obj_t * ui_btnMainWifi;
void ui_event_btnMainProtAna(lv_event_t * e);
lv_obj_t * ui_btnMainProtAna;
lv_obj_t * ui_lblMainConfig;
lv_obj_t * ui_lblMainRCSW;
lv_obj_t * ui_lblMainProtAna;
lv_obj_t * ui_lblMainPresetTx;
lv_obj_t * ui_lblMainStatus;
lv_obj_t * ui_lblMainSettings;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image5;

// SCREEN: ui_scrProtAna
void ui_scrProtAna_screen_init(void);
lv_obj_t * ui_scrProtAna;
lv_obj_t * ui_lblProtAnalyzerTitle;
lv_obj_t * ui_txtProtAnaResults;
void ui_event_btnProtAnaCncl(lv_event_t * e);
lv_obj_t * ui_btnProtAnaCncl;
void ui_event_btnProtAnaClear(lv_event_t * e);
lv_obj_t * ui_btnProtAnaClear;
lv_obj_t * ui_lblProtAnaCncl;
void ui_event_swtProtAnaRxEn(lv_event_t * e);
lv_obj_t * ui_swtProtAnaRxEn;
lv_obj_t * ui_lblProtAnaRXEn;
lv_obj_t * ui_lblProtAnaClear;
lv_obj_t * ui_lblMainFreq;
void ui_event_txtMainFreq(lv_event_t * e);
lv_obj_t * ui_txtMainFreq;
lv_obj_t * ui_lblProtAnaReceived;
lv_obj_t * ui_lblProtAnaBitLength;
lv_obj_t * ui_txtProtAnaReceived;
lv_obj_t * ui_txtProtAnaBitLength;
lv_obj_t * ui_lblProtAnaBinary;
lv_obj_t * ui_txtProtAnaBinary;
lv_obj_t * ui_lblProtAnaPulsLen;
lv_obj_t * ui_txtProtAnaPulsLen;
lv_obj_t * ui_lblProtAnaTriState;
lv_obj_t * ui_txtProtAnaProtAnaTriState;
lv_obj_t * ui_txtProtAnaProtocol;
lv_obj_t * ui_lblProtAnaProtocol;
lv_obj_t * ui_Label1;

// SCREEN: ui_scrKybdNum
void ui_scrKybdNum_screen_init(void);
lv_obj_t * ui_scrKybdNum;
void ui_event_btnKybdOK(lv_event_t * e);
lv_obj_t * ui_btnKybdOK;
void ui_event_btnKybdCncl(lv_event_t * e);
lv_obj_t * ui_btnKybdCncl;
lv_obj_t * ui_txtKybdFreq;
lv_obj_t * ui_lblKybdTitle;
lv_obj_t * ui_lblKybdValueUnits;
lv_obj_t * ui_lblKybdCancel;
lv_obj_t * ui_lblKybdOk;
void ui_event_KybdNumeric(lv_event_t * e);
lv_obj_t * ui_KybdNumeric;

// SCREEN: ui_scrPresets
void ui_scrPresets_screen_init(void);
lv_obj_t * ui_scrPresets;
lv_obj_t * ui_lblPresetsTitle;
lv_obj_t * ui_lblPresetsFolder;
lv_obj_t * ui_lblPresetsFile;
void ui_event_btnPresetsOk(lv_event_t * e);
lv_obj_t * ui_btnPresetsOk;
lv_obj_t * ui_lblPresetsBack;
lv_obj_t * ui_lblPresetsStatus;
lv_obj_t * ui_lblPresetsTxFile;
void ui_event_ddPresetsFolder(lv_event_t * e);
lv_obj_t * ui_ddPresetsFolder;
void ui_event_ddPresetsFile(lv_event_t * e);
lv_obj_t * ui_ddPresetsFile;
void ui_event_btnPresetTx(lv_event_t * e);
lv_obj_t * ui_btnPresetTx;
lv_obj_t * ui_lblPresetTx;
void ui_event_btnPresetTesla(lv_event_t * e);
lv_obj_t * ui_btnPresetTesla;
lv_obj_t * ui_lblPresetTesla;

// SCREEN: ui_scrSettings
void ui_scrSettings_screen_init(void);
lv_obj_t * ui_scrSettings;
lv_obj_t * ui_lblSettingsTitle;
void ui_event_btnSettingsOTA(lv_event_t * e);
lv_obj_t * ui_btnSettingsOTA;
lv_obj_t * ui_lblSettingsOTA;
lv_obj_t * ui_lblSettingsStatus;
void ui_event_btnSettingsBack(lv_event_t * e);
lv_obj_t * ui_btnSettingsBack;
lv_obj_t * ui_lblSettingsBack;
lv_obj_t * ui_lblSettingsWifiIP;
lv_obj_t * ui_lblSettingsIPAddr;
lv_obj_t * ui_lblSettingsInfo;
lv_obj_t * ui_barProgress;
lv_obj_t * ui_swSettingsWifiMode;
lv_obj_t * ui_lblSettingsWifiSSID;
lv_obj_t * ui_txtSettingsWifiSSID;
lv_obj_t * ui_lblSettingsWifiKey;
lv_obj_t * ui_txtSettingsWifiKey;
lv_obj_t * ui_lblSettingsWifiMode;
lv_obj_t * ui_lblSettingsWifiModeAP;
lv_obj_t * ui_lblSettingsWifiModeSTA;
lv_obj_t * ui_btnSettingsSave;
lv_obj_t * ui_lblSettingsSave;
void ui_event_btnRotate(lv_event_t * e);
lv_obj_t * ui_btnRotate;
lv_obj_t * ui_lblRotate;

// SCREEN: ui_scrWifiApps
void ui_scrWifiApps_screen_init(void);
lv_obj_t * ui_scrWifiApps;
lv_obj_t * ui_lblWifiMain;
lv_obj_t * ui_tabWifiApps;
lv_obj_t * ui_WifiScan;
void ui_event_btnWifiScannerScan(lv_event_t * e);
lv_obj_t * ui_btnWifiScannerScan;
lv_obj_t * ui_lblWifiScannerScan;
lv_obj_t * ui_txtWifiScanNetsFound;
lv_obj_t * ui_lblWifiScanNetsFound;
lv_obj_t * ui_ddlWifiSSID;
lv_obj_t * ui_WifiApps;
void ui_event_btnWifiBack(lv_event_t * e);
lv_obj_t * ui_btnWifiBack;
lv_obj_t * ui_lblWifiBack;

// SCREEN: ui_scrRCSWMain
void ui_scrRCSWMain_screen_init(void);
lv_obj_t * ui_scrRCSWMain;
lv_obj_t * ui_lblRCSWMain;
lv_obj_t * ui_tabRCSWApps;
lv_obj_t * ui_TenPole;
void ui_event_btnTenPoleTxOn(lv_event_t * e);
lv_obj_t * ui_btnTenPoleTxOn;
lv_obj_t * ui_lblTenPoleTxOn;
void ui_event_btnTenPoleTxOff(lv_event_t * e);
lv_obj_t * ui_btnTenPoleTxOff;
lv_obj_t * ui_lblTenPoleTxOff;
void ui_event_TenPoleSW0(lv_event_t * e);
lv_obj_t * ui_TenPoleSW0;
void ui_event_TenPoleSW1(lv_event_t * e);
lv_obj_t * ui_TenPoleSW1;
void ui_event_TenPoleSW2(lv_event_t * e);
lv_obj_t * ui_TenPoleSW2;
void ui_event_TenPoleSW3(lv_event_t * e);
lv_obj_t * ui_TenPoleSW3;
void ui_event_TenPoleSW4(lv_event_t * e);
lv_obj_t * ui_TenPoleSW4;
void ui_event_TenPoleSW5(lv_event_t * e);
lv_obj_t * ui_TenPoleSW5;
void ui_event_TenPoleSW6(lv_event_t * e);
lv_obj_t * ui_TenPoleSW6;
void ui_event_TenPoleSW7(lv_event_t * e);
lv_obj_t * ui_TenPoleSW7;
void ui_event_TenPoleSW8(lv_event_t * e);
lv_obj_t * ui_TenPoleSW8;
void ui_event_TenPoleSW9(lv_event_t * e);
lv_obj_t * ui_TenPoleSW9;
lv_obj_t * ui_lblBit0;
lv_obj_t * ui_lblBit1;
lv_obj_t * ui_lblBit2;
lv_obj_t * ui_lblBit3;
lv_obj_t * ui_lblBit4;
lv_obj_t * ui_lblBit5;
lv_obj_t * ui_lblBit6;
lv_obj_t * ui_lblBit7;
lv_obj_t * ui_lblBit8;
lv_obj_t * ui_lblBit9;
lv_obj_t * ui_ddlTenProto;
void ui_event_txt10PoleFreq(lv_event_t * e);
lv_obj_t * ui_txt10PoleFreq;
lv_obj_t * ui_lblRCSWStatus;
lv_obj_t * ui_NEW;
void ui_event_btnRCSWBack(lv_event_t * e);
lv_obj_t * ui_btnRCSWBack;
lv_obj_t * ui_lblRCSWBack;

// SCREEN: ui_scrCC1101Scan
void ui_scrCC1101Scan_screen_init(void);
lv_obj_t * ui_scrCC1101Scan;
lv_obj_t * ui_lblRCSWApps1;
lv_obj_t * ui_tabCC1101Scan;
lv_obj_t * ui_Scanner;
lv_obj_t * ui_txtScannerData;
void ui_event_txtScanStartFq(lv_event_t * e);
lv_obj_t * ui_txtScanStartFq;
void ui_event_txtScanStopFq(lv_event_t * e);
lv_obj_t * ui_txtScanStopFq;
lv_obj_t * ui_lblScanStartFq;
lv_obj_t * ui_lblScanStopFq;
void ui_event_swScannerOn(lv_event_t * e);
lv_obj_t * ui_swScannerOn;
lv_obj_t * ui_Label2;
void ui_event_btnScannerClear(lv_event_t * e);
lv_obj_t * ui_btnScannerClear;
lv_obj_t * ui_lblScannerClear;
void ui_event_sldThreshold(lv_event_t * e);
lv_obj_t * ui_sldThreshold;
lv_obj_t * ui_lblSldThreshold;
lv_obj_t * ui_lblThreshold;
lv_obj_t * ui_Config;
void ui_event_btnScanBack(lv_event_t * e);
lv_obj_t * ui_btnScanBack;
lv_obj_t * ui_lblScanBack;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_splashbkgnd[1] = {&ui_img_splashbkgnd2_png};
const lv_img_dsc_t * ui_imgset_hackbkgnd[1] = {&ui_img_hackbkgnd2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_scrSplash(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
    }
}
void ui_event_btnMainConfig(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrCC1101Scan, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrCC1101Scan_screen_init);
        fcnScrCC1101Scan(e);
    }
}
void ui_event_btnMainRCSW(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrRCSWMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrRCSWMain_screen_init);
        fcnScrRCSW(e);
    }
}
void ui_event_btnMainPreset(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrPresets, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrPresets_screen_init);
        fcnPresetPopDir(e);
        fcnScrPresets(e);
    }
}
void ui_event_btnMainPresetTX(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnMainPreTX(e);
    }
}
void ui_event_btnMainSettings(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrSettings, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrSettings_screen_init);
        fcnScrSettings(e);
    }
}
void ui_event_btnMainWifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrWifiApps, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrWifiApps_screen_init);
        fcnScrWifi(e);
    }
}
void ui_event_btnMainProtAna(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrProtAna, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrProtAna_screen_init);
        fcnScrProtana(e);
    }
}
void ui_event_btnProtAnaCncl(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
        fcnProtAnaRxOff(e);
        _ui_state_modify(ui_swtProtAnaRxEn, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
    }
}
void ui_event_btnProtAnaClear(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnProtAnaClear(e);
    }
}
void ui_event_swtProtAnaRxEn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fcnProtAnaRxEn(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fcnProtAnaRxOff(e);
    }
}
void ui_event_txtMainFreq(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrKybdNum, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrKybdNum_screen_init);
        fcnGetCurfreq(e);
    }
}
void ui_event_btnKybdOK(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnSetFreq(e);
    }
}
void ui_event_btnKybdCncl(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnKybdFreqCncl(e);
    }
}
void ui_event_KybdNumeric(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        fcnSetFreq(e);
    }
}
void ui_event_btnPresetsOk(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
    }
}
void ui_event_ddPresetsFolder(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnClearPresetsFilesDD(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        populateFileDropdown(e);
    }
}
void ui_event_ddPresetsFile(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnPopulateFileDropdown(e);
    }
}
void ui_event_btnPresetTx(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnPresetTx(e);
    }
}
void ui_event_btnPresetTesla(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnTeslaTx(e);
    }
}
void ui_event_btnSettingsOTA(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnSettingsOTA(e);
    }
}
void ui_event_btnSettingsBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
        fcnProtAnaCancel(e);
    }
}
void ui_event_btnRotate(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnRotateLCD(e);
    }
}
void ui_event_btnWifiScannerScan(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnScanWifi(e);
    }
}
void ui_event_btnWifiBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
    }
}
void ui_event_btnTenPoleTxOn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnRCSWTXOn(e);
    }
}
void ui_event_btnTenPoleTxOff(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnRCSWTXOff(e);
    }
}
void ui_event_TenPoleSW0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit0, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit0, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit1, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit1, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit2, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit2, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit3, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit3, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit4, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit4, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit5, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit5, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit6, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit6, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit7, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit7, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit8, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit8, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_TenPoleSW9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit9, _UI_LABEL_PROPERTY_TEXT, "1");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_lblBit9, _UI_LABEL_PROPERTY_TEXT, "0");
    }
}
void ui_event_txt10PoleFreq(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrKybdNum, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrKybdNum_screen_init);
        fcnGetCurfreq(e);
    }
}
void ui_event_btnRCSWBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
    }
}
void ui_event_txtScanStartFq(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrKybdNum, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrKybdNum_screen_init);
        fcnSetStartFlag(e);
        fcnGetCurfreq(e);
    }
}
void ui_event_txtScanStopFq(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrKybdNum, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrKybdNum_screen_init);
        fcnSetStopFlag(e);
        fcnGetCurfreq(e);
    }
}
void ui_event_swScannerOn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fcnCC1101ScanOn(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fcnCC1101ScanOff(e);
    }
}
void ui_event_btnScannerClear(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fcnScannerClear(e);
    }
}
void ui_event_sldThreshold(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_slider_set_text_value(ui_lblThreshold, target, "", "");
    }
}
void ui_event_btnScanBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_scrMain, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_scrMain_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_scrSplash_screen_init();
    ui_scrMain_screen_init();
    ui_scrProtAna_screen_init();
    ui_scrKybdNum_screen_init();
    ui_scrPresets_screen_init();
    ui_scrSettings_screen_init();
    ui_scrWifiApps_screen_init();
    ui_scrRCSWMain_screen_init();
    ui_scrCC1101Scan_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_scrSplash);
}
