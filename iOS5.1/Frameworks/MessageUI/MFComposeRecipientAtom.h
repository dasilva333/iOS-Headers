/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFAtomView.h>

@class MFComposeRecipient, UITextInputTraits;

@interface MFComposeRecipientAtom : MFAtomView
{
    id <MFComposeRecipientAtomDelegate> _delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
}

- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 style:(int)arg3;
- (void)dealloc;
@property(readonly, nonatomic) MFComposeRecipient *recipient;
@property(nonatomic) id <MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchAndHold;
- (void)moveLeft;
- (void)moveRight;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;

@end
