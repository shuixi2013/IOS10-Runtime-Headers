//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification
{
    NSDictionary *_serverDict;
}

+ (id)upgradeFlowSpecificationSampleForLevel:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *serverDict;
- (id)initWithServerDictionary:(id)arg1;

@end

