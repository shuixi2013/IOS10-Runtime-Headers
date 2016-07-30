//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSError, NSString;
@protocol FBSProcess, FBSProcessExecutionProvisionDelegate, OS_dispatch_queue;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying>
{
    id <FBSProcess> _process;
    _Bool _activated;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
    _Bool _monitoring;
    _Bool _violated;
    id <FBSProcessExecutionProvisionDelegate> _delegate;
}

@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <FBSProcess> process; // @synthesize process=_process;
@property(readonly, nonatomic, getter=isViolated) _Bool violated; // @synthesize violated=_violated;
@property(readonly, nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) id <FBSProcessExecutionProvisionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_performDelegateCallout:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_noteViolatedWithError:(id)arg1;
- (void)_noteReachedProgressMilestone;
- (void)_prepareForReuse;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (void)_beginMonitoring;
- (void)prepareForReuse;
- (void)stopMonitoring;
- (void)updateProgress;
- (void)monitorProcess:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isResourceProvision;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

