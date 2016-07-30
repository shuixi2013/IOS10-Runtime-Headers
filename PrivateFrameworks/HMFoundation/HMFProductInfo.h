//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSSecureCoding-Protocol.h>

@interface HMFProductInfo : NSObject <NSSecureCoding>
{
    long long _productPlatform;
    long long _productClass;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (void)encodeOperatingSystemVersion:(CDStruct_f6aba300)arg1 withCoder:(id)arg2;
+ (CDStruct_f6aba300)decodeOperatingSystemVersionWithCoder:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)productInfo;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, nonatomic) long long productClass; // @synthesize productClass=_productClass;
@property(readonly, nonatomic) long long productPlatform; // @synthesize productPlatform=_productPlatform;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 operatingSystemVersion:(CDStruct_f6aba300)arg3;
- (id)init;

@end

