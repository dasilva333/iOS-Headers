/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSMutableArray;

@interface VMUVMRegionIdentifier : NSObject
{
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
}

- (id)descriptionForRegionTotalsWithOptions:(unsigned int)arg1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned int)arg1;
- (id)descriptionForRange:(struct _VMURange)arg1 options:(unsigned int)arg2;
- (id)descriptionForRange:(struct _VMURange)arg1;
- (id)regions;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;

@end
