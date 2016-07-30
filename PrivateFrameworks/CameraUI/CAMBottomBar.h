//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMExpandableMenuButtonDelegate-Protocol.h>

@class CAMExpandableMenuButton, CAMFlashButton, CAMFlipButton, CAMHDRButton, CAMImageWell, CAMIrisButton, CAMModeDial, CAMTimerButton, CUShutterButton, UIButton;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate>
{
    long long _layoutStyle;
    long long _backgroundStyle;
    UIView *_backgroundView;
    CUShutterButton *_shutterButton;
    CUShutterButton *_stillDuringVideoButton;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    UIButton *_reviewButton;
    CAMFlipButton *_flipButton;
    CAMFlashButton *_flashButton;
    CAMHDRButton *_HDRButton;
    CAMTimerButton *_timerButton;
    CAMIrisButton *_irisButton;
    CAMExpandableMenuButton *__expandedMenuButton;
}

+ (_Bool)wantsVerticalBarForLayoutStyle:(long long)arg1;
@property(retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property(retain, nonatomic) CAMIrisButton *irisButton; // @synthesize irisButton=_irisButton;
@property(retain, nonatomic) CAMTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) CAMHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property(retain, nonatomic) CAMFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) UIButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property(retain, nonatomic) CAMImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property(retain, nonatomic) CAMModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property(retain, nonatomic) CUShutterButton *stillDuringVideoButton; // @synthesize stillDuringVideoButton=_stillDuringVideoButton;
@property(retain, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (id)_currentMenuButtons;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(long long)arg1;
- (void)_layoutImageWellForLayoutStyle:(long long)arg1;
- (void)_layoutModeDialForLayoutStyle:(long long)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateImageWellTappableEdgeInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1;

@end

