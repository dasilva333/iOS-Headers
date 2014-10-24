//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutConstraint.h"

@class NSString;

@interface RCContentSizeLayoutConstraint : NSLayoutConstraint
{
    id _autoitem;
    id _preferredContentSizeDidChangeObserver;
    BOOL _isConstantUpdatingConstraint;
    float _textStyleDefaultBodyLeading;
    BOOL _autoUpdatingConstantShrinks;
    float _defaultConstant;
    float _additionalConstant;
    NSString *_textStyle;
    CDUnknownBlockType _constantLoadingBlock;
}

+ (float)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForView:(id)arg1 attribute:(int)arg2 relation:(int)arg3 toAutoitem:(id)arg4 defaultConstant:(float)arg5;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(int)arg2 toView:(id)arg3 attribute:(int)arg4 defaultConstant:(float)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(float)arg2 constantWidthSizingStringsLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(float)arg2 constantLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(int)arg3 relatedBy:(int)arg4 toItem:(id)arg5 attribute:(int)arg6 multiplier:(float)arg7 defaultConstant:(float)arg8;
+ (id)constraintForAutoitem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 defaultConstant:(float)arg7;
+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(int)arg3 relatedBy:(int)arg4 toItem:(id)arg5 attribute:(int)arg6 multiplier:(float)arg7 defaultConstant:(float)arg8 additionalConstant:(float)arg9 initialize:(BOOL)arg10;
@property(copy, nonatomic) CDUnknownBlockType constantLoadingBlock; // @synthesize constantLoadingBlock=_constantLoadingBlock;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) float additionalConstant; // @synthesize additionalConstant=_additionalConstant;
@property(nonatomic) float defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(nonatomic) BOOL autoUpdatingConstantShrinks; // @synthesize autoUpdatingConstantShrinks=_autoUpdatingConstantShrinks;
- (void).cxx_destruct;
- (void)_reloadPreferredContentSize:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)_forceUpdatePreferredContentSize;
- (float)_defaultConstantByFixingUpDefaultConstant:(float)arg1;
- (void)dealloc;

@end
