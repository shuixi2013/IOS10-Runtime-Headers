//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSDictionary, NSError;
@protocol SBFUserAuthenticationModelDelegate;

@protocol SBFUserAuthenticationModel <NSObject>
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate;
- (void)synchronize;
- (void)notePasscodeUnlockFailedWithError:(NSError *)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)performPasswordTest:(void (^)(_Bool *))arg1;

@optional
- (void)noteNewMkbDeviceLockStateInfo:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (void)refreshBlockedState;
- (void)clearBlockedState;
@end

