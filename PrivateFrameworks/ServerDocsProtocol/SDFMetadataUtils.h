//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SDFMetadataUtils : NSObject
{
}

+ (id)metadataForDirectoryContentsFile:(id)arg1;
+ (_Bool)setMetadataOnURL:(id)arg1 keyedValues:(id)arg2 error:(id *)arg3;
+ (_Bool)setTimespecForFD:(int)arg1 commonattr:(unsigned int)arg2 timespec:(struct timespec)arg3 error:(id *)arg4;

@end

