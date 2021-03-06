//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface HUPieActivityIndicatorView : UIView
{
    double _expectedTimeToCompletion;
    CAShapeLayer *_progressArcLayer;
    CAShapeLayer *_circleOutlineLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleOutlineLayer; // @synthesize circleOutlineLayer=_circleOutlineLayer;
@property(retain, nonatomic) CAShapeLayer *progressArcLayer; // @synthesize progressArcLayer=_progressArcLayer;
@property(nonatomic) double expectedTimeToCompletion; // @synthesize expectedTimeToCompletion=_expectedTimeToCompletion;
- (void).cxx_destruct;
- (void)_updateColors;
- (void)_fadeOut;
- (void)_updatePaths;
- (void)startWithFuture:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

