//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXOnboardingStatusUIView, PXOnboardingWelcomeUIView, PXPhotoAnalysisStatusController;
@protocol PXMemoriesOnboardingViewControllerDelegate;

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver>
{
    struct {
        _Bool views;
        _Bool stage;
        _Bool progress;
    } _needsUpdateFlags;
    id <PXMemoriesOnboardingViewControllerDelegate> _delegate;
    PXPhotoAnalysisStatusController *__statusController;
    unsigned long long __stage;
    PXOnboardingWelcomeUIView *__welcomeView;
    PXOnboardingStatusUIView *__statusView;
}

@property(nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView; // @synthesize _statusView=__statusView;
@property(nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView; // @synthesize _welcomeView=__welcomeView;
@property(nonatomic, setter=_setStage:) unsigned long long _stage; // @synthesize _stage=__stage;
@property(readonly, nonatomic) PXPhotoAnalysisStatusController *_statusController; // @synthesize _statusController=__statusController;
@property(nonatomic) __weak id <PXMemoriesOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateProgressIfNeeded;
- (void)_invalidateProgress;
- (void)_updateStageIfNeeded;
- (void)_invalidateStage;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)startButtonTapped:(id)arg1;
- (void)_updateViews;
- (void)_tearDownViews;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)_constraintsForMaximizingView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

