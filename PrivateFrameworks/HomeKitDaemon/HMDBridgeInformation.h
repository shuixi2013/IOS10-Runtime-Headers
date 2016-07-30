//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAccessory, HMFTimer, NSMapTable, NSMutableSet, NSUUID;

@interface HMDBridgeInformation : NSObject
{
    _Bool _startDiscovery;
    HMDAccessory *_associatingAccessory;
    HMDAccessory *_disassociatingAccessory;
    NSMapTable *_addAssociatingAccessoryCompletionBlock;
    NSMapTable *_addDisAssociatingAccessoryCompletionBlock;
    NSMapTable *_addDiscoveredAccessoryCompletionBlock;
    NSUUID *_messageIdentifier;
    NSMutableSet *_identifiersForDiscoveredBridgeableAccessories;
    HMFTimer *_associatingAccessoryTimer;
    HMFTimer *_disAssociatingAccessoryTimer;
    HMFTimer *_discoveryAccessoryTimer;
}

@property(retain, nonatomic) HMFTimer *discoveryAccessoryTimer; // @synthesize discoveryAccessoryTimer=_discoveryAccessoryTimer;
@property(retain, nonatomic) HMFTimer *disAssociatingAccessoryTimer; // @synthesize disAssociatingAccessoryTimer=_disAssociatingAccessoryTimer;
@property(retain, nonatomic) HMFTimer *associatingAccessoryTimer; // @synthesize associatingAccessoryTimer=_associatingAccessoryTimer;
@property(nonatomic) _Bool startDiscovery; // @synthesize startDiscovery=_startDiscovery;
@property(retain, nonatomic) NSMutableSet *identifiersForDiscoveredBridgeableAccessories; // @synthesize identifiersForDiscoveredBridgeableAccessories=_identifiersForDiscoveredBridgeableAccessories;
@property(retain, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSMapTable *addDiscoveredAccessoryCompletionBlock; // @synthesize addDiscoveredAccessoryCompletionBlock=_addDiscoveredAccessoryCompletionBlock;
@property(retain, nonatomic) NSMapTable *addDisAssociatingAccessoryCompletionBlock; // @synthesize addDisAssociatingAccessoryCompletionBlock=_addDisAssociatingAccessoryCompletionBlock;
@property(retain, nonatomic) NSMapTable *addAssociatingAccessoryCompletionBlock; // @synthesize addAssociatingAccessoryCompletionBlock=_addAssociatingAccessoryCompletionBlock;
@property(nonatomic) __weak HMDAccessory *disassociatingAccessory; // @synthesize disassociatingAccessory=_disassociatingAccessory;
@property(nonatomic) __weak HMDAccessory *associatingAccessory; // @synthesize associatingAccessory=_associatingAccessory;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1;

@end

