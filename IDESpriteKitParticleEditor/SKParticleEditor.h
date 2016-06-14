//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTNotificationToken, NSArray, SKEmitterNode, SKInputView, SKParticleDocument, SKParticleEditorScene, SKParticleEditorView;

@interface SKParticleEditor : IDEEditor
{
    DVTNotificationToken *_windowOcclusionToken;
    SKInputView *_skView;
    SKParticleEditorView *_editorView;
    SKParticleEditorScene *_editorScene;
    BOOL _oldIsScenePaused;
    SKEmitterNode *_emitter;
    NSArray *_currentSelectedItems;
}

@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(readonly, nonatomic) SKEmitterNode *emitter; // @synthesize emitter=_emitter;
- (void).cxx_destruct;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)takeFocus;
- (id)currentSelectedDocumentLocations;
- (void)_createEditorScene;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
@property(readonly, nonatomic) SKParticleDocument *particleDocument;

@end

