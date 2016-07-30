//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIView;

@interface MusicHUDViewController : UIViewController
{
    UIView *_contentView;
    UIView *_hudView;
    _Bool _didPlayAnimation;
    _Bool _shouldDismissHUDWhenPossible;
    long long _type;
    _Bool _shouldWaitForExplicitDismissal;
    double _dismissalDelay;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool shouldWaitForExplicitDismissal; // @synthesize shouldWaitForExplicitDismissal=_shouldWaitForExplicitDismissal;
@property(nonatomic) double dismissalDelay; // @synthesize dismissalDelay=_dismissalDelay;
- (void).cxx_destruct;
- (void)_playAnimation;
- (void)_dismissHUDAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromRootViewController;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithHUDType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
