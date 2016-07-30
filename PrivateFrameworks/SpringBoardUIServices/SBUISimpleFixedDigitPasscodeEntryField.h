//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class NSMutableArray, UIView;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_characterIndicatorsContainerView;
    NSMutableArray *_characterIndicators;
    double _backgroundAlpha;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)_entryFieldPaddingOutsideRing;
- (struct CGRect)_entryFieldBoundsWithXOffset:(double)arg1;
- (void)_autofillForMesaWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_viewSize;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (_Bool)_hasAnyCharacters;
- (void)_setLuminosityBoost:(double)arg1;
- (void)_deleteLastCharacter;
- (void)_appendString:(id)arg1;
- (void)layoutSubviews;
- (void)reset;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

