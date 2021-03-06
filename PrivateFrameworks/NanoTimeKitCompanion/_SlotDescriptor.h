//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKRestrictedApplicationsChangeObserver-Protocol.h>

@class NSArray, NSString;

@interface _SlotDescriptor : NSObject <NTKRestrictedApplicationsChangeObserver>
{
    unsigned long long _slotAllowedTypes;
    long long _family;
    NSArray *_typesRankedList;
    unsigned long long _allowedTypes;
}

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long allowedTypes; // @synthesize allowedTypes=_allowedTypes;
@property(readonly, nonatomic) NSArray *typesRankedList; // @synthesize typesRankedList=_typesRankedList;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
- (void).cxx_destruct;
- (void)restrictedApplicationsDidChange;
- (_Bool)allowsType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

