//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MPUIndeterminateProgressIndicatorView : UIView
{
    double _progressLineWidth;
    double _progressGap;
}

@property(nonatomic) double progressGap; // @synthesize progressGap=_progressGap;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
- (void)_updateAnimation;
- (void)_willEnterForeground:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

