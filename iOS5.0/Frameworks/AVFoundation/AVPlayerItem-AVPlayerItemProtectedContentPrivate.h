/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVPlayerItem.h>

@class NSDate;

@interface AVPlayerItem (AVPlayerItemProtectedContentPrivate)
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
@property(nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
@property(readonly, nonatomic, getter=_isRental) BOOL _rental;
@property(readonly, nonatomic) NSDate *_rentalStartDate;
@property(readonly, nonatomic) NSDate *_rentalExpirationDate;
@property(readonly, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;
@property(readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property(readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@end
