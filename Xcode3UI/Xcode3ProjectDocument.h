//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorContainerDocument.h>

#import <Xcode3UI/DVTTextFindable-Protocol.h>

@class NSString, Xcode3Project;

@interface Xcode3ProjectDocument : IDEEditorContainerDocument <DVTTextFindable>
{
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
+ (Class)_containerClass;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
@property(readonly) Xcode3Project *project;
- (void)setSdefSupport_scmTranscript:(id)arg1;
- (id)sdefSupport_scmTranscript;
- (void)setSdefSupport_project:(id)arg1;
- (id)sdefSupport_project;
- (id)objectSpecifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

