//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject
{
    NSDictionary *_configurations;
}

- (void).cxx_destruct;
- (id)_loadConfigurations;
- (_Bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(long long)arg2;
- (id)init;

@end

