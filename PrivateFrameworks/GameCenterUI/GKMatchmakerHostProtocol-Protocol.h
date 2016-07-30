//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKServiceViewControllerDelegate-Protocol.h>

@class GKMatchRequestInternal, GKPlayerInternal, NSArray, NSData, NSError;

@protocol GKMatchmakerHostProtocol <GKServiceViewControllerDelegate>
- (void)setBrowsingForNearbyPlayers:(_Bool)arg1;
- (void)cancelMatching;
- (void)sendData:(NSData *)arg1;
- (void)cancelPendingInviteToPlayer:(GKPlayerInternal *)arg1;
- (void)startMatchingWithRequest:(GKMatchRequestInternal *)arg1;
- (void)setShareInvitees:(NSArray *)arg1;
- (void)shareMatchWithRequest:(GKMatchRequestInternal *)arg1 handler:(void (^)(NSURL *, NSError *))arg2;
- (void)finishWithError:(NSError *)arg1;
@end

