//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DChartElementProperties, TSCH3DChartElementSceneObject, TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline;

__attribute__((visibility("hidden")))
@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartElementSceneObject *mSceneObject;
    TSCH3DSceneRenderPipeline *mPipeline;
    TSCH3DChartElementProperties *mProperties;
    vector_cd7372eb mDelayedItems;
}

+ (id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)processItems;
- (void)performItemsProcessing;
- (void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2_3b141483 *)arg2;
- (void)processDelayedItemsWithOpacity:(float)arg1;
- (_Bool)p_delayedItemsAreUnique;
- (struct RenderElementInfo)elementInfoWithSeries:(id)arg1 position:(const tvec2_3b141483 *)arg2;
@property(readonly, nonatomic) TSCH3DRenderProcessor *processor;
@property(readonly, nonatomic) _Bool geometryOnly;
@property(readonly, nonatomic) _Bool useBoundsGeometry;
@property(readonly, nonatomic) _Bool pushStates;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;

@end

