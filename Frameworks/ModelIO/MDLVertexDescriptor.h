//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying>
{
    NSMutableArray *_attributes;
    NSMutableArray *_layouts;
}

@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (void)setPackedOffsets;
- (void)setPackedStrides;
- (void)reset;
- (void)removeAttributeNamed:(id)arg1;
- (void)addOrReplaceAttribute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeNamed:(id)arg1;
- (id)initWithVertexDescriptor:(id)arg1;
- (id)init;

@end

