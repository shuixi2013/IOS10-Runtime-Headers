//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSError;

@protocol ADPrivacyRemoteViewControllerDelegate <NSObject>
- (void)adPrivacyRemoteViewControllerDidTerminateWithError:(NSError *)arg1;

@optional
- (void)adPrivacyRemoteViewControllerDidLinkOut;
- (void)adPrivacyRemoteViewControllerDidRenderTransparency;
- (void)remoteViewControllerDidLoad;
- (void)adPrivacyRemoteViewControllerClientRequestsDismisal;
@end

