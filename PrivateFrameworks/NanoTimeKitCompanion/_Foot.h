//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Foot : _Geometry
{
    BOOL _animFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    NSMutableArray *_texs;
}

@property(nonatomic) unsigned char state; // @synthesize state=_state;
@property(nonatomic) BOOL frameDisplayTime60th; // @synthesize frameDisplayTime60th=_frameDisplayTime60th;
@property(nonatomic) BOOL animFrame; // @synthesize animFrame=_animFrame;
@property(retain, nonatomic) NSMutableArray *texs; // @synthesize texs=_texs;
- (void).cxx_destruct;

@end

