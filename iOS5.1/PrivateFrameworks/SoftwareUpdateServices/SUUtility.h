/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SUUtility : NSObject
{
}

+ (id)prettyPrintDate:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(int)arg2;
+ (id)gregorianCalendar;
+ (id)URLIfFileExists:(id)arg1;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)arg1;
+ (int)translateErrorCodeFromError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (id)translateError:(id)arg1;
+ (void)assignError:(id *)arg1 withError:(id)arg2 translate:(BOOL)arg3;
+ (void)assignError:(id *)arg1 withCode:(int)arg2;
+ (id)errorWithCode:(int)arg1 originalError:(id)arg2;
+ (id)errorWithCode:(int)arg1;
+ (id)currentReleaseType;
+ (id)currentProductBuild;
+ (id)currentProductVersion;
+ (id)currentProductType;
+ (id)currentProductCategory;
+ (id)serialNumber;
+ (BOOL)cellularDataIsEnabled;
+ (BOOL)hasCellularRadio;
+ (BOOL)isCellularDataCapable;
+ (BOOL)isWiFiCapable;
+ (BOOL)isDaemon;
+ (void)setIsDaemon:(BOOL)arg1;
+ (BOOL)isRestoringFromCloud;
+ (struct dispatch_queue_s *)taskQueue;

@end
