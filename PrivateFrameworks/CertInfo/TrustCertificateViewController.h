//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class CertificateViewController;
@protocol TrustCertificateViewControllerDelegate;

@interface TrustCertificateViewController : UINavigationController
{
    id <TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
    CertificateViewController *_certificateViewController;
}

@property(retain, nonatomic) CertificateViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(nonatomic) __weak id <TrustCertificateViewControllerDelegate> trustCertificateDelegate; // @synthesize trustCertificateDelegate=_trustCertificateDelegate;
- (void).cxx_destruct;
- (void)setShowCertificateButton:(_Bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(_Bool)arg5 properties:(id)arg6 action:(int)arg7;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)_setupNavItem;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3;
- (id)initWithTrustCertificateDelegate:(id)arg1;

@end

