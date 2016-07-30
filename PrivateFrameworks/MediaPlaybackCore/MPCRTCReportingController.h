//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/MPCReportingController.h>

@class NSMutableArray, NSObject, RTCReporting;
@protocol OS_dispatch_queue;

@interface MPCRTCReportingController : MPCReportingController
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _reportingState;
    NSMutableArray *_reportingStateLoadCompletionHandlers;
    RTCReporting *_rtcReporting;
    _Bool _shouldDeferEventFlushing;
}

- (void).cxx_destruct;
- (_Bool)_getMethod:(unsigned short *)arg1 respCode:(unsigned short *)arg2 infoDictionary:(id *)arg3 fromReportingEvent:(id)arg4;
@property(nonatomic) _Bool shouldDeferEventFlushing;
- (void)_recordReportingEvents:(id)arg1;
- (id)init;

@end

