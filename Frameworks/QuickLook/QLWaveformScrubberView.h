//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLVideoScrubberView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface QLWaveformScrubberView : QLVideoScrubberView
{
    UIView *_myFilmStripView;
}

+ (_Bool)generateWaveformForWidth:(double)arg1 asset:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
@property(retain) UIView *myFilmStripView; // @synthesize myFilmStripView=_myFilmStripView;
- (void).cxx_destruct;
- (void)_updateFilmStripViewIfNeeded;

@end

