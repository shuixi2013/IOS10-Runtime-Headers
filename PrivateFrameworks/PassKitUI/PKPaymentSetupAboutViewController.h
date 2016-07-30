//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSString, PKPaymentSetupAboutView;

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _requiresPrivacy;
    NSString *_bodyText;
    PKPaymentSetupAboutView *_aboutView;
    void *_navigationController;
    _Bool _navigationControllerHidesShadow;
}

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_showPrivacyView:(id)arg1;
- (void)_done:(id)arg1;
- (void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(_Bool)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithAboutText:(id)arg1 isPresented:(_Bool)arg2;
- (id)initForPrivacyPresented:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

