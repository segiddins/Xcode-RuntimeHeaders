//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEWorkspaceDocument, NSString;
@protocol IDEIndexSymbol;

@protocol IDERefactoringTransformation
@property(nonatomic, retain) IDEWorkspaceDocument *workspaceDocument;
@property(nonatomic, retain) id <IDEIndexSymbol> selectedSymbol;
@property(nonatomic, copy) NSString *renameNewName;
@property(nonatomic, readonly) NSString *renameOldName;
@end

