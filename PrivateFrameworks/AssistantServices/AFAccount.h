//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface AFAccount : NSObject
{
    _Bool _isActive;
    NSString *_identifier;
    NSString *_label;
    NSString *_assistantIdentifier;
    NSString *_speechIdentifier;
    NSString *_hostname;
    NSString *_predefinedServer;
    NSString *_aceHost;
    NSDictionary *_connectionPolicy;
    NSDate *_connectionPolicyDate;
    NSString *_connectionPolicyHostname;
    NSString *_group;
    NSDictionary *_lastSyncDates;
    NSString *_localeIdentifier;
}

@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy, nonatomic) NSDictionary *lastSyncDates; // @synthesize lastSyncDates=_lastSyncDates;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *connectionPolicyHostname; // @synthesize connectionPolicyHostname=_connectionPolicyHostname;
@property(copy, nonatomic) NSDate *connectionPolicyDate; // @synthesize connectionPolicyDate=_connectionPolicyDate;
@property(copy, nonatomic) NSDictionary *connectionPolicy; // @synthesize connectionPolicy=_connectionPolicy;
@property(copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property(copy, nonatomic) NSString *predefinedServer; // @synthesize predefinedServer=_predefinedServer;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *speechIdentifier; // @synthesize speechIdentifier=_speechIdentifier;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)messageDictionary;
- (id)initWithMessageDictionary:(id)arg1;
- (id)description;

@end

