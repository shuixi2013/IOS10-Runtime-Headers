//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class ADPrivacyViewController, NSError;

@protocol ADPrivacyViewControllerDelegate <NSObject>

@optional
- (void)adPrivacyViewController:(ADPrivacyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)adPrivacyViewControllerDidDismiss:(ADPrivacyViewController *)arg1;
- (void)adPrivacyViewControllerDidLoad:(ADPrivacyViewController *)arg1;
@end

