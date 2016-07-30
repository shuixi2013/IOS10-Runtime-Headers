//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject
{
    id _accountUpdateObserver;
    NSString *_dsid;
    struct RetainPtr<_PCSIdentitySetData *> _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> _pcsShareProtection;
    struct RetainPtr<const __CFData *> _serializedPCSObject;
    NSUbiquitousKeyValueStore *_backingStore;
}

+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore; // @synthesize backingStore=_backingStore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)decryptEntry:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)encryptPropertyList:(id)arg1;
- (int)_currentPCSConfiguration;
- (id)initWithStore:(id)arg1;
- (id)_dsidForPrimaryAccount;

@end

