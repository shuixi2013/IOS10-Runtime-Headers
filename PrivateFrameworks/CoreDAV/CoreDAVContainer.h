//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDAVResourceTypeItem, CoreDAVSupportedReportSetItem, NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject
{
    _Bool _isUnauthenticated;
    NSURL *_url;
    CoreDAVResourceTypeItem *_resourceType;
    NSString *_containerTitle;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSURL *_resourceID;
    CoreDAVSupportedReportSetItem *_supportedReportSetItem;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSURL *_owner;
    NSURL *_addMemberURL;
    NSDictionary *_bulkRequests;
    NSString *_syncToken;
}

+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;
+ (id)copyPropertyMappingsForParser;
@property(retain, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(retain, nonatomic) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;
@property(retain, nonatomic) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;
@property(retain, nonatomic) NSURL *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) CoreDAVResourceTypeItem *resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem; // @synthesize supportedReportSetItem=_supportedReportSetItem;
@property(retain, nonatomic) NSString *quotaUsed; // @synthesize quotaUsed=_quotaUsed;
@property(retain, nonatomic) NSString *quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
@property(retain, nonatomic) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property(retain, nonatomic) NSDictionary *pushTransports; // @synthesize pushTransports=_pushTransports;
@property(retain, nonatomic) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(retain, nonatomic) NSSet *privileges; // @synthesize privileges=_privileges;
@property(retain, nonatomic) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;
@property(nonatomic) _Bool isUnauthenticated; // @synthesize isUnauthenticated=_isUnauthenticated;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
@property(readonly, nonatomic) _Bool supportsSyncCollectionReport;
@property(readonly, nonatomic) _Bool supportsPrincipalPropertySearchReport;
@property(readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property(readonly, nonatomic) _Bool hasUnbindPrivileges;
@property(readonly, nonatomic) _Bool hasBindPrivileges;
@property(readonly, nonatomic) _Bool hasWritePropertiesPrivileges;
@property(readonly, nonatomic) _Bool hasWriteContentPrivileges;
@property(readonly, nonatomic) _Bool hasReadPrivileges;
- (_Bool)_anyPrivilegesMatches:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *privilegesAsStringSet;
@property(readonly, nonatomic) _Bool isPrincipal;
@property(readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property(readonly, nonatomic) NSSet *supportedReports;
- (void)postProcessWithResponseHeaders:(id)arg1;
- (void)applyParsedProperties:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;

@end

