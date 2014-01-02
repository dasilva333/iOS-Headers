/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSDiscardableContent-Protocol.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TSPComponentExternalReferenceMap, TSPObject;

// Not exported
@interface TSPComponent : NSObject <NSCopying, NSDiscardableContent>
{
    int _accessCount;
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSMutableSet *_dataReferences;
    struct {
        unsigned int usesDelayedArchiving:1;
        unsigned int allowsDuplicatesOutsideOfDocumentPackage:1;
        unsigned int dirtiesDocumentPackage:1;
        unsigned int modified:1;
        unsigned int persisted:1;
        unsigned int isStoredOutsideObjectArchive:1;
        unsigned int packageIdentifier:2;
    } _flags;
    TSPComponent *_originalDocumentComponent;
}

@property(readonly, nonatomic) TSPComponent *originalDocumentComponent; // @synthesize originalDocumentComponent=_originalDocumentComponent;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateDataReferences:(id)arg1;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (_Bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(_Bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(id)arg1;
@property(readonly, nonatomic) _Bool isTransientComponent;
@property(readonly) _Bool needsArchiving;
- (_Bool)needsArchivingImpl;
@property(readonly) _Bool persisted;
- (void)willDiscardComponent;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(_Bool)arg4 rootObjectOrNil:(id)arg5 externalReferenceMap:(id)arg6 dataReferences:(id)arg7 readVersion:(unsigned long long)arg8 writeVersion:(unsigned long long)arg9 wasCopied:(_Bool)arg10 wasModifiedDuringWrite:(_Bool)arg11;
- (void)setModifiedImpl:(_Bool)arg1 forObject:(id)arg2;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2;
@property(readonly) _Bool modified;
- (_Bool)dirtiesDocumentPackageQueryingRootObject:(_Bool)arg1;
- (_Bool)allowsDuplicatesOutsideOfDocumentPackageQueryingRootObject:(_Bool)arg1;
- (void)updateComponentPropertiesUsingRootObjectOrNil:(id)arg1;
@property(readonly) unsigned char packageIdentifier;
@property(readonly, nonatomic) _Bool isStoredOutsideObjectArchive;
- (void)setLocator:(id)arg1;
@property(readonly, nonatomic) NSString *locator;
- (_Bool)isContentDiscarded;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (void)discardContentIfPossible;
@property(retain) TSPObject *rootObject;
- (_Bool)shouldKeepStrongObjectImpl;
- (_Bool)shouldForceCaching;
- (_Bool)isCachingEnabled;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo *)arg2 packageIdentifier:(unsigned char)arg3 originalDocumentComponent:(id)arg4;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 allowsDuplicatesOutsideOfDocumentPackage:(_Bool)arg6 dirtiesDocumentPackage:(_Bool)arg7;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 allowsDuplicatesOutsideOfDocumentPackage:(_Bool)arg6 dirtiesDocumentPackage:(_Bool)arg7 originalDocumentComponent:(id)arg8;
- (id)init;

@end
