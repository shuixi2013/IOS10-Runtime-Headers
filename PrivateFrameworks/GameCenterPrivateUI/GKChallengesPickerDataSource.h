//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKFriendsSplittingDataSource.h>

@class GKChallenge;

@interface GKChallengesPickerDataSource : GKFriendsSplittingDataSource
{
    GKChallenge *_challenge;
}

@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
- (_Bool)canSelectPlayerInfo:(id)arg1;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1;

@end

