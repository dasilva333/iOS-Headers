//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID, _ML3DatabaseConnectionSubPool;

@interface ML3DatabaseConnectionPool : NSObject
{
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    int _connectionsProfilingLevel;
    BOOL _useDistantWriterConnections;
    NSString *_databasePath;
    id <ML3DatabaseConnectionPoolDelegate> _delegate;
    unsigned int _maxReaders;
    unsigned int _maxWriters;
    unsigned int _connectionsJournalingMode;
}

@property(nonatomic) unsigned int connectionsJournalingMode; // @synthesize connectionsJournalingMode=_connectionsJournalingMode;
@property(readonly, nonatomic) unsigned int maxWriters; // @synthesize maxWriters=_maxWriters;
@property(readonly, nonatomic) unsigned int maxReaders; // @synthesize maxReaders=_maxReaders;
@property(nonatomic) __weak id <ML3DatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (id)_connectionForIdentifier:(id)arg1;
- (void)closeAllConnections;
- (void)checkInConnection:(id)arg1;
- (id)_connectionForWriting:(BOOL)arg1 useThreadConnection:(BOOL)arg2;
@property(readonly) BOOL isCurrentThreadConnectionInTransaction;
- (id)writerConnection;
- (id)readerConnection;
@property(nonatomic) BOOL useDistantWriterConnections;
@property(nonatomic) int connectionsProfilingLevel;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2 maxWriters:(unsigned int)arg3;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned int)arg2;

@end

