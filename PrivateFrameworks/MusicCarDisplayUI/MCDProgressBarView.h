//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MCDProgressBarView : UIView
{
    UIView *_barView;
    UIImageView *_indicatorView;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
- (void).cxx_destruct;
- (void)setIndicatorHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
