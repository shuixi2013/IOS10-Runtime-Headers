//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumberFormatter, NSOperationQueue, NSTimer, SKUIClientContext, SKUICountdown, SKUICountdownViewTimerTarget, UIImage, UIImageView, UILabel;

@interface SKUICountdownView : UIView
{
    SKUIClientContext *_clientContext;
    SKUICountdown *_countdown;
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    double _factor;
}

@property(readonly, nonatomic) SKUICountdown *countdown; // @synthesize countdown=_countdown;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;
- (void)_currentRemainingDays:(long long *)arg1 hours:(long long *)arg2 minutes:(long long *)arg3 seconds:(long long *)arg4;
- (long long)_currentValue;
- (void)_reloadFontSizes;
- (void)_reloadTimeFlapped;
- (void)_reloadTime;
- (void)_reloadDateDescriptions:(_Bool)arg1;
- (void)_reloadNumberFlapped;
- (void)_reloadNumber;
- (void)_reload;
- (id)_newNumberSeparatorLabel;
- (id)_newDateDescriptionLabel;
- (id)_newFlapLabelWithPosition:(long long)arg1;
- (id)_newDateLabel;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)stop;
- (void)start;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)dealloc;
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;

@end

