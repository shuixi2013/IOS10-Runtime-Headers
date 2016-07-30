//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceServices/VSAssetBase.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding>
{
    NSArray *_languages;
    NSDictionary *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
}

+ (id)legacyPlatforms;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *voiceConfig; // @synthesize voiceConfig=_voiceConfig;
@property(copy, nonatomic) NSURL *searchPathURL; // @synthesize searchPathURL=_searchPathURL;
@property(copy, nonatomic) NSDictionary *resourceList; // @synthesize resourceList=_resourceList;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (void)syncWithConfigFile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

