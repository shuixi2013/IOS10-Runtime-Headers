//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/NSFastEnumeration-Protocol.h>

@class AUAudioUnit, NSMutableArray;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_busses;
    _Bool _countChangeable;
    AUAudioUnit *_ownerAudioUnit;
    long long _busType;
    vector_07ddb480 _observers;
}

@property(nonatomic) vector_07ddb480 observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) long long busType; // @synthesize busType=_busType;
@property(readonly, nonatomic) AUAudioUnit *ownerAudioUnit; // @synthesize ownerAudioUnit=_ownerAudioUnit;
@property(readonly, nonatomic, getter=isCountChangeable) _Bool countChangeable; // @synthesize countChangeable=_countChangeable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)replaceBusses:(id)arg1;
- (void)indexBusses;
- (void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (_Bool)setBusCount:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3;
- (id)init;

@end

