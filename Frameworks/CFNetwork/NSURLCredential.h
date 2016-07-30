//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>
{
    NSURLCredentialInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)credentialForTrust:(struct __SecTrust *)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
- (void)_removeSWCACreatorAttribute;
- (_Bool)_hasSWCACreatorAttribute;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (id)certificates;
- (struct __SecIdentity *)identity;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long persistence;
- (_Bool)hasPassword;
- (id)password;
- (id)user;
- (const struct _CFURLCredential *)_CFURLCredential;
- (const struct _CFURLCredential *)_cfurlcredential;
- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
- (id)_initWithCFURLCredential:(struct _CFURLCredential *)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

@end

