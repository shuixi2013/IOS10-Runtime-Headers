//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATState;

@interface CATTransition : NSObject
{
    CATState *_state;
    SEL _action;
}

+ (id)new;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak CATState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(id)arg1 action:(SEL)arg2;
- (id)init;

@end

