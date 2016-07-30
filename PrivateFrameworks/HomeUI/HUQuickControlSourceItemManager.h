//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItemProvider, NSSet;

@interface HUQuickControlSourceItemManager : HFItemManager
{
    NSSet *_controlItems;
    HFStaticItemProvider *_staticItemProvider;
}

@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
- (void).cxx_destruct;
- (CDUnknownBlockType)_standardReadValidator;
- (id)_itemProviders;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 controlItems:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

