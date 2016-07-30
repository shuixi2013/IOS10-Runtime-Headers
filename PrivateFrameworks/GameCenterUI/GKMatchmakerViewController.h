//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/GKMatchDelegate-Protocol.h>

@class GKInvite, GKMatch, GKMatchRequest, GKMatchmakerHostViewController, NSMutableArray, NSString, UIAlertController;
@protocol GKMatchmakerViewControllerDelegate;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate, GKExtensionParentViewControllerProtocol>
{
    _Bool _hosted;
    id <GKMatchmakerViewControllerDelegate> _matchmakerDelegateWeak;
    GKMatchRequest *_matchRequest;
    GKMatchmakerHostViewController *_remoteViewController;
    GKInvite *_acceptedInvite;
    GKMatch *_match;
    NSMutableArray *_hostedPlayers;
    UIAlertController *_alertController;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSMutableArray *hostedPlayers; // @synthesize hostedPlayers=_hostedPlayers;
@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(retain, nonatomic) GKMatchmakerHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic, getter=isHosted) _Bool hosted; // @synthesize hosted=_hosted;
@property(readonly, retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)playersToInvite:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)inviterCancelledNotification:(id)arg1;
- (void)setBrowsingForNearbyPlayers:(_Bool)arg1;
- (void)sendData:(id)arg1;
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)invitedPlayer:(id)arg1 responded:(long long)arg2;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)startMatchingWithRequest:(id)arg1;
- (void)setShareInvitees:(id)arg1;
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createMatchForAcceptedInvite;
- (void)finishWithPlayers;
- (void)finishWithMatch;
- (void)finishWithError:(id)arg1;
- (void)cancelMatching;
- (void)cancel;
- (void)setHostedPlayerReady:(id)arg1;
@property(copy, nonatomic) NSString *defaultInvitationMessage;
- (void)addPlayersToMatch:(id)arg1;
- (void)setHostedPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)setHostedPlayer:(id)arg1 didConnect:(_Bool)arg2;
@property(nonatomic) id <GKMatchmakerViewControllerDelegate> matchmakerDelegate; // @synthesize matchmakerDelegate=_matchmakerDelegateWeak;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)setupNotifications;
- (void)dealloc;
- (id)init;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

