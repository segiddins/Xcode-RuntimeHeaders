//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUResourceEditor.h>

#import <GPURenderTargetEditor/DVTFindBarFindable-Protocol.h>
#import <GPURenderTargetEditor/DVTSourceTextViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, GPUProgramEditorAnnotationContext, GPUShaderSource, GPUSimpleGLSLSourceView, NSButton, NSDictionary, NSImageView, NSString, NSTabView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface GPUProgramEditor : GPUResourceEditor <DVTSourceTextViewDelegate, DVTFindBarFindable>
{
    unsigned long long _sharegroupID;
    NSView *mainView;
    NSTabView *tabView;
    GPUSimpleGLSLSourceView *sourceView;
    DVTBorderedView *bottomBar;
    NSButton *updateProgramButton;
    NSTextField *updateProgramLabel;
    NSTextField *compiledAndLinkedLabel;
    NSImageView *_compiledAndLinkedLabelBadge;
    DVTObservingToken *_programInfoUpdateToken;
    DVTObservingToken *_gpuControllerStateObserverToken;
    DVTObservingToken *_shaderProfilerResultsObserverToken;
    NSString *_programIdentifier;
    NSDictionary *programInfoDict;
    GPUProgramEditorAnnotationContext *annotationContext;
    GPUShaderSource *_shaderSource;
}

+ (id)_createProgramInfoDict:(id)arg1;
+ (id)assetBundle;
@property(retain, nonatomic) NSDictionary *programInfoDict; // @synthesize programInfoDict;
- (void).cxx_destruct;
- (struct _NSRange)selectedRangeForFindBar:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (BOOL)findBarSupported;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textDidBeginEditing:(id)arg1;
- (id)annotationContextForTextView:(id)arg1;
- (id)annotationContext;
- (void)_removeTextPreferencesObservers;
- (void)_setupTextPreferencesObservers;
- (void)updateProgram:(id)arg1;
- (void)makeAnnotationsWithInfoLog:(id)arg1 applyHeaderOffset:(BOOL)arg2;
- (void)beginEditor;
- (void)_onShaderEdited:(id)arg1;
- (void)_onProgramInfoDictUpdated;
- (void)_appendProfilerResultToInfoLog:(id)arg1 programItem:(id)arg2;
- (void)_showToolbar;
- (BOOL)_shouldEnableUpdateProgramButton;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)supportedResourceClasses;
- (void)_updateCompiledAndLinkedLabel;
- (id)_buildInfoLogWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

