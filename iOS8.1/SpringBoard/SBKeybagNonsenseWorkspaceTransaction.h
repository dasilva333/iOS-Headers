//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBRelaunchAppWorkspaceTransaction.h"

@class SBUIAnimationController, SSKeybagRequest, SSVClaimApplicationsRequest;

@interface SBKeybagNonsenseWorkspaceTransaction : SBRelaunchAppWorkspaceTransaction
{
    SSKeybagRequest *_keybagRequest;
    SSVClaimApplicationsRequest *_claimApplicationsRequest;
    SBUIAnimationController *_zoomDownAnimationController;
    _Bool _keepAliveTillZoomDownFinishes;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)_handleAppRelaunch:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldComplete;
- (void)_completeKeybagRefetchForApp:(id)arg1 relaunch:(_Bool)arg2;
- (void)_endKeybagRefetchAndZoomDownNicely;
- (void)_endAnimation;
- (void)_didComplete;
- (void)_begin;
- (id)_setupAnimationForApp:(id)arg1;
- (_Bool)shouldWatchdog:(id *)arg1;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 application:(id)arg2;

@end

