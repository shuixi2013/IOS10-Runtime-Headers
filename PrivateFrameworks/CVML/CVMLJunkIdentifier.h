//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@interface CVMLJunkIdentifier : CVMLDetector
{
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> mJunkDescriptorImpl;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> mJunkClassifierImpl;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 cancellationSemaphore:(id)arg4 error:(id *)arg5;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

