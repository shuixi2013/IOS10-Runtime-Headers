//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextInternal-Protocol.h>
#import <CoreDuetContext/_CDUserContext-Protocol.h>

@class NSMutableDictionary, NSNumber, _CDInMemoryContext;
@protocol OS_dispatch_queue;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_contexts;
    _CDInMemoryContext *_userContext;
    NSNumber *_localDeviceID;
}

+ (id)sharedUserContext;
+ (id)userContext;
@property(retain, nonatomic) NSNumber *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) _CDInMemoryContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)evaluatePredicate:(id)arg1;
- (void)deregisterCallback:(id)arg1;
- (void)registerCallback:(id)arg1;
- (_Bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)objectForContextualKeyPath:(id)arg1;
- (_Bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)contextForKeyPath:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;
- (id)localContext;
- (id)init;

@end

