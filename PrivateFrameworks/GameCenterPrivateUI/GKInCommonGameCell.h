//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell
{
    GKGameRecord *_localPlayerGameRecord;
}

@property(retain, nonatomic) GKGameRecord *localPlayerGameRecord; // @synthesize localPlayerGameRecord=_localPlayerGameRecord;
- (void)prepareForReuse;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (void)didUpdateModel;
- (void)dealloc;

@end

