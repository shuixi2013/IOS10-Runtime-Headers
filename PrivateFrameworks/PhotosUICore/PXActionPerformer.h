//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol PXActionPerformerDelegate;

@interface PXActionPerformer : NSObject
{
    CDUnknownBlockType _completionHandler;
    _Bool _success;
    NSString *_actionType;
    unsigned long long _state;
    id <PXActionPerformerDelegate> _delegate;
    UIViewController *_presentedViewController;
}

@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <PXActionPerformerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)completeBackgroundTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)performBackgroundTask;
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)dismissViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentViewController:(id)arg1;
- (void)performUserInteractionTask;
- (void)_completeUnlockTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_performUnlockIfNeeded;
- (_Bool)requiresUnlockedDevice;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActionType:(id)arg1;
- (id)init;

@end
