//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, TSDDrawableInfo, TSPData, TSPObjectContext, TSSTheme, TSUProgress;

__attribute__((visibility("hidden")))
@interface TSDInfoImporter : NSObject
{
    TSPObjectContext *mContext;
    NSURL *mURL;
    TSPData *mImageData;
    TSSTheme *mTheme;
    id <TSDInfoImporterDelegate> mDelegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)p_classForTSPData:(id)arg1;
+ (Class)p_classForURL:(id)arg1;
+ (id)i_supportedFileTypesForSubclass;
+ (id)supportedRemoteURLSchemes;
+ (id)supportedImageFileTypes;
+ (id)supportedFileTypes;
+ (id)p_registeredSubclasses;
@property(nonatomic) id <TSDInfoImporterDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly, nonatomic) TSSTheme *theme; // @synthesize theme=mTheme;
@property(readonly, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=mURL;
@property(readonly, nonatomic) TSPObjectContext *context; // @synthesize context=mContext;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) TSDDrawableInfo *info;
@property(readonly, nonatomic) TSUProgress *progress;
- (void)cancel;
- (void)importInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 imageData:(id)arg2 theme:(id)arg3;
- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

@end

