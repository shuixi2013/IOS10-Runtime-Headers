//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLDetectedObject.h>

@interface CVMLRectangleObservation : CVMLDetectedObject
{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
}

@property struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property struct CGPoint topRight; // @synthesize topRight=_topRight;
@property struct CGPoint topLeft; // @synthesize topLeft=_topLeft;

@end

