//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMServiceGroup.h>

#import <Home/HFReorderableHomeKitObject-Protocol.h>

@class HFServiceNameComponents, NSDate, NSString, NSUUID;

@interface HMServiceGroup (HFReordering) <HFReorderableHomeKitObject>
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

