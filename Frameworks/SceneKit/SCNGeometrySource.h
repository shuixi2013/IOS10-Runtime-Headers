//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    struct __C3DMeshSource *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    short _componentType;
    unsigned short _componentCount;
    long long _dataOffset;
    long long _dataStride;
    unsigned char _mkSemantic;
}

+ (_Bool)supportsSecureCoding;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataByConvertingDoublesToFloats:(const double *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DMeshSource *)meshSource;
- (void)_clearC3DCache;
- (short)_componentType;
@property(readonly, nonatomic) long long dataStride;
@property(readonly, nonatomic) long long dataOffset;
@property(readonly, nonatomic) long long bytesPerComponent;
@property(readonly, nonatomic) long long componentsPerVector;
@property(readonly, nonatomic) _Bool floatComponents;
@property(readonly, nonatomic) long long vectorCount;
@property(readonly, nonatomic) NSString *semantic;
@property(readonly, nonatomic) NSData *data;
- (void)setMkSemantic:(id)arg1;
- (id)mkSemantic;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;

@end

