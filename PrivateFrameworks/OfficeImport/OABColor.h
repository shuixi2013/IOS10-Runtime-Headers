//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABColor : NSObject
{
}

+ (int)writeSystemColorID:(int)arg1;
+ (id)readColor:(const struct EshColor *)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3;
+ (struct EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2;
+ (int)readColorAdjustmentType:(int)arg1;
+ (int)readSystemColorID:(int)arg1;

@end

