//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class NSError, NSString;

@protocol BKSAlternateSystemAppClientProtocol <NSObject>
- (void)alternateSystemAppWithBundleIDDidTerminate:(NSString *)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(NSString *)arg1;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 didExitWithReason:(unsigned long long)arg2;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 failedToOpenWithResult:(NSError *)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
@end

