//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonTimelapseProtocol-Protocol.h>
#import <CameraUI/CAMPersistenceResultDelegate-Protocol.h>
#import <CameraUI/CAMVideoCaptureRequestDelegate-Protocol.h>

@class BKSApplicationStateMonitor, CAMNebulaKeepAliveController, CAMPersistenceController, CAMTimelapseState, NSMutableArray, NSString;
@protocol CAMTimelapseMovieWriterProtocol, OS_dispatch_queue;

@interface CAMTimelapseBackendController : NSObject <CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate>
{
    _Bool __writingMovie;
    _Bool __capturing;
    _Bool __oldMovieWriterEnabled;
    int __notifyRegisterTokenSuspendIO;
    int __notifyRegisterTokenResumeIO;
    NSMutableArray *__sessionContexts;
    NSObject<OS_dispatch_queue> *__workQueue;
    id <CAMTimelapseMovieWriterProtocol> __movieWriter;
    CAMTimelapseState *__currentState;
    CAMNebulaKeepAliveController *__keepAliveController;
    CAMPersistenceController *__persistenceController;
    BKSApplicationStateMonitor *__applicationStateMonitor;
}

@property(readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor; // @synthesize _applicationStateMonitor=__applicationStateMonitor;
@property(readonly, nonatomic) int _notifyRegisterTokenResumeIO; // @synthesize _notifyRegisterTokenResumeIO=__notifyRegisterTokenResumeIO;
@property(readonly, nonatomic) int _notifyRegisterTokenSuspendIO; // @synthesize _notifyRegisterTokenSuspendIO=__notifyRegisterTokenSuspendIO;
@property(readonly, nonatomic) _Bool _oldMovieWriterEnabled; // @synthesize _oldMovieWriterEnabled=__oldMovieWriterEnabled;
@property(readonly, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property(readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController; // @synthesize _keepAliveController=__keepAliveController;
@property(nonatomic, getter=_isCapturing, setter=_setCapturing:) _Bool _capturing; // @synthesize _capturing=__capturing;
@property(retain, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState; // @synthesize _currentState=__currentState;
@property(readonly, nonatomic) id <CAMTimelapseMovieWriterProtocol> _movieWriter; // @synthesize _movieWriter=__movieWriter;
@property(readonly, nonatomic) _Bool _writingMovie; // @synthesize _writingMovie=__writingMovie;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue; // @synthesize _workQueue=__workQueue;
@property(readonly, nonatomic) NSMutableArray *_sessionContexts; // @synthesize _sessionContexts=__sessionContexts;
- (void).cxx_destruct;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)_workQueue_destroyApplicationStateMonitor;
- (void)_workQueue_setupCameraProcessMonitoringIfNecessary;
- (_Bool)_isCameraRunning;
- (void)handleClientDisconnection;
- (void)handleClientConnection:(id)arg1;
- (struct CGAffineTransform)_frameTransformForState:(id)arg1;
- (void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg1;
- (_Bool)_shouldSaveLastTimelapseDataForDebugging;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (void)_writeMovieForSessionContext:(id)arg1;
- (_Bool)_deleteItemAtPath:(id)arg1;
- (_Bool)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (void)_permanentlyFailTimelapseUUID:(id)arg1 withState:(id)arg2;
- (void)_performPendingWork;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchToWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

