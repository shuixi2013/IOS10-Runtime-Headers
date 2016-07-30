//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextInputStringTokenizer.h>

@class TSDTextInputResponder;
@protocol TSDTextInput;

@interface TSDTextInputTokenizer : UITextInputStringTokenizer
{
    TSDTextInputResponder *_textInputResponder;
}

- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)p_moveToEndOfWordFromPosition:(id)arg1;
- (id)p_moveToStartOfWordFromPosition:(id)arg1;
- (id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
@property(readonly, nonatomic) id <TSDTextInput> editor;
- (id)initWithTextInput:(id)arg1;

@end

