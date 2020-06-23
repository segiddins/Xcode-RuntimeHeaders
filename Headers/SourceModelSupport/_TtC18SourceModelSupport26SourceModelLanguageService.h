//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SMSourceModel;

@interface _TtC18SourceModelSupport26SourceModelLanguageService : NSObject
{
    MISSING_TYPE *buffer;
    MISSING_TYPE *hostExtension;
    MISSING_TYPE *sourceEditorLanguage;
    MISSING_TYPE *sourceCodeLanguage;
    MISSING_TYPE *identifier;
    MISSING_TYPE *sourceModelWithoutParsing;
    MISSING_TYPE *_batchEditingCount;
    MISSING_TYPE *commentType;
    MISSING_TYPE *markType;
    MISSING_TYPE *docCommentType;
    MISSING_TYPE *docCommentKeywordType;
    MISSING_TYPE *docCommentParameterType;
    MISSING_TYPE *stringType;
    MISSING_TYPE *characterType;
    MISSING_TYPE *numberType;
    MISSING_TYPE *keywordType;
    MISSING_TYPE *preprocessorType;
    MISSING_TYPE *preprocessorKeywordType;
    MISSING_TYPE *attributeType;
    MISSING_TYPE *entityType;
    MISSING_TYPE *entityStartType;
    MISSING_TYPE *markupDelimiterType;
    MISSING_TYPE *markupHeadingType;
    MISSING_TYPE *markupCodeType;
    MISSING_TYPE *markupEmphasisType;
    MISSING_TYPE *markupEmphasisStrongType;
    MISSING_TYPE *markupStrikethroughType;
    MISSING_TYPE *markupQuoteType;
    MISSING_TYPE *urlType;
    MISSING_TYPE *mailURLType;
    MISSING_TYPE *identifierType;
    MISSING_TYPE *plainIdentifierType;
    MISSING_TYPE *typeDeclarationType;
    MISSING_TYPE *otherDeclarationType;
    MISSING_TYPE *classType;
    MISSING_TYPE *systemClassType;
    MISSING_TYPE *functionType;
    MISSING_TYPE *systemFunctionType;
    MISSING_TYPE *constantType;
    MISSING_TYPE *systemConstantType;
    MISSING_TYPE *typeType;
    MISSING_TYPE *systemTypeType;
    MISSING_TYPE *variableType;
    MISSING_TYPE *systemVariableType;
    MISSING_TYPE *macroType;
    MISSING_TYPE *systemMacroType;
    MISSING_TYPE *gitDiffFilesType;
    MISSING_TYPE *gitDiffFileIndexType;
    MISSING_TYPE *gitDiffFileAddedType;
    MISSING_TYPE *gitDiffFileDeletedType;
    MISSING_TYPE *gitDiffFileRenamedFromType;
    MISSING_TYPE *gitDiffFileRenamedToType;
    MISSING_TYPE *gitDiffFileRenamedSimilarityType;
    MISSING_TYPE *diffUnifiedFileOriginalType;
    MISSING_TYPE *diffUnifiedFileNewType;
    MISSING_TYPE *diffUnifiedRangeInformationType;
    MISSING_TYPE *diffUnifiedChangeDeletionType;
    MISSING_TYPE *diffUnifiedChangeAdditionType;
    MISSING_TYPE *heading1;
    MISSING_TYPE *heading2;
    MISSING_TYPE *heading3;
    MISSING_TYPE *heading4;
    MISSING_TYPE *heading5;
    MISSING_TYPE *heading6;
    MISSING_TYPE *topLevelBlockType;
    MISSING_TYPE *symbolTable;
    MISSING_TYPE *topLandmark;
    MISSING_TYPE *landmarksNeedUpdating;
    MISSING_TYPE *landmarkMap;
    MISSING_TYPE *foldableRegionsNeedUpdating;
    MISSING_TYPE *_languageSpecificFoldableRanges;
    MISSING_TYPE *markupLanguage;
    MISSING_TYPE *documentationSyntaxProvider;
    MISSING_TYPE *typeList;
    MISSING_TYPE *basicDiagnosticProvider;
    MISSING_TYPE *$__lazy_storage_$_hostProvidedDiagnosticsContinuation;
    MISSING_TYPE *hostProvidedDiagnosticsGeneration;
    MISSING_TYPE *indentationTriggers;
    MISSING_TYPE *_cachedBufferStringInfo;
}

- (void).cxx_destruct;
- (id)init;
- (void)scheduleLazyInvalidationForRange:(struct _NSRange)arg1;
- (id)stringForItem:(id)arg1;
- (id)language;
- (unsigned long long)leadingWhitespacePositionsForLine:(unsigned long long)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)length;
- (id)string;
@property(nonatomic, readonly) long long lineCount;
@property(nonatomic, readonly) SMSourceModel *sourceModel;

@end
