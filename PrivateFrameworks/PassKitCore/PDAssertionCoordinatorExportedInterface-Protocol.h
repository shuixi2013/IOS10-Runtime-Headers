//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString;

@protocol PDAssertionCoordinatorExportedInterface <PDXPCServiceExportedInterface>
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 reason:(NSString *)arg3 handler:(void (^)(_Bool))arg4;
- (void)assertionExistsOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
@end
