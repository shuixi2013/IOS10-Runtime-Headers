//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AAUICDPHelper, ACAccount, CDPStateController, NSObject;
@protocol OS_dispatch_semaphore;

@interface AACDPOperation : NSOperation
{
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    ACAccount *_account;
    AAUICDPHelper *_helper;
    CDPStateController *_cdpStateController;
}

- (void).cxx_destruct;
- (_Bool)_shouldAttemptCDPRepairAfterSilentAuthError:(id)arg1;
- (id)_authenticationContextForAccount:(id)arg1;
- (void)_handleSuccessfulSilentAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)main;
- (void)cancel;
- (id)initWithAccount:(id)arg1 andPresenter:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

