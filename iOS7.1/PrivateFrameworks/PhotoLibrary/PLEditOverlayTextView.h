//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface PLEditOverlayTextView : UIView
{
    UIView *__backgroundView;
    UILabel *__textLabel;
}

@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPLEditOverlayTextViewInitialization;

@end

