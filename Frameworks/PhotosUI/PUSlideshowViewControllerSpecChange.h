//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpecChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange
{
    _Bool _chromeVisibilityChanged;
    _Bool _shouldShowPlaceholderChanged;
    _Bool _shouldShowChromeBarsChanged;
    _Bool _shouldObserveAirplayRouteChanged;
    _Bool _shouldShowAirplayButtonChanged;
}

@property(nonatomic, setter=_setShouldShowAirplayButtonChanged:) _Bool shouldShowAirplayButtonChanged; // @synthesize shouldShowAirplayButtonChanged=_shouldShowAirplayButtonChanged;
@property(nonatomic, setter=_setShouldObserveAirplayRouteChanged:) _Bool shouldObserveAirplayRouteChanged; // @synthesize shouldObserveAirplayRouteChanged=_shouldObserveAirplayRouteChanged;
@property(nonatomic, setter=_setShouldShowChromeBarsChanged:) _Bool shouldShowChromeBarsChanged; // @synthesize shouldShowChromeBarsChanged=_shouldShowChromeBarsChanged;
@property(nonatomic, setter=_setShouldShowPlaceholderChanged:) _Bool shouldShowPlaceholderChanged; // @synthesize shouldShowPlaceholderChanged=_shouldShowPlaceholderChanged;
@property(readonly, nonatomic) _Bool chromeVisibilityChanged; // @synthesize chromeVisibilityChanged=_chromeVisibilityChanged;
- (_Bool)changed;

@end

