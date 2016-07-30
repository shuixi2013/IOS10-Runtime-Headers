//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem, HMHome, UIViewController;
@protocol NSCopying;

@interface HUQuickControlPresentationContext : NSObject
{
    unsigned long long _colorStyle;
    HFItem<NSCopying> *_item;
    HMHome *_home;
    UIViewController *_sourceViewController;
    struct CGRect _sourceRect;
}

@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long colorStyle; // @synthesize colorStyle=_colorStyle;
- (void).cxx_destruct;

@end
