//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GKObserverTrampoline : NSObject
{
    id _observee;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    int _cancellationPredicate;
    unsigned int _options;
}

- (void)dealloc;
- (void)cancelObservation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) id token;
- (void)startObserving;
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;

@end

