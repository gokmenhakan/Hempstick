/*
 * conf_usb.c
 *
 * Created: 6/22/2013 8:28:32 AM
 *  Author: Jonah Tsai
 */ 

#include "joystick/udi_hid_joystick.h"

#ifdef __cplusplus
extern "C" {
#endif

//! HID report descriptor for standard HID mouse
UDC_DESC_STORAGE udi_hid_joystick_report_desc_t udi_hid_joystick_report_desc = {
	{
		0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
		0x09, 0x04,                    // USAGE (Joystick)
		0xa1, 0x01,                    // COLLECTION (Application)
		0x05, 0x09,                    //   USAGE_PAGE (Button)
		0x19, 0x01,                    //   USAGE_MINIMUM (Button 1)
		0x29, 0x3f,                    //   USAGE_MAXIMUM (Button 63)
		0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
		0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
		0x35, 0x00,                    //   PHYSICAL_MINIMUM (0)
		0x45, 0x01,                    //   PHYSICAL_MAXIMUM (1)
		0x75, 0x01,                    //   REPORT_SIZE (1)
		0x95, 0x40,                    //   REPORT_COUNT (64)
		0x81, 0x22,                    //   INPUT (Data,Var,Abs,NPrf)
		0x05, 0x01,                    //   USAGE_PAGE (Generic Desktop)
		0x09, 0x39,                    //   USAGE (Hat switch)
		0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
		0x25, 0x07,                    //   LOGICAL_MAXIMUM (7)
		0x75, 0x08,                    //   REPORT_SIZE (8)
		0x95, 0x01,                    //   REPORT_COUNT (1)
		0x81, 0x62,                    //   INPUT (Data,Var,Abs,NPrf,Null)
		0x09, 0x30,                    //   USAGE (X)
		0x09, 0x31,                    //   USAGE (Y)
		0x09, 0x32,                    //   USAGE (Z)
		0x09, 0x33,                    //   USAGE (Rx)
		0x09, 0x34,                    //   USAGE (Ry)
		0x09, 0x35,                    //   USAGE (Rz)
		0x09, 0x36,                    //   USAGE (Slider)
		0x09, 0x37,                    //   USAGE (Dial)
		0x35, 0x00,                    //   PHYSICAL_MINIMUM (0)
		0x46, 0xff, 0x3f,              //   PHYSICAL_MAXIMUM (16383)
		0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
		0x26, 0xff, 0x3f,              //   LOGICAL_MAXIMUM (16383)
		0x75, 0x10,                    //   REPORT_SIZE (16)
		0x95, 0x08,                    //   REPORT_COUNT (8)
		0x81, 0x22,                    //   INPUT (Data,Var,Abs,NPrf)
		0xc0                           // END_COLLECTION
	}
};

#ifdef __cplusplus
}
#endif