//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject
{
}

+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)createAlertWindowIfNeeded:(_Bool)arg1 deferDisplay:(_Bool)arg2;
+ (void)createAlertWindowIfNeeded:(_Bool)arg1;
+ (void)alertPopoutCompleted;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(_Bool)arg2 forSpringBoardAlertTransition:(_Bool)arg3;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(_Bool)arg2 forSpringBoardAlertTransition:(_Bool)arg3;
+ (void)showDimmingViewAnimated:(_Bool)arg1;
+ (void)hideDimmingViewAnimated:(_Bool)arg1;
+ (_Bool)stackContainsAlert:(id)arg1;
+ (void)removeFromStack:(id)arg1;
+ (void)addToStack:(id)arg1 dontDimBackground:(_Bool)arg2;
+ (void)reorientAlertWindowTo:(long long)arg1 animated:(_Bool)arg2 keyboard:(id)arg3;
+ (void)applyClientWindowTransform:(struct CGAffineTransform)arg1;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform)arg1;
+ (void)_applyAlertTransforms;
+ (struct CGAffineTransform)calculatedAlertTransform;
+ (struct CGAffineTransform)_alertTranslationForInterfaceOrientation:(long long)arg1 andTranslation:(double)arg2;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
+ (void)noteOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2;
+ (id)visibleAlert;
+ (id)topMostAlert;
+ (_Bool)cancelAlertsAnimated:(_Bool)arg1;
+ (_Bool)cancelTopMostAlertAnimated:(_Bool)arg1;
+ (_Bool)hideTopMostAlertAnimated:(_Bool)arg1;
+ (void)hideAlertsForTermination;
+ (void)initialize;
- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;

@end

