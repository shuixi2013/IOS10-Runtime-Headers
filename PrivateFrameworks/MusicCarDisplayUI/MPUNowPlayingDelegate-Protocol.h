//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MPUNowPlayingController, NSDictionary, NSString;

@protocol MPUNowPlayingDelegate <NSObject>

@optional
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingApplicationDidChange:(NSString *)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)nowPlayingController:(MPUNowPlayingController *)arg1 nowPlayingInfoDidChange:(NSDictionary *)arg2;
- (void)nowPlayingControllerDidStopListeningForNotifications:(MPUNowPlayingController *)arg1;
- (void)nowPlayingControllerDidBeginListeningForNotifications:(MPUNowPlayingController *)arg1;
@end

