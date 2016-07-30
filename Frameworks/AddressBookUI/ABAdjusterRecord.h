//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, UIScrollView;

@interface ABAdjusterRecord : NSObject
{
    UIScrollView *_scrollView;
    double _adjustment;
    _Bool _manuallyAdjusted;
    NSTimer *_delayedScrollTimer;
}

+ (id)recordWithScrollView:(id)arg1;
@property(retain, nonatomic) NSTimer *delayedScrollTimer; // @synthesize delayedScrollTimer=_delayedScrollTimer;
@property(nonatomic) _Bool manuallyAdjusted; // @synthesize manuallyAdjusted=_manuallyAdjusted;
@property(nonatomic) double adjustment; // @synthesize adjustment=_adjustment;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)cancelDelayedAdjustments;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

