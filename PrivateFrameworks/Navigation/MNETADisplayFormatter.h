//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNWeakTimer, NSDate, NSTimeZone;
@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject
{
    id <MNETADisplayFormatterDelegate> _delegate;
    double _remainingTime;
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
    double _displayRemainingTime;
    NSDate *_displayETA;
}

@property(readonly, nonatomic) NSDate *displayETA; // @synthesize displayETA=_displayETA;
@property(readonly, nonatomic) double displayRemainingTime; // @synthesize displayRemainingTime=_displayRemainingTime;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) __weak id <MNETADisplayFormatterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_displayDateForDate:(id)arg1;
- (double)_displayTimeIntervalForTimeInterval:(double)arg1;
- (void)_updateDisplayETA;
- (void)dealloc;
- (id)initWithTimeZone:(id)arg1;

@end

