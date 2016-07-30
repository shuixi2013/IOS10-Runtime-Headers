//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface NSError : NSObject <NSCopying, NSSecureCoding>
{
    void *_reserved;
    long long _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

+ (CDUnknownBlockType)userInfoValueProviderForDomain:(id)arg1;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(CDUnknownBlockType)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)_registerFormatter:(CDUnknownFunctionPointerType)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_registerBuiltInFormatters;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy) NSString *helpAnchor;
@property(readonly) id recoveryAttempter;
@property(readonly, copy) NSArray *localizedRecoveryOptions;
@property(readonly, copy) NSString *localizedRecoverySuggestion;
@property(readonly, copy) NSString *localizedFailureReason;
@property(readonly, copy) NSString *localizedDescription;
- (struct __CFString *)_retainedUserInfoCallBackForKey:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly, copy) NSString *domain;
@property(readonly) long long code;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)init;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct **)arg3 count:(long long)arg4;
- (long long)_collectApplicableUserInfoFormatters:(struct **)arg1 max:(long long)arg2;
- (id)_web_failingURL;
- (id)_web_localizedDescription;
- (_Bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

