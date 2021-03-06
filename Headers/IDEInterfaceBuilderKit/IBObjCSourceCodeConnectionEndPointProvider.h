//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSourceCodeConnectionEndPointProvider.h>

@interface IBObjCSourceCodeConnectionEndPointProvider : IBSourceCodeConnectionEndPointProvider
{
}

- (id)endPointHandlerForPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (long long)validatedRealLineNumberForRealInsertionCharacterIndex:(long long)arg1 inClassItem:(id)arg2;
- (BOOL)shouldIgnoreContainingSourceModelItemIfFolded:(id)arg1;
- (id)containingModelItemForSourceModelItem:(id)arg1 inClassItem:(id)arg2;
- (id)initWithSourceEditorView:(id)arg1;

@end

