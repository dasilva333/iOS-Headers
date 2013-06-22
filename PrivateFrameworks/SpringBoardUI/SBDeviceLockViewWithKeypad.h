/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockView.h>

#import "TPDialerKeypadDelegate-Protocol.h"

@class SBDeviceLockKeypad;

@interface SBDeviceLockViewWithKeypad : SBDeviceLockView <TPDialerKeypadDelegate>
{
    SBDeviceLockKeypad *_keypad;
    BOOL _cancelingTouches;
}

- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
- (void)deviceLockEntryFieldDidAcceptEntry:(id)arg1;
- (void)deviceLockEntryFieldTextDidChange:(id)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (void)setPlaysKeyboardClicks:(BOOL)arg1;
- (BOOL)playsKeyboardClicks;
- (void)setPasscode:(id)arg1;
- (id)keypadView;
- (void)dealloc;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;

@end

