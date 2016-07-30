//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKFriendRequestComposeHostProtocol-Protocol.h>
#import <GameCenterUI/GKFriendRequestComposeServiceProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKFriendRequestExtensionHostContext : GKExtensionHostContext <GKFriendRequestComposeHostProtocol, GKFriendRequestComposeServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)didRequestFriends:(id)arg1;
- (void)setDefaultMessage:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientPlayerInternals:(id)arg1;
- (id)extensionObjectProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

