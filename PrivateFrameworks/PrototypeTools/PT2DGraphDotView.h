//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PT2DGraphView;

@interface PT2DGraphDotView : UIView
{
    PT2DGraphView *_graph;
    struct CGPoint _graphPoint;
}

@property(nonatomic) __weak PT2DGraphView *graph; // @synthesize graph=_graph;
@property(nonatomic) struct CGPoint graphPoint; // @synthesize graphPoint=_graphPoint;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

