//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFButton.h>

#import <SpringBoardUI/SBUIControlCenterControl-Protocol.h>

@class NSString, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;
@protocol SBUIControlCenterButtonDelegate;

@interface SBUIControlCenterButton : SBFButton <SBUIControlCenterControl>
{
    struct UIEdgeInsets _bgCapInsets;
    UIVisualEffect *_normalStateEffect;
    UIVisualEffect *_highlightedStateEffect;
    UIVisualEffect *_disabledStateEffect;
    UIImageView *_backgroundImageView;
    UIImageView *_glyphImageView;
    UIVisualEffectView *_backgroundEffectView;
    _Bool _useSmallButton;
    _Bool _isCircleButton;
    _Bool _isRectButton;
    id <SBUIControlCenterButtonDelegate> _delegate;
    UIImage *_normalBGImage;
    UIImage *_sourceGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    NSString *_glyphName;
    double _naturalHeight;
}

+ (id)_buttonWithBGImage:(id)arg1 glyphImage:(id)arg2 naturalHeight:(double)arg3;
+ (id)roundRectButton;
+ (id)circularButton;
+ (id)_roundRectBackgroundImage;
+ (id)_smallCircleBackgroundImage;
+ (id)_circleBackgroundImage;
+ (id)_circleBackgroundImageForSize:(struct CGSize)arg1;
@property(nonatomic) double naturalHeight; // @synthesize naturalHeight=_naturalHeight;
@property(copy, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
@property(retain, nonatomic) UIImage *sourceSelectedGlyphImage; // @synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage;
@property(retain, nonatomic) UIImage *sourceGlyphImage; // @synthesize sourceGlyphImage=_sourceGlyphImage;
@property(retain, nonatomic) UIImage *normalBGImage; // @synthesize normalBGImage=_normalBGImage;
@property(nonatomic) _Bool isRectButton; // @synthesize isRectButton=_isRectButton;
@property(nonatomic) _Bool isCircleButton; // @synthesize isCircleButton=_isCircleButton;
@property(nonatomic) _Bool useSmallButton; // @synthesize useSmallButton=_useSmallButton;
@property(nonatomic) __weak id <SBUIControlCenterButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateForReduceTransparencyChange;
- (void)_updateEffects;
- (void)didMoveToSuperview;
- (void)setEnabled:(_Bool)arg1;
- (void)_pressAction;
- (void)setBackgroundImage:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 naturalHeight:(double)arg2;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 name:(id)arg3;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_updateForStateChange;
- (void)_updateBackgroundForStateChange;
- (void)_updateGlyphForStateChange;
- (id)_glyphImageForState:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (long long)_currentState;
- (_Bool)_drawingAsSelected;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_rectForGlyph:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)_backgroundImageWithGlyphImage:(id)arg1 state:(long long)arg2;
- (id)_backgroundImage;
- (id)_controlStateStringFromState:(long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

