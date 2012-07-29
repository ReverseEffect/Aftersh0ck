// aftersh0ck framework
// Developed by: ReverseEffect
// Copyright 2012 ReverseEffect Applications
// 
// ASAlertViewDelayed class
// Delayed dismissal, no button custom alert
// (Modified UIAlertView)

/* 
 * This file is part of the aftersh0ck framework developed by ReverseEffect.
 * Redistribution of these files without permission is prohibited.
*/

#ifndef _aftersh0ck_ASALERTVIEWDELAYED_
#define _aftersh0ck_ASALERTVIEWDELAYED_
#endif

#import <UIKit/UIKit.h>

@interface ASAlertViewDelayed : UIAlertView {
	UILabel *alertTextLabel;
	UILabel *alertTextMessage;
	UIImage *backgroundImage;
}

@property(readwrite, retain) UIImage *backgroundImage;
@property(readwrite, retain) NSString *alertText;
@property(readwrite, retain) NSString *alertMessage;

//- (id) initWithImage:(UIImage *)backgroundImage text:(NSString *)text;

- (id) initWithTitle:(NSString *)title message:(NSString *)message delayDismiss:(CGFloat)delay;
@end
