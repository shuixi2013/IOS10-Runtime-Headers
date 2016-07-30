//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_56a8f59f _transformStruct;
}

+ (_Bool)supportsSecureCoding;
+ (id)transform;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property CDStruct_56a8f59f transformStruct;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (void)prependTransform:(id)arg1;
- (void)appendTransform:(id)arg1;
- (void)invert;
- (void)scaleXBy:(double)arg1 yBy:(double)arg2;
- (void)scaleBy:(double)arg1;
- (void)rotateByRadians:(double)arg1;
- (void)rotateByDegrees:(double)arg1;
- (void)translateXBy:(double)arg1 yBy:(double)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransform:(id)arg1;
- (id)init;

@end

