//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKTextAnnotation : NSObject
{
    _Bool _machineGenerated;
    unsigned long long _type;
    struct _NSRange _range;
}

@property _Bool machineGenerated; // @synthesize machineGenerated=_machineGenerated;
@property unsigned long long type; // @synthesize type=_type;
@property struct _NSRange range; // @synthesize range=_range;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 andType:(unsigned long long)arg2 machineGenerated:(_Bool)arg3;
- (id)init;

@end

