//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class SKUIClientContext;

@interface SKUIProductPageActivityViewController : UIActivityViewController
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (id)_applicationActivitiesForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;

@end

