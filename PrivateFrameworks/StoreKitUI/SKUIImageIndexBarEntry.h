//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntry.h>

@class UIImage;

@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry
{
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)entryImage;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithImage:(id)arg1;

@end

