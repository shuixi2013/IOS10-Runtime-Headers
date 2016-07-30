//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, PBCodable;

@interface INIntent : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    PBCodable *_backingStore;
}

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;
+ (id)typeName;
@property(copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)protoData;
- (id)_impl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) NSString *intentId;
@property(readonly, nonatomic) NSString *launchId;
@property(readonly, nonatomic) NSString *utteranceString;
- (id)_metadata;
@property(readonly, nonatomic) NSString *typeName;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)init;

@end

