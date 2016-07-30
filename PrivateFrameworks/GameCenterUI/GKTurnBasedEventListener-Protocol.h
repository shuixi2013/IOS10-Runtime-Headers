//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GKPlayer, GKTurnBasedExchange, GKTurnBasedMatch, NSArray;

@protocol GKTurnBasedEventListener

@optional
- (void)player:(GKPlayer *)arg1 didRequestMatchWithPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 wantsToQuitMatch:(GKTurnBasedMatch *)arg2;
- (void)player:(GKPlayer *)arg1 receivedExchangeReplies:(NSArray *)arg2 forCompletedExchange:(GKTurnBasedExchange *)arg3 forMatch:(GKTurnBasedMatch *)arg4;
- (void)player:(GKPlayer *)arg1 receivedExchangeCancellation:(GKTurnBasedExchange *)arg2 forMatch:(GKTurnBasedMatch *)arg3;
- (void)player:(GKPlayer *)arg1 receivedExchangeRequest:(GKTurnBasedExchange *)arg2 forMatch:(GKTurnBasedMatch *)arg3;
- (void)player:(GKPlayer *)arg1 matchEnded:(GKTurnBasedMatch *)arg2;
- (void)player:(GKPlayer *)arg1 receivedTurnEventForMatch:(GKTurnBasedMatch *)arg2 didBecomeActive:(_Bool)arg3;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithOtherPlayers:(NSArray *)arg2;
@end

