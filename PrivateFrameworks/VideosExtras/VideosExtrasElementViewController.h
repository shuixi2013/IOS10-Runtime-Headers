//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMapTable, VideosExtrasBackgroundViewController;

@interface VideosExtrasElementViewController : UIViewController
{
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
    _Bool _wide;
}

+ (id)_borderView;
@property(nonatomic, getter=isWide) _Bool wide; // @synthesize wide=_wide;
- (void).cxx_destruct;
- (void)_didActivateButtonWithItem:(id)arg1;
- (void)_prepareLayout;
- (id)_installBackdrop:(id)arg1;
- (void)_configureBannerWithElement:(id)arg1;
- (void)configureBackgroundWithElements:(id)arg1;
- (void)_startBackgroundAudio;
- (id)backgroundViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)extrasSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

