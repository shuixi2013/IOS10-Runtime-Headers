//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VSACompoundValueTransformer : NSValueTransformer
{
    NSArray *_valueTransformers;
}

@property(copy, nonatomic) NSArray *valueTransformers; // @synthesize valueTransformers=_valueTransformers;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end
