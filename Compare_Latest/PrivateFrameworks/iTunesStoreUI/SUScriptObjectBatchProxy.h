/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject
{
    SUScriptObjectInvocationBatch *_invocationBatch;
    id _target;
}

@property id target; // @synthesize target=_target;
@property SUScriptObjectInvocationBatch *invocationBatch; // @synthesize invocationBatch=_invocationBatch;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
