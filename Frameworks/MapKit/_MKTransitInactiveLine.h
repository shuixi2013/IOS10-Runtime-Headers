//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKInactiveTransitLine-Protocol.h>

@class NSDate, NSString, NSTimeZone;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine>
{
    id <GEOTransitLine> _line;
    _Bool _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *serviceResumesDescription;
@property(readonly, nonatomic) id <GEOTransitLine> line;
- (id)initWithTransitLine:(id)arg1 blocked:(_Bool)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

