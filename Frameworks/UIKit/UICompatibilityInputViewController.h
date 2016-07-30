//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

#import <UIKit/_UIKBDelegateAwareInputController-Protocol.h>

@class NSString, UIKeyboard, UIKeyboardInputMode, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController>
{
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    _Bool _shouldRegenerateSizingConstraints;
    _Bool _shouldSuppressRemoteInputController;
    double _resetInputModeTime;
    UIViewController *_inputController;
    UIView *_inputControllerSnapshot;
}

+ (_Bool)_requiresProxyInterface;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputViewControllerWithView:(id)arg1;
@property(retain, nonatomic) UIView *inputControllerSnapshot; // @synthesize inputControllerSnapshot=_inputControllerSnapshot;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)didFinishTranslation;
- (void)finishSplitTransition:(_Bool)arg1;
- (void)willBeginTranslation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_keyboardForThisViewController;
- (id)_keyboard;
- (id)childCompatibilityController;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (id)preferredFocusedItem;
- (void)setInputMode:(id)arg1;
- (void)assertCurrentInputModeIfNecessary;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)tearDownInputController;
- (void)removeSnapshotView;
- (void)snapshotCurrentDisplay;
- (void)rebuildChildConstraints;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (id)_compatView;
- (id)_compatibilityController;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (void)dealloc;
- (void)loadView;
- (id)_initAsDeferredController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

