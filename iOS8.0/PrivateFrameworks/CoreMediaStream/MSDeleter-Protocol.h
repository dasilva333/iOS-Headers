//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol MSDeleter <NSObject>
@property(nonatomic) id <MSDeleterDelegate> delegate;
- (void)performOutstandingActivities;
- (void)stop;
- (void)abort;
- (void)deleteAssetCollections:(NSArray *)arg1;
@end
