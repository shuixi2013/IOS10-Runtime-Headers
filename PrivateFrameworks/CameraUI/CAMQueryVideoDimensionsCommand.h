//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand
{
    CDUnknownBlockType __completionBlock;
}

@property(copy, nonatomic, setter=_setCompletionBlock:) CDUnknownBlockType _completionBlock; // @synthesize _completionBlock=__completionBlock;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

