//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer
{
    _Bool _timerOn;
    long long _delayIndex;
    unsigned long long _numberOfTouchesRequired;
    double _force;
    unsigned long long _changeCount;
}

+ (double)delayForRepeatNumber:(long long)arg1;
@property(nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(readonly, nonatomic) double _force; // @synthesize _force;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
- (void)_finishNextStep:(id)arg1;
- (void)_nextStep:(id)arg1;
- (void)_scheduleNextTimer;
- (void)_clearTapTimer;
- (void)_cancelPress;
- (void)_endPress;
- (void)_changePress;
- (void)_beginPress;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)setView:(id)arg1;
- (_Bool)_shouldReceivePress:(id)arg1;
@property(nonatomic, setter=_setButtonType:) long long _buttonType;
- (void)dealloc;

@end

