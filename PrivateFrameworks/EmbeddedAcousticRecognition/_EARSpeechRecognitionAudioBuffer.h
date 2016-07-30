//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject
{
    shared_ptr_5649258a _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    _Bool _cancelled;
    _Bool _ended;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (void)endAudio;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)_initWithAudioBuffer:(shared_ptr_5649258a)arg1 speechRecognizer:(id)arg2;

@end

