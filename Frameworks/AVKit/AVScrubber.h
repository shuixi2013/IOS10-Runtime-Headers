//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class AVLoadedTimeRangesView, AVRateBubbleView, NSArray, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface AVScrubber : UISlider
{
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    UIImageView *_thumbView;
    double _touchLocationOffsetFromThumbViewCenter;
    double _beginTouchLocationInViewY;
    AVRateBubbleView *_rateBubbleView;
    float _rate;
    long long _scrubbingSpeed;
}

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;
@property(nonatomic) long long scrubbingSpeed; // @synthesize scrubbingSpeed=_scrubbingSpeed;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;
- (void)_initSubviews;
- (id)createThumbView;
@property(readonly, nonatomic) NSString *localizedScrubbingSpeedName;
@property(readonly, nonatomic, getter=isPreciseScrubbingFeasible) _Bool preciseScrubbingFeasible;
@property(retain, nonatomic) NSArray *loadedTimeRanges;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

