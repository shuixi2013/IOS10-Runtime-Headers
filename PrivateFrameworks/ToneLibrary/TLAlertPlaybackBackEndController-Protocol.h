//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, TLAlert;

@protocol TLAlertPlaybackBackEndController
- (void)stopPlayingAlerts:(NSArray *)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)playAlert:(TLAlert *)arg1 withCompletionHandler:(void (^)(long long, NSError *))arg2;
@end

