//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <StoreKitUI/SKUIGiftViewControllerDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUIProductPageItem;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate>
{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (void).cxx_destruct;
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityViewController;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

