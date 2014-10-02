//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUMapAnnotationAnimatable.h"

@class NSArray, NSDate, NSMutableSet, NSString, PUMapItem;

@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable>
{
    unsigned int _hash;
    PUMapItem *_mapItem;
    unsigned int _relativeOrder;
    CDStruct_2c43369c _originalCoordinate;
    CDStruct_2c43369c _coordinate;
}

+ (CDUnknownBlockType)annotationSortingComparatorOldestToNewest;
+ (CDUnknownBlockType)annotationSortingComparatorNewestToOldest;
+ (id)compactDescriptionForAnnotations:(id)arg1;
@property(nonatomic) unsigned int relativeOrder; // @synthesize relativeOrder=_relativeOrder;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
- (void).cxx_destruct;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)_dateString;
- (id)compactDescription;
- (int)compare:(id)arg1;
- (void)resetCoordinateToOriginal;
- (BOOL)containsAnnotation:(id)arg1;
- (id)newestMaxMapItems:(unsigned int)arg1;
@property(readonly, nonatomic) NSMutableSet *subAnnotations;
@property(readonly, nonatomic) NSArray *mapItems;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) NSDate *dateCreated;
@property(readonly, nonatomic) NSObject *itemId;
@property(retain, nonatomic) PUMapItem *mapItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;

@end
