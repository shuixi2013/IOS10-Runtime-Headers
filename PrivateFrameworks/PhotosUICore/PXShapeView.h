//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

+ (Class)layerClass;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)shapeLayer;

@end

