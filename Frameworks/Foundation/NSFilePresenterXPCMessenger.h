//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFilePresenterXPCInterface-Protocol.h>

@class NSFilePresenterProxy, NSString;
@protocol NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface>
{
    id <NSFilePresenter> _filePresenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSFilePresenterProxy *_filePresenterProxy;
}

- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(CDUnknownBlockType)arg5;
- (id)_writeRelinquishment;
- (id)_readRelinquishment;
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;
- (void)_makePresenterObserveReconnection:(id)arg1;
- (void)_makePresenterObserveDisconnection:(id)arg1;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)logSuspensionWarning;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;
- (oneway void)observeReconnection;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observeChangeWithSubitemURL:(id)arg1;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFilePresenterProxy:(id)arg1;
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

