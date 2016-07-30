//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, TICharacterSetDescription, TIKeyEventMap, TIKeyboardBehaviors, TIKeyboardCandidate;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding>
{
    TIKeyboardBehaviors *_keyboardBehaviors;
    union {
        long long integerValue;
        struct {
            unsigned int canHandleKeyHitTest:1;
            unsigned int ignoresDeadKeys:1;
            unsigned int shouldExtendPriorWord:1;
            unsigned int suppliesCompletions:1;
            unsigned int supportsNumberKeySelection:1;
            unsigned int supportsSetPhraseBoundary:1;
            unsigned int suppressCompletionsForFieldEditor:1;
            unsigned int usesAutoDeleteWord:1;
            unsigned int usesCandidateSelection:1;
            unsigned int commitsAcceptedCandidate:1;
            unsigned int nextInputWouldStartSentence:1;
            unsigned int inputStringIsExemptFromChecker:1;
            unsigned int suppressPlaceholderCandidate:1;
            unsigned int usesAutocorrectionLists:1;
        } fields;
    } _mask;
    _Bool _shouldAddModifierSymbolsToWordCharacters;
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    NSString *_wordSeparator;
    unsigned long long _inputCount;
    unsigned long long _inputIndex;
    NSString *_inputString;
    TIKeyEventMap *_keyEventMap;
    NSString *_replacementForDoubleSpace;
    NSString *_shadowTyping;
    unsigned long long _initialCandidateBatchCount;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_shortcutCompletions;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    NSString *_searchStringForMarkedText;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *searchStringForMarkedText; // @synthesize searchStringForMarkedText=_searchStringForMarkedText;
@property(copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace; // @synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace;
@property(copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection; // @synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection;
@property(copy, nonatomic) TICharacterSetDescription *inputsToReject; // @synthesize inputsToReject=_inputsToReject;
@property(copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate; // @synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate;
@property(copy, nonatomic) TICharacterSetDescription *shortcutCompletions; // @synthesize shortcutCompletions=_shortcutCompletions;
@property(copy, nonatomic) TICharacterSetDescription *wordCharacters; // @synthesize wordCharacters=_wordCharacters;
@property(nonatomic) unsigned long long initialCandidateBatchCount; // @synthesize initialCandidateBatchCount=_initialCandidateBatchCount;
@property(nonatomic) _Bool shouldAddModifierSymbolsToWordCharacters; // @synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters;
@property(copy, nonatomic) NSString *shadowTyping; // @synthesize shadowTyping=_shadowTyping;
@property(copy, nonatomic) NSString *replacementForDoubleSpace; // @synthesize replacementForDoubleSpace=_replacementForDoubleSpace;
@property(retain, nonatomic) TIKeyEventMap *keyEventMap; // @synthesize keyEventMap=_keyEventMap;
@property(retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors; // @synthesize keyboardBehaviors=_keyboardBehaviors;
@property(copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(nonatomic) unsigned long long inputIndex; // @synthesize inputIndex=_inputIndex;
@property(nonatomic) unsigned long long inputCount; // @synthesize inputCount=_inputCount;
@property(copy, nonatomic) NSString *wordSeparator; // @synthesize wordSeparator=_wordSeparator;
@property(retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString; // @synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString;
- (_Bool)stringEndsWord:(id)arg1;
- (_Bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (_Bool)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (_Bool)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (_Bool)acceptInputString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool suppressPlaceholderCandidate;
@property(nonatomic) _Bool usesAutocorrectionLists;
@property(nonatomic) _Bool usesCandidateSelection;
@property(nonatomic) _Bool usesAutoDeleteWord;
@property(nonatomic) _Bool suppressCompletionsForFieldEditor;
@property(nonatomic) _Bool supportsSetPhraseBoundary;
@property(nonatomic) _Bool supportsNumberKeySelection;
@property(nonatomic) _Bool suppliesCompletions;
@property(nonatomic) _Bool shouldExtendPriorWord;
@property(nonatomic) _Bool nextInputWouldStartSentence;
@property(nonatomic) _Bool inputStringIsExemptFromChecker;
@property(nonatomic) _Bool ignoresDeadKeys;
@property(nonatomic) _Bool commitsAcceptedCandidate;
@property(nonatomic) _Bool canHandleKeyHitTest;

@end

