//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject
{
    _Bool _looping;
    NSArray *_items;
}

+ (id)sequenceWithItems:(id)arg1 loops:(_Bool)arg2;
@property(readonly, nonatomic, getter=isLooping) _Bool looping; // @synthesize looping=_looping;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 loops:(_Bool)arg2;
- (id)init;

@end

