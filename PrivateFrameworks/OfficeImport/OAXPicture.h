//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXPicture : NSObject
{
}

+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)mapImageWithGifAsMovie:(id)arg1 xmlNode:(struct _xmlNode *)arg2 drawingState:(id)arg3;
+ (id)GifSubBlip:(id)arg1 drawingState:(id)arg2;
+ (void)readNonVisualPropertiesFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toDrawable:(id)arg3 drawingState:(id)arg4;

@end

