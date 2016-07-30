//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSArray, SKAction;

@interface NTKCollectionNode : SKNode
{
    NSArray *_nodes;
    SKAction *_appearAction;
    SKAction *_disappearAction;
    CDUnknownBlockType _animateBlock;
    double _radius;
}

+ (id)labels3_10_90Chrono;
+ (id)labels3Chrono;
+ (id)labels6_10_40Chrono;
+ (id)labels6Chrono;
+ (id)ticks6Chrono;
+ (id)labels30Chrono;
+ (id)ticks30Chrono;
+ (id)labels60Chrono;
+ (id)hoursChrono;
+ (id)ticks60Chrono;
+ (id)ticksColorAnalog;
+ (id)hours12ZeusWithFont:(long long)arg1;
+ (id)hours12;
+ (id)hours4;
+ (id)minutesUtilitarian;
+ (id)minutesPills;
+ (id)ticksPills;
+ (id)ticks240;
+ (id)ticks120;
+ (id)ticks60;
+ (id)ticks60Utilitarian;
+ (float)innerRadius;
+ (float)outerRadius;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) CDUnknownBlockType animateBlock; // @synthesize animateBlock=_animateBlock;
@property(retain, nonatomic) SKAction *disappearAction; // @synthesize disappearAction=_disappearAction;
@property(retain, nonatomic) SKAction *appearAction; // @synthesize appearAction=_appearAction;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (void)createSubNodes;
- (void)scaleNodes:(id)arg1 fraction:(double)arg2;
- (void)fade:(double)arg1;
- (void)fadeAndScale:(double)arg1;
- (void)scaleNodes:(double)arg1;
- (void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2;
- (void)fadeNodes:(double)arg1;
- (void)fadeNodes:(double)arg1 except:(id)arg2;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(_Bool)arg3 round:(_Bool)arg4;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(_Bool)arg4 round:(_Bool)arg5;
- (void)colorize:(id)arg1 c1:(double)arg2 c2:(double)arg3;
- (void)disappearAnimated;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(double)arg1;
- (id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

