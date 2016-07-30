//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, _CDSharedMemoryKeyValueStore;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_keyPathRegistrationCount;
    unsigned long long _localDeviceID;
}

+ (id)sharedMemoryKeyFromRegistration:(id)arg1;
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;
@property(nonatomic) unsigned long long localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (id)loadRegistrations;
- (id)loadValues;
- (id)allKeysForContextStore;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;

@end

