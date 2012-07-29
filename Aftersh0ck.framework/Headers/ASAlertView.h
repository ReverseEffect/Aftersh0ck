// aftersh0ck framework
// Developed by: ReverseEffect
// Copyright 2012 ReverseEffect Applications
//
// ASAlertView class
// User-dismissed, custom UIAlertViews
// (Modified UIAlertView)

/* 
 * This file is part of the aftersh0ck framework developed by ReverseEffect.
 * Redistribution of these files without permission is prohibited.
*/

#ifndef _aftersh0ck_ASALERTVIEW_
#define _aftersh0ck_ASALERTVIEW_
#endif

#import <UIKit/UIKit.h>

@interface ASAlertView : UIAlertView {
	UILabel *alertTextLabel;
	UILabel *alertTextMessage;
	UIImage *backgroundImage;
}

@property(readwrite, retain) UIImage *backgroundImage;
@property(readwrite, retain) NSString *alertText;
@property(readwrite, retain) NSString *alertMessage;

//- (id) initWithImage:(UIImage *)backgroundImage text:(NSString *)text;

- (id) initWithTitle:(NSString *)title message:(NSString *)message;
@end
