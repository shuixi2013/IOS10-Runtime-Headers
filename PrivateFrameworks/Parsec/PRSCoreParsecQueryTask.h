//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

@class PARSession, PARTask;

@interface PRSCoreParsecQueryTask : PRSQueryTask
{
    PARSession *_parSession;
    _Bool _parsecEnabled;
    _Bool _bingEnabled;
    PARTask *_task;
}

@property(retain) PARTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)resume;
- (void)handleResults:(id)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5;
- (void)setBingState:(_Bool)arg1;
- (void)setParsecState:(_Bool)arg1;
- (_Bool)needsBag;

@end
