//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;

@interface AVOutputSettingsAssistantInternal : NSObject
{
    id <AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
    id <AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
    struct opaqueCMFormatDescription *sourceVideoFormat;
    struct opaqueCMFormatDescription *sourceAudioFormat;
    CDStruct_1b6d18a9 sourceVideoAverageFrameDuration;
    CDStruct_1b6d18a9 sourceVideoMinFrameDuration;
}

@end

