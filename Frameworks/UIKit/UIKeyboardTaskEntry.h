//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <NSCopying>
{
    CDUnknownBlockType __task;
    NSArray *__creationStack;
}

@property(readonly, retain, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;
- (void)execute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(CDUnknownBlockType)arg1;

@end

