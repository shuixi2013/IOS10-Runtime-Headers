//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartColumnSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartBarSceneObject : TSCH3DChartColumnSceneObject
{
}

+ (struct TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_339a9a6e)arg2;
+ (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
+ (void)addHorizontalTransformToProperties:(id)arg1;
+ (_Bool)isHorizontalChart;
+ (_Bool)isStacked;
+ (id)chartSeriesType;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;

@end

