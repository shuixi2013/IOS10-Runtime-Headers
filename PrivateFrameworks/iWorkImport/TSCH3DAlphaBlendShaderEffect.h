//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

__attribute__((visibility("hidden")))
@interface TSCH3DAlphaBlendShaderEffect : TSCH3DShaderEffect
{
}

+ (void)setChartAlpha:(float)arg1 effectsStates:(id)arg2;
+ (void)setElementAlpha:(float)arg1 effectsStates:(id)arg2;
+ (id)variableAlphaBlendValue;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)effect;
+ (id)_singletonAlloc;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (id)variableAlphaBlendValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

