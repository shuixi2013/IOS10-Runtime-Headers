//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/TXRBuffer-Protocol.h>

@class NSString;
@protocol MTLBuffer;

@interface MTKTextureIOBuffer : NSObject <TXRBuffer>
{
    id <MTLBuffer> _buffer;
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(CDUnknownBlockType)arg3 device:(id)arg4 error:(id *)arg5;
- (id)initWithLength:(unsigned long long)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

