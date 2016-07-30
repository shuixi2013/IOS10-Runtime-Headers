//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeech;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property(copy, nonatomic) NSNumber *noiseReductionLevel;
@property(copy, nonatomic) NSNumber *motionConfidence;
@property(copy, nonatomic) NSString *motionActivity;
@property(copy, nonatomic) NSNumber *isCarryDevice;
@property(copy, nonatomic) NSString *headsetName;
@property(copy, nonatomic) NSString *headsetId;
@property(copy, nonatomic) NSString *headsetAddress;
@property(nonatomic) _Bool enablePartialResults;
@property(copy, nonatomic) NSString *dspStatus;
@property(nonatomic) _Bool disableAutoEndpointing;
@property(copy, nonatomic) NSString *deviceModel;
@property(copy, nonatomic) NSString *deviceIdentifier;
@property(nonatomic) int codec;
@property(nonatomic) _Bool clearContext;
@property(copy, nonatomic) NSString *audioSource;
@property(copy, nonatomic) NSString *origin;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

