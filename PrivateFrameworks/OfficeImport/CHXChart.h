//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXChart : NSObject
{
}

+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 chartStyleId:(int)arg2 state:(id)arg3;
+ (id)readFromXmlDocument:(struct _xmlDoc *)arg1 state:(id)arg2;
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(struct _xmlNode *)arg1;
+ (void)readDefaultTextPropertiesFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;
+ (void)readChartFromXmlNode:(struct _xmlNode *)arg1 chart:(id)arg2 state:(id)arg3;

@end

