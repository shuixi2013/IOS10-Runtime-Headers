//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class ISPlaybackStateTransitionManager;

@protocol ISPlaybackStateTransitionManagerDelegate <NSObject>

@optional
- (void)transitionManager:(ISPlaybackStateTransitionManager *)arg1 didEndTransitionToPlaybackState:(long long)arg2 forRequestID:(long long)arg3 finished:(_Bool)arg4;
@end

