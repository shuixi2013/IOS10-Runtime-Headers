//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLVideoTranscoder : NSObject
{
}

+ (id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_1b6d18a9)arg3 endTime:(CDStruct_1b6d18a9)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)exportPresetsCompatibleWithVideoAtURL:(id)arg1;

@end

