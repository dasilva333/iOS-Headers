/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSInvocation;

@interface AKDeferredReply : NSObject
{
    NSInvocation *_invocation;
    NSConditionLock *_blockingLock;
}

+ (void)initialize;
+ (id)currentReply;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1 andBlockingLock:(id)arg2;
- (id)init;
- (void)sendReply;
- (void)setReturnValue:(void *)arg1;
- (id)invocation;
- (void)resignCurrentReply;
- (void)becomeCurrentReply;

@end
