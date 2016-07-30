//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEORPProblemProvider.h>

#import <GeoServices/GEOPBSessionRequesterDelegate-Protocol.h>

@class GEORequester, NSString;

__attribute__((visibility("hidden")))
@interface GEORPVoltaireProblemProvider : GEORPProblemProvider <GEOPBSessionRequesterDelegate>
{
    GEORequester *_submissionRequester;
    GEORequester *_statusRequester;
    CDUnknownBlockType _submissionErrorHandler;
    CDUnknownBlockType _submissionFinishedHandler;
    CDUnknownBlockType _statusErrorHandler;
    CDUnknownBlockType _statusFinishedHandler;
}

- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
