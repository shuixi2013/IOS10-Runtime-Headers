//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXBorders : NSObject
{
}

+ (id)edBordersFromXmlBordersElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)initialize;
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg1;
+ (int)edBorderStyleFromXmlBorderStyleString:(id)arg1;
+ (id)edBorderFromXmlElement:(struct _xmlNode *)arg1 diagonalType:(int)arg2 state:(id)arg3;

@end

