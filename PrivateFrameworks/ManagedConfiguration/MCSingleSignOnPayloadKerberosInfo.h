//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject
{
    NSString *_principalName;
    NSString *_realm;
    NSString *_certificateUUID;
    NSArray *_URLPrefixMatches;
    NSArray *_appIdentifierMatches;
    NSString *_accountGUID;
    NSString *_accountTypeGUID;
}

@property(retain, nonatomic) NSString *accountTypeGUID; // @synthesize accountTypeGUID=_accountTypeGUID;
@property(retain, nonatomic) NSString *accountGUID; // @synthesize accountGUID=_accountGUID;
@property(retain, nonatomic) NSArray *appIdentifierMatches; // @synthesize appIdentifierMatches=_appIdentifierMatches;
@property(retain, nonatomic) NSArray *URLPrefixMatches; // @synthesize URLPrefixMatches=_URLPrefixMatches;
@property(retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *principalName; // @synthesize principalName=_principalName;
- (void).cxx_destruct;
- (id)stubDictionary;
- (_Bool)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id *)arg2 outError:(id *)arg3;
- (id)description;
- (_Bool)validateAppIdentifierMatch:(id)arg1 outError:(id *)arg2;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

