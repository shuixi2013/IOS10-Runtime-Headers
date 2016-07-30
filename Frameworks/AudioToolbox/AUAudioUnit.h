//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AUAudioUnitBusArray, AUAudioUnitPreset, AUParameterTree, NSArray, NSDictionary, NSString;

@interface AUAudioUnit : NSObject
{
    struct OpaqueAudioComponent *_component;
    NSString *_componentName;
    unsigned int _componentVersion;
    struct UIViewController *_cachedViewController;
    unsigned int _maximumFramesToRender;
    _Bool _renderResourcesAllocated;
    _Bool _allParameterValues;
    _Bool _shouldBypassEffect;
    _Bool _canProcessInPlace;
    _Bool _renderingOffline;
    _Bool _supportsMPE;
    long long _virtualMIDICableCount;
    NSArray *_factoryPresets;
    AUAudioUnitPreset *_currentPreset;
    double _latency;
    double _tailTime;
    long long _renderQuality;
    CDUnknownBlockType _musicalContextBlock;
    CDUnknownBlockType _transportStateBlock;
    NSString *_contextName;
    struct AudioComponentDescription _componentDescription;
    struct RealtimeState _realtimeState;
}

+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned int)arg4;
@property(nonatomic) struct RealtimeState realtimeState; // @synthesize realtimeState=_realtimeState;
@property(readonly, nonatomic) _Bool supportsMPE; // @synthesize supportsMPE=_supportsMPE;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(copy, nonatomic) CDUnknownBlockType transportStateBlock; // @synthesize transportStateBlock=_transportStateBlock;
@property(copy, nonatomic) CDUnknownBlockType musicalContextBlock; // @synthesize musicalContextBlock=_musicalContextBlock;
@property(nonatomic, getter=isRenderingOffline) _Bool renderingOffline; // @synthesize renderingOffline=_renderingOffline;
@property(readonly, nonatomic) _Bool canProcessInPlace; // @synthesize canProcessInPlace=_canProcessInPlace;
@property(nonatomic) _Bool shouldBypassEffect; // @synthesize shouldBypassEffect=_shouldBypassEffect;
@property(nonatomic) long long renderQuality; // @synthesize renderQuality=_renderQuality;
@property(readonly, nonatomic) double tailTime; // @synthesize tailTime=_tailTime;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(retain, nonatomic) AUAudioUnitPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
@property(readonly, copy, nonatomic) NSArray *factoryPresets; // @synthesize factoryPresets=_factoryPresets;
@property(readonly, nonatomic) long long virtualMIDICableCount; // @synthesize virtualMIDICableCount=_virtualMIDICableCount;
@property(readonly, nonatomic) _Bool allParameterValues; // @synthesize allParameterValues=_allParameterValues;
@property(readonly, nonatomic) _Bool renderResourcesAllocated; // @synthesize renderResourcesAllocated=_renderResourcesAllocated;
@property(readonly, nonatomic) struct AudioComponentDescription componentDescription; // @synthesize componentDescription=_componentDescription;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) unsigned int maximumFramesToRender;
- (void)setRenderResourcesAllocated:(_Bool)arg1;
- (_Bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCachedViewController:(struct UIViewController *)arg1;
- (struct UIViewController *)cachedViewController;
@property(copy, nonatomic) NSDictionary *fullStateForDocument;
@property(copy, nonatomic) NSDictionary *fullState;
@property(readonly, nonatomic) AUAudioUnitBusArray *outputBusses;
@property(readonly, nonatomic) AUAudioUnitBusArray *inputBusses;
@property(readonly, copy, nonatomic) NSArray *channelCapabilities;
- (void)reset;
- (id)parametersForOverviewWithCount:(long long)arg1;
@property(readonly, nonatomic) AUParameterTree *parameterTree;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)removeRenderObserver:(long long)arg1;
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType scheduleMIDIEventBlock;
@property(readonly, nonatomic, getter=isMusicDeviceOrEffect) _Bool musicDeviceOrEffect;
@property(readonly, nonatomic) CDUnknownBlockType scheduleParameterBlock;
- (CDUnknownBlockType)internalRenderBlock;
@property(readonly, nonatomic) CDUnknownBlockType renderBlock;
- (struct AUEventSchedule *)eventSchedule;
@property(readonly, nonatomic) unsigned int componentVersion;
@property(readonly, copy, nonatomic) NSString *manufacturerName;
@property(readonly, copy, nonatomic) NSString *audioUnitName;
@property(readonly, copy, nonatomic) NSString *componentName;
@property(readonly, nonatomic) struct OpaqueAudioComponent *component;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 error:(id *)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)init;

@end

