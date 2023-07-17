// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#include "../ui.h"

void ui_scrSplash_screen_init(void)
{
    ui_scrSplash = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrSplash, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_add_event_cb(ui_scrSplash, scr_unloaded_delete_cb, LV_EVENT_SCREEN_UNLOADED, &ui_scrSplash);
    lv_obj_set_style_bg_color(ui_scrSplash, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrSplash, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_scrSplash, &ui_img_splashbkgnd2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSplash = lv_label_create(ui_scrSplash);
    lv_obj_set_width(ui_lblSplash, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSplash, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSplash, 0);
    lv_obj_set_y(ui_lblSplash, -151);
    lv_obj_set_align(ui_lblSplash, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSplash, "Status");
    lv_obj_set_style_text_color(ui_lblSplash, lv_color_hex(0xFFBF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSplash, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblSplash, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSplash, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_scrSplash);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 3);
    lv_obj_set_y(ui_Label2, -72);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "TAP ANYWHERE TO BEGIN");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_scrSplash);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, -108);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "VERSION 0.2b");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x11FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblTitle = lv_label_create(ui_scrSplash);
    lv_obj_set_width(ui_lblTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblTitle, -1);
    lv_obj_set_y(ui_lblTitle, -203);
    lv_obj_set_align(ui_lblTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblTitle, "CLIPPER 1");
    lv_obj_set_style_text_color(ui_lblTitle, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblTitle, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_scrSplash, ui_event_scrSplash, LV_EVENT_ALL, NULL);

}
