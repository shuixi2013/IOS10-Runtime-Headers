//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKLocalPlayer.h>

#import <GameCenterUI/GKLocalPlayerAuthenticationUIPersonality-Protocol.h>

@class NSString;

@interface GKLocalPlayer (AuthenticationPrivate) <GKLocalPlayerAuthenticationUIPersonality>
+ (id)sharedLocalPlayerAuthenticator;
+ (void)setAuthenticationPersonality:(id)arg1;
+ (id)authenticationPersonality;
- (void)startLegacyAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)validateAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelAuthentication;
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1;
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1;
- (void)authenticationDidCompleteWithError:(id)arg1;
- (void)startAuthenticationForExistingPrimaryPlayer;
- (void)_showWelcomeBanner;
- (_Bool)isAuthenticating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

