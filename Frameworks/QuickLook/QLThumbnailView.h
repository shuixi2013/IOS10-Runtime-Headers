//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QLThumbnailOperation, UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView
{
    QLThumbnailOperation *_thumbnailOperation;
    UIImage *_image;
    long long _pageNumber;
    _Bool _alwaysVisible;
    struct CGRect unselectedFrame;
    struct CGRect _unselectedFrame;
}

@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property _Bool alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
@property(retain) QLThumbnailOperation *thumbnailOperation;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

