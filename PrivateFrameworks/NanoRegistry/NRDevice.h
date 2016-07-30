//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSPointerArray;
@protocol OS_dispatch_queue;

@interface NRDevice : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
    NSObject<OS_dispatch_queue> *_nrQueue;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nrQueue; // @synthesize nrQueue=_nrQueue;
@property(retain, nonatomic) NSMutableArray *promiscuousChangeBlocks; // @synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks;
@property(retain, nonatomic) NSMutableDictionary *changeBlocks; // @synthesize changeBlocks=_changeBlocks;
@property(retain, nonatomic) NSPointerArray *promiscuousObservers; // @synthesize promiscuousObservers=_promiscuousObservers;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)dealloc;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)propertyNames;
- (void)encodeWithCoder:(id)arg1;
- (void)queueMergeWithDevice:(id)arg1;
- (void)mergeWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (_Bool)_queueSetValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)_setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)queueValueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)description;
- (id)queueDescription;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (_Bool)supportsCapability:(id)arg1;

@end

