//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

