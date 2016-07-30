//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSyncSession.h>

@class HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession
{
    _Bool _pullRequest;
    _Bool _requestedByRemote;
    CDUnknownBlockType _completion;
    unsigned long long _messageCount;
}

@property(readonly, nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic, getter=isRequestedByRemote) _Bool requestedByRemote; // @synthesize requestedByRemote=_requestedByRemote;
@property(readonly, nonatomic, getter=isPullRequest) _Bool pullRequest; // @synthesize pullRequest=_pullRequest;
- (void).cxx_destruct;
- (void)invokeCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)incrementMessageCount;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
@property(readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
- (id)initWithSyncStore:(id)arg1 attemptWhileLocking:(_Bool)arg2 pullRequest:(_Bool)arg3 requestedByRemote:(_Bool)arg4 reason:(id)arg5 delegate:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

