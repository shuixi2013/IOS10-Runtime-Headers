//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

@class NSURL, SKUIApplicationLicensePage, SSVLoadURLOperation, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController
{
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (void)_displayPage:(id)arg1 error:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
- (id)initWithLicenseAgreementURL:(id)arg1;
- (id)initWithLicenseAgreementPage:(id)arg1;

@end

