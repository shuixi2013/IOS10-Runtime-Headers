//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUModalTransition.h>

#import <PhotosUI/PUOneUpAssetTransition-Protocol.h>

@class NSString, PUOneUpPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController;
@protocol PUOneUpAssetTransitionViewController, PUOneUpPhotosSharingTransitionDelegate, PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController;

@interface PUOneUpPhotosSharingTransition : PUModalTransition <PUOneUpAssetTransition>
{
    UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *_sharingTransitionViewController;
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;
    PUOneUpPhotosSharingTransitionContext *_oneUpPhotosSharingTransitionContext;
    id <PUOneUpPhotosSharingTransitionDelegate> _delegate;
    UICollectionViewLayout *__transitionLayout;
}

@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
@property(nonatomic) __weak id <PUOneUpPhotosSharingTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpPhotosSharingTransitionContext; // @synthesize oneUpPhotosSharingTransitionContext=_oneUpPhotosSharingTransitionContext;
@property(nonatomic) __weak UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *sharingTransitionViewController; // @synthesize sharingTransitionViewController=_sharingTransitionViewController;
- (void).cxx_destruct;
- (void)animateDismissTransition;
- (void)animatePresentTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

