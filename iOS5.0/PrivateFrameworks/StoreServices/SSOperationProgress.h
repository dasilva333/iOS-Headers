/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSCoding-Protocol.h"

@class NSMutableArray;

@interface SSOperationProgress : NSObject <SSCoding, NSCopying>
{
    BOOL _canPause;
    double _changeRate;
    long long _currentValue;
    struct dispatch_queue_s *_dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    int _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    int _units;
}

- (void)_updateStatisticsFromSnapshots;
- (id)description;
@property int units;
- (void)snapshot;
@property int operationType;
@property long long normalizedMaxValue;
@property long long normalizedCurrentValue;
@property long long maxValue;
@property double estimatedTimeRemaining;
@property long long currentValue;
@property double changeRate;
@property BOOL canPause;
- (void)resetSnapshots;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
