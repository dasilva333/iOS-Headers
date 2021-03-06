/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

@class NSArray, TSPObject<TSDMutableContainerInfo>;

// Not exported
@interface TSDContainerInsertChildrenCommand : TSKCommand
{
    TSPObject<TSDMutableContainerInfo> *mContainer;
    NSArray *mChildren;
    unsigned long long mIndex;
}

@property(readonly, nonatomic) TSPObject<TSDMutableContainerInfo> *container; // @synthesize container=mContainer;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=mChildren;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_do;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (_Bool)process;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 insertingChildren:(id)arg2 atIndex:(unsigned long long)arg3 objectContext:(id)arg4;

@end

