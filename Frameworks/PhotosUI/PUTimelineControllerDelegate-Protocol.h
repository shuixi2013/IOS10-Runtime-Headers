//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUTimelineController, PUTimelineScrubberView;

@protocol PUTimelineControllerDelegate <NSObject>
- (void)timelineController:(PUTimelineController *)arg1 uninstallScrubberView:(PUTimelineScrubberView *)arg2;
- (void)timelineController:(PUTimelineController *)arg1 installScrubberView:(PUTimelineScrubberView *)arg2;
@end
