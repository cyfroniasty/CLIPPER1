// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#include "../ui.h"

void ui_scrPresets_screen_init(void)
{
    ui_scrPresets = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrPresets, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrPresets, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrPresets, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_scrPresets, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsTitle = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsTitle, 0);
    lv_obj_set_y(ui_lblPresetsTitle, -220);
    lv_obj_set_align(ui_lblPresetsTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsTitle, "FLIPPER PLAYER");
    lv_obj_set_style_text_color(ui_lblPresetsTitle, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPresetsTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblPresetsTitle, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsFolder = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsFolder, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsFolder, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsFolder, 0);
    lv_obj_set_y(ui_lblPresetsFolder, -121);
    lv_obj_set_align(ui_lblPresetsFolder, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsFolder, "SD FOLDER");
    lv_obj_set_style_text_color(ui_lblPresetsFolder, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPresetsFolder, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblPresetsFolder, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsFile = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsFile, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsFile, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsFile, 4);
    lv_obj_set_y(ui_lblPresetsFile, -33);
    lv_obj_set_align(ui_lblPresetsFile, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsFile, "SD FILE");
    lv_obj_set_style_text_color(ui_lblPresetsFile, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPresetsFile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblPresetsFile, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnPresetsOk = lv_btn_create(ui_scrPresets);
    lv_obj_set_width(ui_btnPresetsOk, 100);
    lv_obj_set_height(ui_btnPresetsOk, 50);
    lv_obj_set_x(ui_btnPresetsOk, -73);
    lv_obj_set_y(ui_btnPresetsOk, 196);
    lv_obj_set_align(ui_btnPresetsOk, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnPresetsOk, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnPresetsOk, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnPresetsOk, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnPresetsOk, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsBack = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsBack, -75);
    lv_obj_set_y(ui_lblPresetsBack, 196);
    lv_obj_set_align(ui_lblPresetsBack, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsBack, "BACK");
    lv_obj_set_style_text_font(ui_lblPresetsBack, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsStatus = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsStatus, 0);
    lv_obj_set_y(ui_lblPresetsStatus, -190);
    lv_obj_set_align(ui_lblPresetsStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsStatus, "-Status-");
    lv_obj_set_style_text_color(ui_lblPresetsStatus, lv_color_hex(0xD3D1D1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPresetsStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblPresetsStatus, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetsTxFile = lv_label_create(ui_scrPresets);
    lv_obj_set_width(ui_lblPresetsTxFile, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetsTxFile, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetsTxFile, 0);
    lv_obj_set_y(ui_lblPresetsTxFile, -162);
    lv_obj_set_align(ui_lblPresetsTxFile, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetsTxFile, "*");
    lv_obj_set_style_text_color(ui_lblPresetsTxFile, lv_color_hex(0xD3D1D1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblPresetsTxFile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblPresetsTxFile, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ddPresetsFolder = lv_dropdown_create(ui_scrPresets);
    lv_dropdown_set_options(ui_ddPresetsFolder, "");
    lv_obj_set_width(ui_ddPresetsFolder, 290);
    lv_obj_set_height(ui_ddPresetsFolder, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ddPresetsFolder, 1);
    lv_obj_set_y(ui_ddPresetsFolder, -89);
    lv_obj_set_align(ui_ddPresetsFolder, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ddPresetsFolder, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_ddPresetsFolder, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ddPresetsFolder, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ddPresetsFolder, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ddPresetsFolder, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ddPresetsFolder, lv_color_hex(0x8F8C8C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ddPresetsFolder, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ddPresetsFile = lv_dropdown_create(ui_scrPresets);
    lv_dropdown_set_options(ui_ddPresetsFile, "");
    lv_obj_set_width(ui_ddPresetsFile, 290);
    lv_obj_set_height(ui_ddPresetsFile, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ddPresetsFile, 1);
    lv_obj_set_y(ui_ddPresetsFile, -2);
    lv_obj_set_align(ui_ddPresetsFile, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ddPresetsFile, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_ddPresetsFile, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ddPresetsFile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ddPresetsFile, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ddPresetsFile, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ddPresetsFile, lv_color_hex(0x8F8C8C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ddPresetsFile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnPresetTx = lv_btn_create(ui_scrPresets);
    lv_obj_set_width(ui_btnPresetTx, 160);
    lv_obj_set_height(ui_btnPresetTx, 50);
    lv_obj_set_x(ui_btnPresetTx, 62);
    lv_obj_set_y(ui_btnPresetTx, 82);
    lv_obj_set_align(ui_btnPresetTx, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnPresetTx, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnPresetTx, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnPresetTx, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnPresetTx, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btnPresetTx, lv_color_hex(0x00AFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btnPresetTx, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_btnPresetTx, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetTx = lv_label_create(ui_btnPresetTx);
    lv_obj_set_width(ui_lblPresetTx, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetTx, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetTx, -1);
    lv_obj_set_y(ui_lblPresetTx, 2);
    lv_obj_set_align(ui_lblPresetTx, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetTx, "TRANSMIT SUB");
    lv_obj_set_style_text_font(ui_lblPresetTx, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnPresetTesla = lv_btn_create(ui_scrPresets);
    lv_obj_set_width(ui_btnPresetTesla, 75);
    lv_obj_set_height(ui_btnPresetTesla, 50);
    lv_obj_set_x(ui_btnPresetTesla, -100);
    lv_obj_set_y(ui_btnPresetTesla, 82);
    lv_obj_set_align(ui_btnPresetTesla, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnPresetTesla, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnPresetTesla, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnPresetTesla, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnPresetTesla, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btnPresetTesla, lv_color_hex(0x00AFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btnPresetTesla, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_btnPresetTesla, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblPresetTesla = lv_label_create(ui_btnPresetTesla);
    lv_obj_set_width(ui_lblPresetTesla, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblPresetTesla, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblPresetTesla, -1);
    lv_obj_set_y(ui_lblPresetTesla, 2);
    lv_obj_set_align(ui_lblPresetTesla, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblPresetTesla, "TESLA\nUS/EU");
    lv_obj_set_style_text_font(ui_lblPresetTesla, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnPresetsOk, ui_event_btnPresetsOk, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ddPresetsFolder, ui_event_ddPresetsFolder, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ddPresetsFile, ui_event_ddPresetsFile, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnPresetTx, ui_event_btnPresetTx, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnPresetTesla, ui_event_btnPresetTesla, LV_EVENT_ALL, NULL);

}
