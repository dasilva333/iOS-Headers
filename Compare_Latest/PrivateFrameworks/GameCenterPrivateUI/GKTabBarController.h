//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

@class GKBubbleFlowRootViewController, NSArray;

@interface GKTabBarController : UITabBarController
{
    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;
    unsigned int _deferedRotationCount;
}

@property(nonatomic) unsigned int deferedRotationCount; // @synthesize deferedRotationCount=_deferedRotationCount;
@property(retain, nonatomic) GKBubbleFlowRootViewController *bubbleFlowRootViewController; // @synthesize bubbleFlowRootViewController=_bubbleFlowRootViewController;
- (CDUnknownBlockType)deferRotation;
- (BOOL)shouldAutorotate;
- (void)clearInterstitialViewAnimated:(BOOL)arg1;
- (void)showInterstitialViewAnimated:(BOOL)arg1;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;
- (BOOL)_isBeingCoveredByBubbleFlowRootViewController;
- (id)viewControllers;
- (BOOL)_hasBubbleFlowRootViewController;
- (BOOL)_useBubbleFlowRootViewControllerToPresent:(id)arg1;
@property(readonly, nonatomic) BOOL tabBarCovered;
@property(readonly, nonatomic) NSArray *modalChildViewControllers;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)init;

@end
