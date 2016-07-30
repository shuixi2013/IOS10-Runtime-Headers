//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying>
{
    struct CGPoint _point1;
    struct CGPoint _point2;
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_mediaTimingFunction;
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)init;

@end
