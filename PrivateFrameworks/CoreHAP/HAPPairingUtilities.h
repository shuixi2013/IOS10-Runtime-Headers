//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAPPairingUtilities : NSObject
{
}

+ (id)parseListPairingsResponse:(id)arg1 error:(id *)arg2;
+ (id)createListPairingsRequest:(id *)arg1;
+ (_Bool)parseRemovePairingResponse:(id)arg1 error:(id *)arg2;
+ (id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;
+ (_Bool)parseAddPairingResponse:(id)arg1 error:(id *)arg2;
+ (id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;

@end

