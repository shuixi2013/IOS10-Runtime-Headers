//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator
{
    CDUnknownBlockType _requestToJoinCompletion;
    _Bool _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;
- (void)resetAccountCDPState;
- (void)cancelApproveFromAnotherDevice;
- (id)_decoratedDelegate;
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)setValidSecretHandler:(CDUnknownBlockType)arg1;

@end

