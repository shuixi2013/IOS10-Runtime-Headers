//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, SASyncAppIdentifyingInfo;

@interface SASyncAppMetaData : AceObject <SAAceSerializable>
{
}

+ (id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appMetaData;
@property(copy, nonatomic) NSArray *syncSlots;
@property(copy, nonatomic) NSNumber *developerMode;
@property(copy, nonatomic) NSString *applicationClientIdentifier;
@property(retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

