//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) MTLStencilDescriptor *backFaceStencil; // @dynamic backFaceStencil;
@property(nonatomic) unsigned long long depthCompareFunction; // @dynamic depthCompareFunction;
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate; // @dynamic depthStencilPrivate;
@property(nonatomic, getter=isDepthWriteEnabled) _Bool depthWriteEnabled; // @dynamic depthWriteEnabled;
@property(copy, nonatomic) MTLStencilDescriptor *frontFaceStencil; // @dynamic frontFaceStencil;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

