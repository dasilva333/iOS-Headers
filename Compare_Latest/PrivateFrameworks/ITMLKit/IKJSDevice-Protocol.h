//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSNumber, NSString;

@protocol IKJSDevice <JSExport>
@property(readonly, nonatomic) BOOL isInRetailDemoMode;
@property(readonly, nonatomic) NSNumber *pixelRatio;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
@property(readonly, nonatomic) NSString *vendorID;
- (NSNumber *)capacity:(NSString *)arg1;
@end
