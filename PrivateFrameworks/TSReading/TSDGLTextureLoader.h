//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSDGLTextureLoader : NSObject
{
}

+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;
+ (id)p_textureInfoFromCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2;

@end

