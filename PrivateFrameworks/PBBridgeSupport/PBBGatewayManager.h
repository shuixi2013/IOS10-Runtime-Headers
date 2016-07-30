//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, NSArray, NSDateComponents, NSString;

@interface PBBGatewayManager : NSObject
{
    _Bool _isScheduled;
    NSArray *_bbSections;
    BBSettingsGateway *_settingsGateway;
    NSString *_allowedGroupName;
    unsigned long long _privilegedSenderType;
    NSDateComponents *_dndFromComponents;
    NSDateComponents *_dndToComponents;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSDateComponents *dndToComponents; // @synthesize dndToComponents=_dndToComponents;
@property(readonly, nonatomic) NSDateComponents *dndFromComponents; // @synthesize dndFromComponents=_dndFromComponents;
@property(readonly, nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
@property(readonly, nonatomic) unsigned long long privilegedSenderType; // @synthesize privilegedSenderType=_privilegedSenderType;
@property(readonly, nonatomic) NSString *allowedGroupName; // @synthesize allowedGroupName=_allowedGroupName;
@property(retain, nonatomic) BBSettingsGateway *settingsGateway; // @synthesize settingsGateway=_settingsGateway;
@property(retain, nonatomic) NSArray *bbSections; // @synthesize bbSections=_bbSections;
- (void).cxx_destruct;
- (_Bool)repeatedCalls;
- (void)loadDNDState;
- (void)loadBBSections;
- (void)dealloc;
- (id)init;

@end

