//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString;

@protocol AAUIAccountCreationDelegate
- (void)accountCreationWasCanceled;
- (void)accountCreationDidFailWithError:(NSError *)arg1;
- (void)accountCreationDidSucceedWithAppleID:(NSString *)arg1 password:(NSString *)arg2 emailChoice:(NSString *)arg3;
- (void)accountCreationWillBeginWithAppleID:(NSString *)arg1 password:(NSString *)arg2;
@end

