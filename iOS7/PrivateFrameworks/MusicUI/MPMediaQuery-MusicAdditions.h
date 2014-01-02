/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMediaQuery.h"

@class MPMediaPlaylist, NSString;

@interface MPMediaQuery (MusicAdditions)
+ (id)musicQueryWithFilterPredicates:(id)arg1;
- (id)_music_nowPlayingComparableQuery;
- (void)music_getListingCountFormatString:(id *)arg1 isFallbackFormatString:(_Bool *)arg2;
@property(readonly, nonatomic, getter=music_playlistTitle) NSString *music_playlistTitle;
@property(readonly, nonatomic, getter=music_playlist) MPMediaPlaylist *music_playlist;
- (_Bool)music_isEqualToNowPlayingQuery:(id)arg1;
@end
