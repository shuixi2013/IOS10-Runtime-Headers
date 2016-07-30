//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXInstallOperationDelegateProtocol-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection;

@interface ACXInstallOperation : NSObject <ACXInstallOperationDelegateProtocol>
{
    _Bool _installPlaceholder;
    CDUnknownBlockType _progressBlock;
    NSDictionary *_appSettingsDict;
    NSString *_bundleID;
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _completionBlock;
}

+ (id)installOperationForBundleIdentifier:(id)arg1;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property _Bool installPlaceholder; // @synthesize installPlaceholder=_installPlaceholder;
@property(retain) NSDictionary *appSettingsDict; // @synthesize appSettingsDict=_appSettingsDict;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)callProgressBlockWithPhase:(unsigned long long)arg1 percentComplete:(double)arg2;
- (void)callCompletionBlockWithError:(id)arg1;
- (void)cancel;
- (void)beginWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
