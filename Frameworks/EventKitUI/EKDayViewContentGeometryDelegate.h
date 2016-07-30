//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/CUIKSingleDayTimelineGeometryDelegate-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate>
{
    EKDayViewContent *_dayViewContent;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak EKDayViewContent *dayViewContent; // @synthesize dayViewContent=_dayViewContent;
- (void).cxx_destruct;
- (_Bool)shouldReverseLayoutDirection;
@property(readonly, nonatomic) struct CGRect displayedRect;
@property(readonly, nonatomic) _Bool originIsUpperLeft;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double timeWidth;
@property(readonly, nonatomic) double topPadding;
@property(readonly, nonatomic) double hourHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

