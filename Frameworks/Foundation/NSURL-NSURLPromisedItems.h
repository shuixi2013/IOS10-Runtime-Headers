//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURLPromisedItems)
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (_Bool)getPromisedItemResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (_Bool)checkPromisedItemIsReachableAndReturnError:(id *)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_performWithPhysicalURL:(CDUnknownBlockType)arg1;
- (void)_promiseExtensionRelease:(long long)arg1;
- (long long)_promiseExtensionConsume;
@end

