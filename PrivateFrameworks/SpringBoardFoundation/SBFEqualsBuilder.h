//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFEqualsBuilder : NSObject
{
}

+ (_Bool)isSize:(struct CGSize)arg1 equalToOther:(struct CGSize)arg2;
+ (_Bool)isBool:(_Bool)arg1 equalToOther:(_Bool)arg2;
+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2;
+ (_Bool)evaluateBuilderBlock:(CDUnknownBlockType)arg1 remainingBlocks:(struct __va_list_tag [1])arg2;
+ (_Bool)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;
+ (_Bool)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(CDUnknownBlockType)arg4;
+ (_Bool)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(CDUnknownBlockType)arg3;

@end

