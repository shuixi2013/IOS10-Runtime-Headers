//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HDFitnessFriendsServerInterface <NSObject>
- (void)remote_clearFriendListWithCompletion:(void (^)(_Bool))arg1;
- (void)remote_fitnessFriendsCloudKitAccountStatusWithCompletion:(void (^)(_Bool, _Bool, NSError *))arg1;
- (void)remote_fetchAllDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchSharedDataWithCompletion:(void (^)(_Bool, NSError *, NSArray *))arg1;
- (void)remote_pushFakeDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setMuteEnabled:(_Bool)arg1 forFriendWithUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setActivityDataVisible:(_Bool)arg1 toFriendWithUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_sendInviteResponse:(long long)arg1 toFriendWithUUID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_sendInviteRequestToDestination:(NSString *)arg1 addressBookGUID:(NSString *)arg2 serviceIdentifier:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

