/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPImageCacheRequest.h>

@class MPMediaItem, NSString;

@interface MPMediaItemImageRequest : MPImageCacheRequest
{
    NSString *_artworkCacheID;
    int _artworkFormat;
    MPMediaItem *_mediaItem;
    int _placeHolderMediaType;
    double _retrievalTime;
    BOOL _usePlaceholderAsFallback;
    BOOL _crop;
    BOOL _fillToSquareAspectRatio;
}

@property(nonatomic) int placeHolderMediaType; // @synthesize placeHolderMediaType=_placeHolderMediaType;
@property(nonatomic) BOOL usePlaceholderAsFallback; // @synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback;
@property(nonatomic) double retrievalTime; // @synthesize retrievalTime=_retrievalTime;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) BOOL fillToSquareAspectRatio; // @synthesize fillToSquareAspectRatio=_fillToSquareAspectRatio;
@property(nonatomic) BOOL crop; // @synthesize crop=_crop;
@property(nonatomic) int artworkFormat; // @synthesize artworkFormat=_artworkFormat;
@property(copy, nonatomic) NSString *artworkCacheID; // @synthesize artworkCacheID=_artworkCacheID;
- (void)composeUniqueKey;
- (id)uniqueKey;
- (id)copyRawImageReturningError:(id *)arg1;
- (id)placeholderImage;
- (void)dealloc;
- (void)setRetrievalTimeForPlaybackTime:(double)arg1;
- (id)initWithMediaItem:(id)arg1;

@end

