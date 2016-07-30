//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject
{
    _Bool _animated;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
}

@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)playCompletions:(_Bool)arg1;
- (void)playAnimations;
- (void)dealloc;
- (void)animateAlongsideAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initCoordinatorAnimated:(_Bool)arg1;

@end

