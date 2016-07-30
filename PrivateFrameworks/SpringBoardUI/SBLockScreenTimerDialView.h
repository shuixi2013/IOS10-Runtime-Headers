//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUI/SBUILegibility-Protocol.h>

@class NSString, SBUILegibilityView, _UILegibilitySettings;

@interface SBLockScreenTimerDialView : UIView <SBUILegibility>
{
    double _strength;
    _UILegibilitySettings *_legibilitySettings;
    SBUILegibilityView *_dialView;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
- (void).cxx_destruct;
- (id)_imageNameForCurrentContentSize:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_newDialViewForSettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

