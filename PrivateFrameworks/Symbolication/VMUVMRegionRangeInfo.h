//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMUVMRegionRangeInfo : NSObject
{
    unsigned long long address;
    unsigned long long size;
    unsigned long long stackIdentifier;
    unsigned int userTag;
}

@property unsigned int userTag; // @synthesize userTag;
@property unsigned long long stackIdentifier; // @synthesize stackIdentifier;
@property unsigned long long size; // @synthesize size;
@property unsigned long long address; // @synthesize address;
@property(readonly) struct _VMURange range;
- (id)init;

@end

