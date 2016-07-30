//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNAnimationAttributes.h>

__attribute__((visibility("hidden")))
@interface KNTransitionAttributes : KNAnimationAttributes
{
}

+ (_Bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
+ (id)defaultAttributesForEffect:(id)arg1;
+ (id)p_readDeprecatedAttributesForArchive:(const struct TransitionAttributesArchive *)arg1 intoDictionary:(id)arg2;
+ (void)p_readTransitionAttributesForArchive:(const struct TransitionAttributesArchive *)arg1 intoDictionary:(id)arg2;
+ (void)p_readSharedAttributesForArchive:(struct AnimationAttributesArchive *)arg1 intoDictionary:(id)arg2;
- (void)p_writeTransitionAttributesToArchive:(struct TransitionAttributesArchive *)arg1;
- (void)p_writeSharedAttributesToArchive:(struct TransitionAttributesArchive *)arg1;
- (void)encodeToArchive:(struct TransitionAttributesArchive *)arg1;
- (id)initFromTransitionAttributesArchive:(const struct TransitionAttributesArchive *)arg1;

@end

