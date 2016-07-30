//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_familyToTemplate;
    NSMutableSet *_supportedFamilies;
    NSString *_clientID;
    NSString *_applicationID;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(copy) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)supportedFamilies;
- (id)loadedFamilies;
- (void)setTemplate:(id)arg1 forFamily:(long long)arg2;
- (id)templateForFamily:(long long)arg1;
- (id)initWithSupportedFamilies:(id)arg1;

@end

