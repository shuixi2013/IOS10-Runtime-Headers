//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/AFDictationDelegate-Protocol.h>
#import <UIKit/_UITouchPhaseChangeDelegate-Protocol.h>

@class AFDictationConnection, AFDictationOptions, AFPreferences, CADisplayLink, NSArray, NSMutableArray, NSString, NSTimer, UIAlertView, UIDictationStreamingOperations, UIKeyboardInputMode, UIWindow, _UIDictationPrivacySheetController, _UIDictationTelephonyMonitor;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate, _UITouchPhaseChangeDelegate>
{
    AFDictationConnection *_connection;
    AFDictationOptions *_options;
    AFPreferences *_preferences;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    UIAlertView *_dictationAvailableSoonAlert;
    _Bool _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_language;
    _Bool _recievingResults;
    _Bool _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    CDUnknownBlockType _finalResultsOperation;
    CADisplayLink *_streamingAnimationDisplayLink;
    _Bool cancelledByWaitingForLocalResults;
    long long _updatingDocument;
    _Bool _deferredCancellationRequested;
    _Bool _isOfflineMetricsSessionActive;
    _Bool _didUseOfflineDictation;
    long long _lastOfflineDictationMetricEvent;
    _UIDictationTelephonyMonitor *_monitor;
    _Bool dictationStartedFromGesture;
    _Bool _performingStreamingEditingOperation;
    _Bool _discardNextHypothesis;
    _Bool _hasPreheated;
    _Bool _wantsAvailabilityMonitoringWhenAppActive;
    NSString *_activationIdentifier;
    NSMutableArray *_pendingEdits;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
    struct _NSRange _insertionRange;
}

+ (void)poppedLastStreamingOperation;
+ (_Bool)usingTypeAndTalk;
+ (id)stringForViewMode:(int)arg1;
+ (id)stringForState:(int)arg1;
+ (void)logDictationString:(id)arg1;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)activeConnection;
+ (int)viewMode;
+ (_Bool)starkScreenExists;
+ (_Bool)remoteCanDictateCurrentInputMode;
+ (void)updateLandingView;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(_Bool)arg2 transform:(struct __CFString *)arg3 useServerCapitalization:(_Bool)arg4;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(_Bool)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(_Bool)arg5;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 ranges:(id *)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 ranges:(id *)arg3;
+ (void)siriPreferencesChanged;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (_Bool)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (_Bool)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (_Bool)takesPressesEnded:(id)arg1 forTextView:(id)arg2;
+ (_Bool)takesPressesChanged:(id)arg1 forTextView:(id)arg2;
+ (_Bool)takesPressesBegan:(id)arg1 forTextView:(id)arg2;
+ (_Bool)shouldHideCursorForTextView:(id)arg1;
+ (_Bool)shouldHideSelectionUIForTextView:(id)arg1;
+ (_Bool)isTextViewOnStarkScreen:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (_Bool)shouldEnableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (void)disableGestureHandler;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (_Bool)dictationIsFunctional;
+ (_Bool)fetchCurrentInputModeSupportsDictation;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(_Bool)arg2 transform:(struct __CFString *)arg3 useServerCapitalization:(_Bool)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2 fromKeyboard:(_Bool)arg3 useServerCapitalization:(_Bool)arg4;
+ (_Bool)isRunning;
+ (id)sharedInstance;
+ (id)activeInstance;
+ (double)serverManualEndpointingThreshold;
+ (_Bool)usingServerManualEndpointingThreshold;
+ (_Bool)setupForOpeningConnections;
+ (_Bool)setupForPhraseSerialization;
+ (_Bool)openAssistantFrameworkIfNecessary;
@property(nonatomic) _Bool wantsAvailabilityMonitoringWhenAppActive; // @synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive;
@property(retain, nonatomic) UIKeyboardInputMode *inputModeThatInvokedDictation; // @synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation;
@property(retain, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController; // @synthesize dictationPrivacySheetController=_dictationPrivacySheetController;
@property(retain, nonatomic) UIWindow *dictationPresenterWindow; // @synthesize dictationPresenterWindow=_dictationPresenterWindow;
@property(nonatomic) _Bool hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property(nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property(nonatomic) _Bool discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property(copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property(nonatomic) _Bool performingStreamingEditingOperation; // @synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation;
@property(retain, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property(nonatomic) _Bool dictationStartedFromGesture; // @synthesize dictationStartedFromGesture;
@property(copy, nonatomic) NSString *activationIdentifier; // @synthesize activationIdentifier=_activationIdentifier;
- (void)markKeyboardDidReset;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardInputMetricEvent;
- (void)_markOfflineDictationInputMetricEvent;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_endOfflineMetricsSession;
- (void)_beginOfflineMetricsSession;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)preheatIfNecessary;
- (_Bool)isRecievingResults;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;
- (id)_containingSearchBarForView:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(struct _NSRange *)arg3 documentTextInRange:(id *)arg4;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4;
- (void)_displayLinkFired:(id)arg1;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)resultWithTrailingSpace:(id)arg1;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (_Bool)needsLeadingSpaceForPhrases:(id)arg1;
- (_Bool)needsTrailingSpaceForPhrases:(id)arg1;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)restartDictationForTypeAndTalk;
- (_Bool)dictationIsModifyingText;
- (void)performIgnoringDocumentChanges:(CDUnknownBlockType)arg1;
- (_Bool)isIgnoringDocumentChanges;
- (void)stopDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)arg1;
- (void)cancelDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)switchToDictationInputMode;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_presentPrivacySheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentOptInAlertForDictationInputMode;
- (void)presentOptInAlertWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldPresentOptInAlert;
- (void)_endEnableDictationPromptAnimated:(_Bool)arg1;
- (void)_beginEnableDictationPrompt;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)stopHelpMessageDisplay;
- (void)startHelpMessageDisplay;
- (void)_displaySecureContentsAsPlainText:(_Bool)arg1 afterDelay:(double)arg2;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (void)startDictation;
- (void)startDictationForReason:(long long)arg1;
- (void)setupForDictationStartForReason:(long long)arg1;
- (void)setupForStreamingDictationStart;
- (void)dismissDictationView:(id)arg1;
- (_Bool)dictationEnabled;
- (id)connectionForStatisticsLogging;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnection;
- (id)connection;
- (id)_connection;
- (void)startRecordingLimitTimer;
- (void)cancelRecordingLimitTimer;
- (void)dealloc;
- (int)state;
- (void)errorAnimationDidFinish;
- (void)setState:(int)arg1;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)_runFinalizeOperation;
- (void)_setFinalResultHandler:(CDUnknownBlockType)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(long long)arg1;
- (void)completeStartConnectionForReason:(long long)arg1;
- (void)setupConnectionOptions;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (float)audioLevel;
- (_Bool)supportsInputMode:(id)arg1 error:(id *)arg2;
- (id)supportedDictationLanguages:(CDUnknownBlockType)arg1;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (_Bool)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (_Bool)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (void)_restartDictation;
- (void)enableProximity;
- (void)proximityStateChanged:(id)arg1;
- (void)disableAutorotation;
- (void)setDictationInputmode;
- (void)reenableAutorotation;
- (_Bool)disabledDueToTelephonyActivity;
- (id)streamingOperations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

