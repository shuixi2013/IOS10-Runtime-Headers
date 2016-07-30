//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKComplication;
@protocol NTKComplicationDataSourceDelegate;

@interface NTKComplicationDataSource : NSObject
{
    NTKComplication *_complication;
    long long _family;
    id <NTKComplicationDataSourceDelegate> _delegate;
}

+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1;
+ (_Bool)acceptsComplicationFamily:(long long)arg1;
+ (Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2;
@property(nonatomic) __weak id <NTKComplicationDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
@property(readonly, nonatomic) NTKComplication *complication; // @synthesize complication=_complication;
- (void).cxx_destruct;
- (void)getDesiredUpdateIntervalWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineEndDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getTimelineStartDateWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (id)lockedTemplate;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic) _Bool supportsTapAction;
@property(readonly, nonatomic) unsigned long long timelineAnimationBehavior;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;

@end

