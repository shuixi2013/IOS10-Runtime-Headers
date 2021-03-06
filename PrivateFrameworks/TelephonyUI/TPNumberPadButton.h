//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPNumberPadButtonProtocol-Protocol.h>

@class CALayer, NSString, TPRevealingRingView, UIColor;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    TPRevealingRingView *_revealingRingView;
    unsigned int character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
}

+ (double)unhighlightCrossfadeHighlightFadeDuration;
+ (double)unhighlightCrossfadeNormalFadeDuration;
+ (double)unhighlightCrossfadeHighlightBeginTime;
+ (double)unhighlightCrossfadeNormalBeginTime;
+ (double)highlightCrossfadeHighlightFadeDuration;
+ (double)highlightCrossfadeNormalFadeDuration;
+ (double)highlightCrossfadeHighlightBeginTime;
+ (double)highlightCrossfadeNormalBeginTime;
+ (double)horizontalPadding;
+ (double)verticalPadding;
+ (void)resetLocale;
+ (void)resetLocaleIfNeeded;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2 whiteVersion:(_Bool)arg3;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (_Bool)usesBoldAssets;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(_Bool)arg2;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (struct CGSize)defaultSize;
@property(retain) CALayer *highlightedGlyphLayer; // @synthesize highlightedGlyphLayer=_highlightedGlyphLayer;
@property(retain) CALayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) TPRevealingRingView *revealingRingView; // @synthesize revealingRingView=_revealingRingView;
@property unsigned int character; // @synthesize character;
- (void).cxx_destruct;
- (void)touchCancelled;
- (void)touchUp;
- (void)touchDown;
- (id)defaultColor;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) double alphaOutsideAndInsideRing; // @dynamic alphaOutsideAndInsideRing;
- (void)setUsesColorBurnBlending;
- (void)setUsesColorDodgeBlending;
- (void)loadImagesForCurrentCharacter;
- (id)initForCharacter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

