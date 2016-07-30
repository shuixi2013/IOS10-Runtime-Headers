//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPOSTransaction, NSArray, NSError, NSNumber, NSString;

@protocol HAPAccessoryServerDelegate <NSObject>
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateName:(NSString *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateCategory:(NSNumber *)arg2;
- (void)accessoryServerDidUpdateStateNumber:(HAPAccessoryServer *)arg1;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValuesForCharacteristics:(NSArray *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 isBlockedWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didDiscoverAccessories:(NSArray *)arg2 transaction:(HAPOSTransaction *)arg3 error:(NSError *)arg4;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didStopPairingWithError:(NSError *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 requestUserPermission:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
@end

