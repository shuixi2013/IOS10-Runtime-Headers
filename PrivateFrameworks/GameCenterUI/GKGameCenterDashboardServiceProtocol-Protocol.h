//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKRemoteViewControllerDelegate-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol GKGameCenterDashboardServiceProtocol <GKRemoteViewControllerDelegate>

@optional
- (void)hostDidParseDashboardImageNames:(NSDictionary *)arg1 leaderboardSetNames:(NSDictionary *)arg2 leaderboardNames:(NSDictionary *)arg3;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingPlayForChallenge:(_Bool)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(NSNumber *)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(NSString *)arg1;
- (void)hostDidChangeViewState:(NSNumber *)arg1;
@end
