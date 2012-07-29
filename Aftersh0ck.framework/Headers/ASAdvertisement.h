/**
 * Aftersh0ck Framework
 * Advertisement Class - BG Image, Text
 *
 * ReverseEffect Applications, LLC - 2012
 * Redistribution prohibited by all means
**/

#import <UIKit/UIKit.h>

@interface ASAdvertisement : UIView {
      UILabel *label;

      UIImage *bgImage;
      NSString *adText;

      UIImageView *iview;
}

- (id)initWithMessage:(NSString *)message image:(UIImage *)image;

//Set a new message for the banner ad
- (void)setMessage:(NSString *)message;

//Give the label's text a new color
- (void)setMessageColor:(UIColor *)color;

//Set a new Ad image
- (void)setImage:(UIImage *)image;

//destroy the banner
- (void)destroyBanner;

//DO NOT CALL! Called by destroyBanner...
- (void)deallocateSubviews;

@property (readwrite, retain) UIImage *bgImage;
@property (readwrite, copy) NSString *adText;
@end