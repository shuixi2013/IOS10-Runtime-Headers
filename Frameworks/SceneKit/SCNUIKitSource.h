//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

__attribute__((visibility("hidden")))
@interface SCNUIKitSource : SCNImageSource
{
    id _uiView;
    id _uiWindow;
}

@property(retain, nonatomic) id uiWindow; // @synthesize uiWindow=_uiWindow;
@property(retain, nonatomic) id uiView; // @synthesize uiView=_uiView;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (id)init;

@end

