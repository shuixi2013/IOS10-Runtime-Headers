//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCSharedDeviceConfigurationPayload : MCPayload
{
    NSString *_lockScreenFootnote;
    NSString *_assetTagInformation;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSString *assetTagInformation; // @synthesize assetTagInformation=_assetTagInformation;
@property(readonly, nonatomic) NSString *lockScreenFootnote; // @synthesize lockScreenFootnote=_lockScreenFootnote;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
@property(readonly, nonatomic) NSDictionary *configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

