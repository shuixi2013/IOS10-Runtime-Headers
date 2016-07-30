//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDTemporalInteractionAdvisor : NSObject
{
    int _settingsNotifyToken;
    _CDInteractionStore *_store;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableDictionary *_consumerToModelMap;
}

@property int settingsNotifyToken; // @synthesize settingsNotifyToken=_settingsNotifyToken;
@property(retain, nonatomic) NSMutableDictionary *consumerToModelMap; // @synthesize consumerToModelMap=_consumerToModelMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)rankContacts:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)rankerForDate:(id)arg1 settings:(id)arg2;
- (void)updateConsumerModel;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

