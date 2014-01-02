/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDSDaemonProtocol <NSObject>

@optional
- (void)setListenerCapabilities:(unsigned int)arg1;
- (void)setListenerCommands:(id)arg1;
- (void)setListenerServices:(id)arg1;
- (void)acknowledgeMessageWithGUID:(id)arg1;
- (void)acknowledgeOutgoingMessageWithGUID:(id)arg1;
- (void)requestKeepAlive;
- (void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3;
- (void)sendMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(_Bool)arg5 dataToEncrypt:(id)arg6 encryptPayload:(_Bool)arg7 wantsResponse:(_Bool)arg8 timeout:(id)arg9 command:(id)arg10 wantsDeliveryStatus:(_Bool)arg11 deliveryStatusContext:(id)arg12 messageUUID:(id)arg13 highPriority:(_Bool)arg14 identifier:(id)arg15;
- (void)deactivateAndPurgeIdentifyForAccount:(id)arg1;
- (void)_reregisterAndReidentify:(id)arg1 account:(id)arg2;
- (void)unregisterAccount:(id)arg1;
- (void)registerAccount:(id)arg1;
- (void)unvalidateAliases:(id)arg1 forAccount:(id)arg2;
- (void)validateAliases:(id)arg1 forAccount:(id)arg2;
- (void)removeAliases:(id)arg1 fromAccount:(id)arg2;
- (void)addAliases:(id)arg1 toAccount:(id)arg2;
- (void)validateProfileForAccount:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3;
- (void)passwordUpdatedForAccount:(id)arg1;
- (void)authenticateAccount:(id)arg1;
- (void)authenticationChangedForAccount:(id)arg1;
- (void)passwordChanged:(id)arg1 forAccount:(id)arg2;
- (void)authTokenChanged:(id)arg1 forAccount:(id)arg2;
- (void)setLoginID:(id)arg1 forAccount:(id)arg2;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)updateAccount:(id)arg1 withAccountInfo:(id)arg2;
- (void)_removeAndDeregisterAccount:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5;
- (void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7;
@end
