/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying>
{
    NSArray *_downloadKinds;
    _Bool _filterExternalOriginatedDownloads;
    NSString *_persistenceIdentifier;
    NSArray *_prefetchedDownloadExternalProperties;
    NSArray *_prefetchedDownloadProperties;
}

@property(nonatomic) _Bool shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_filterExternalOriginatedDownloads;
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties; // @synthesize prefetchedDownloadProperties=_prefetchedDownloadProperties;
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties; // @synthesize prefetchedDownloadExternalProperties=_prefetchedDownloadExternalProperties;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
@property(copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

