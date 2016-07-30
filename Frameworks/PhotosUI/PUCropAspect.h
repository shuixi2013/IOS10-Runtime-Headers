//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUCropAspect : NSObject
{
    double _width;
    double _height;
    NSString *_localizedName;
}

+ (id)allAspectsWithOriginalSize:(struct CGSize)arg1 currentSize:(struct CGSize)arg2;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)description;
- (id)inverseAspect;
- (struct CGRect)constrainRect:(struct CGRect)arg1 boundingRect:(struct CGRect)arg2 boundingAngle:(double)arg3 minSize:(struct CGSize)arg4;
- (double)heightForWidth:(double)arg1;
- (double)widthForHeight:(double)arg1;
- (_Bool)isEqualToCropAspect:(id)arg1;
@property(readonly, nonatomic) double ratio;
- (id)_initWithWidth:(double)arg1 height:(double)arg2 localizedName:(id)arg3;
- (id)init;
- (id)initWithWidth:(double)arg1 height:(double)arg2;

@end

