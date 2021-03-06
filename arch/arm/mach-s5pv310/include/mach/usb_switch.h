#ifndef __USB_SWITCH_H__
#define __USB_SWITCH_H__

enum usb_path_t {
	USB_PATH_NONE = 0,
	USB_PATH_ADCCHECK = (1 << 28),
	USB_PATH_TA = (1 << 24),
	USB_PATH_CP = (1 << 20),
	USB_PATH_OTG = (1 << 16),
	USB_PATH_HOST = (1 << 12)
};

extern int usb_switch_lock(void);

extern int usb_switch_trylock(void);

extern void usb_switch_unlock(void);

extern void usb_switch_set_path(enum usb_path_t path);
extern void usb_switch_clr_path(enum usb_path_t path);

#endif
