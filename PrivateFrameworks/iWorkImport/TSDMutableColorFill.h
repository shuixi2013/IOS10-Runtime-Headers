//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDColorFill.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableColorFill : TSDColorFill <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double saturation; // @dynamic saturation;
@property(nonatomic) double brightness; // @dynamic brightness;
@property(nonatomic) double hue; // @dynamic hue;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(copy, nonatomic) TSUColor *color; // @dynamic color;

@end

