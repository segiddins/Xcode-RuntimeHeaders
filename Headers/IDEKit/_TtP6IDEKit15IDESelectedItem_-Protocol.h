//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTFileDataType, IDEEditorOpenSpecifier, IDEWorkspace, NSString, NSURL;

@protocol _TtP6IDEKit15IDESelectedItem_
- (IDEEditorOpenSpecifier *)editorOpenSpecifierWithDocumentExtensionIdentifier:(NSString *)arg1 error:(id *)arg2;
- (IDEEditorOpenSpecifier *)editorOpenSpecifierWithError:(id *)arg1;
- (void)navigableItemForTemporaryCompatibilityInWorkspace:(IDEWorkspace *)arg1 block:(void (^)(IDENavigableItem *))arg2;
- (id)representedObjectInWorkspace:(IDEWorkspace *)arg1;
- (BOOL)hasGreatestDocumentAncestorInWorkspace:(IDEWorkspace *)arg1;
@property(nonatomic, readonly) DVTFileDataType *contextualDocumentType;
@property(nonatomic, readonly) NSURL *documentURL;
@end

