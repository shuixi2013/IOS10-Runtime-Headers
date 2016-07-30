//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/UIScrollViewDelegate-Protocol.h>

@class HFWallpaper, NSString, UIButton, UIImageView, UIScrollView, UIVisualEffectView;
@protocol HUWallpaperEditingViewControllerDelegate;

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _statusBarHidden;
    id <HUWallpaperEditingViewControllerDelegate> _delegate;
    HFWallpaper *_wallpaper;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIButton *_cancelButton;
    UIButton *_setButton;
    UIVisualEffectView *_cancelButtonBackgroundView;
    UIVisualEffectView *_setButtonBackgroundView;
}

@property(retain, nonatomic) UIVisualEffectView *setButtonBackgroundView; // @synthesize setButtonBackgroundView=_setButtonBackgroundView;
@property(retain, nonatomic) UIVisualEffectView *cancelButtonBackgroundView; // @synthesize cancelButtonBackgroundView=_cancelButtonBackgroundView;
@property(retain, nonatomic) UIButton *setButton; // @synthesize setButton=_setButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) HFWallpaper *wallpaper; // @synthesize wallpaper=_wallpaper;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) __weak id <HUWallpaperEditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)transparentButtonWithTitle:(id)arg1;
- (id)buttonsView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)updateScrollViewScale;
- (void)buttonTouchFinished:(id)arg1;
- (void)buttonTouchStarted:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (id)initWithWallpaper:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

