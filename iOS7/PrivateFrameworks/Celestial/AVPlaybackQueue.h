/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject
{
    id _delegate;
    AVQueue *_avItemQueue;
    NSMutableArray *_pbItemQueue;
    struct OpaqueFigPlayer *_figPlayer;
    int _ignoreAVQueueModifications;
    _Bool _hasBuiltPlaybackQueue;
    _Bool _waitingToAddFirstItem;
    int _avQueueTransactionCount;
    long long _repeatMode;
}

- (void)playbackItemInspectionComplete:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (void)playbackItemWasRemovedFromPlayQueue:(id)arg1;
- (void)scheduleRemoveItemsNoLongerInPlayQueue;
- (void)removeItemsNoLongerInPlayQueue;
- (void)queueItemWillBeRemovedNotification:(id)arg1;
- (void)queueItemWasAddedNotification:(id)arg1;
- (void)endAVQueueTransaction;
- (void)beginAVQueueTransaction;
- (void)updateBookmarkTimesIncludeFirst:(_Bool)arg1 updateFirst:(_Bool)arg2;
- (void)setRepeatMode:(long long)arg1;
- (id)currentPlaybackItem;
- (void)ensurePlaybackQueue;
- (void)setAVItemQueue:(id)arg1;
- (void)fillInPBItemQueue;
- (void)clearPBItemQueueFromIndex:(int)arg1;
- (void)checkQueueConsistency;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 figPlayer:(struct OpaqueFigPlayer *)arg2;

@end

