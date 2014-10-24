//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptCanvasFunction, SUScriptFunction, SUScriptViewController, SUScriptWindowContext, WebScriptObject;

@interface SUScriptWindow : SUScriptObject
{
    SUScriptViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    SUScriptWindowContext *_context;
    SUScriptViewController *_frontViewController;
    id _height;
    SUScriptCanvasFunction *_maskFunction;
    id _shadowOpacity;
    id _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id _width;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)dismissWindowsWithOptions:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_registerForOverlayNotifications;
- (id)_overlayViewController:(BOOL)arg1;
- (id)_newOverlayTransitionWithOptions:(id)arg1;
- (id)_copySafeTransitionOptionsFromOptions:(id)arg1;
- (id)_backgroundViewController:(BOOL)arg1;
- (struct CGSize)_overlaySize;
- (void)_overlayDidShowNotification:(id)arg1;
- (void)_overlayDidFlipNotification:(id)arg1;
- (void)_overlayDidDismissNotification:(id)arg1;
@property(readonly) SUScriptViewController *windowParentViewController;
@property(retain) NSNumber *width;
@property(readonly) NSString *style;
@property(retain) WebScriptObject *shouldDismissFunction;
@property(retain) NSNumber *shadowRadius;
@property(retain) NSNumber *shadowOpacity;
@property(retain) SUScriptViewController *frontViewController;
@property(retain) WebScriptObject *maskFunction;
@property(retain) NSNumber *height;
@property(copy) id canSwipeToDismiss;
@property(retain) SUScriptViewController *backViewController;
- (id)_className;
- (void)show:(id)arg1;
- (void)flip:(id)arg1;
- (void)dismiss:(id)arg1;
@property(readonly) SUScriptWindowContext *context; // @synthesize context=_context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
