/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OAVStroke.h>

@interface OAVStroke (Private)
+ (int)readCompoundType:(id)arg1;
+ (int)readPresetDashStyle:(id)arg1;
+ (int)readLineEndType:(id)arg1;
+ (int)readLineEndWidth:(id)arg1;
+ (int)readLineEndLength:(id)arg1;
+ (int)readCapStyle:(id)arg1;
+ (void)readLineEnd:(id)arg1 type:(id)arg2 width:(id)arg3 length:(id)arg4;
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)targetFgColorWithManager:(id)arg1;
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;
@end

