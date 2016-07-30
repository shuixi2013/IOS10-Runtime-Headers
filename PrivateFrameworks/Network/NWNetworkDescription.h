//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface NWNetworkDescription : NSObject
{
    NSSet *_interfaceTypeOptions;
    NSSet *_ssidOptions;
    NSSet *_dnsSearchDomainOptions;
    NSSet *_dnsServerAddressOptions;
    long long _roamingPreference;
    NSURL *_probeURL;
    long long _state;
}

+ (long long)getNewStateFromPathMatch:(_Bool)arg1 oldState:(long long)arg2 probeExists:(_Bool)arg3;
@property long long state; // @synthesize state=_state;
@property(copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property long long roamingPreference; // @synthesize roamingPreference=_roamingPreference;
@property(copy) NSSet *dnsServerAddressOptions; // @synthesize dnsServerAddressOptions=_dnsServerAddressOptions;
@property(copy) NSSet *dnsSearchDomainOptions; // @synthesize dnsSearchDomainOptions=_dnsSearchDomainOptions;
@property(copy) NSSet *ssidOptions; // @synthesize ssidOptions=_ssidOptions;
@property(copy) NSSet *interfaceTypeOptions; // @synthesize interfaceTypeOptions=_interfaceTypeOptions;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)updateStateWithPath:(id)arg1;
- (_Bool)matchesPath:(id)arg1;

@end

