//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCommitTransition : NSObject
{
    UIViewController *_viewController;
    UIWindow *_currentCommitEffectWindow;
}

@property(retain, nonatomic) UIWindow *currentCommitEffectWindow; // @synthesize currentCommitEffectWindow=_currentCommitEffectWindow;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_applyCommitEffectTransformToView:(id)arg1;
- (id)_preferredTransitionAnimator;
- (void)performTransitionWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPresentedViewController:(id)arg1;

@end

