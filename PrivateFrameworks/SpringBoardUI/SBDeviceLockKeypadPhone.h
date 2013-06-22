/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockKeypad.h>

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad
{
    UIButton *_emergencyCallButton;
    UIButton *_poundButton;
    UIImage *_deleteIcon;
}

+ (id)pressedImage;
+ (id)keypadImage;
- (void)_updateCancelAndDeleteButtons;
- (BOOL)emergencyKeyChar;
- (BOOL)cancelKeyChar;
- (BOOL)deleteKeyChar;
- (void)setDeleteEnabled:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (float)_yFudge;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

