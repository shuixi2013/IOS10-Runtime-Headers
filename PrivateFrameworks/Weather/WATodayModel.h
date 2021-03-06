//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSError, WAForecastModel, WFLocation;

@interface WATodayModel : NSObject
{
    WFLocation *_location;
    WAForecastModel *_forecastModel;
    NSDate *_lastUpdateDate;
    NSError *_lastError;
}

+ (id)modelWithLocation:(id)arg1;
+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelOperationQueue;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
- (void).cxx_destruct;
- (void)_persistState;
- (void)_fireNotification:(id)arg1 event:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_fireWantsUpdateNotificationBecauseOfEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireWasUpdatedNotificationForEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireEventNotification:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireWillUpdateNotificationForEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) WAForecastModel *forecastModel; // @synthesize forecastModel=_forecastModel;
@property(retain, nonatomic) WFLocation *location; // @synthesize location=_location;
- (_Bool)executeModelUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLocation:(id)arg1;

@end

