//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKGame, GKPlayer, GKScoreInternal, NSDate, NSString;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    _Bool _shouldSetDefaultLeaderboard;
    GKScoreInternal *_internal;
    GKGame *_game;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)reportScores:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(nonatomic) _Bool shouldSetDefaultLeaderboard; // @synthesize shouldSetDefaultLeaderboard=_shouldSetDefaultLeaderboard;
@property(retain) GKScoreInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)reportScoreWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) GKPlayer *player;
@property(readonly, retain) NSString *playerID; // @dynamic playerID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)init;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) unsigned long long context; // @dynamic context;
@property(readonly, retain, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *groupLeaderboardIdentifier; // @dynamic groupLeaderboardIdentifier;
@property(copy, nonatomic) NSString *leaderboardIdentifier; // @dynamic leaderboardIdentifier;
@property(nonatomic) long long rank; // @dynamic rank;
@property(nonatomic) long long value; // @dynamic value;
@property _Bool valueSet; // @dynamic valueSet;

@end

