//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DVTFuzzyMatchCandidate {
    unsigned int _field1;
    unsigned long long _field2;
    union {
        unsigned char _field1;
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :6;
        } _field2;
    } _field3;
    unsigned char _field4[0];
};

struct IDESourceKitUIDKeys {
    struct _sourcekit_uid_s *TestFailedRequest;
    struct _sourcekit_uid_s *Crash;
    struct _sourcekit_uid_s *Results;
    struct _sourcekit_uid_s *Request;
    struct _sourcekit_uid_s *Kind;
    struct _sourcekit_uid_s *Identifier;
    struct _sourcekit_uid_s *Name;
    struct _sourcekit_uid_s *Names;
    struct _sourcekit_uid_s *CompilerArgs;
    struct _sourcekit_uid_s *Offset;
    struct _sourcekit_uid_s *Length;
    struct _sourcekit_uid_s *USR;
    struct _sourcekit_uid_s *Line;
    struct _sourcekit_uid_s *Column;
    struct _sourcekit_uid_s *EndLine;
    struct _sourcekit_uid_s *EndColumn;
    struct _sourcekit_uid_s *NameOffset;
    struct _sourcekit_uid_s *NameLength;
    struct _sourcekit_uid_s *SourceFile;
    struct _sourcekit_uid_s *SourceText;
    struct _sourcekit_uid_s *Notification;
    struct _sourcekit_uid_s *Callback;
    struct _sourcekit_uid_s *Crashed;
    struct _sourcekit_uid_s *Keyword;
    struct _sourcekit_uid_s *EnableSyntaxMap;
    struct _sourcekit_uid_s *EnableDiagnostics;
    struct _sourcekit_uid_s *SyntacticOnly;
    struct _sourcekit_uid_s *ReceiverUSR;
    struct _sourcekit_uid_s *Invocation;
    struct _sourcekit_uid_s *IsDynamic;
    struct _sourcekit_uid_s *IsTestCandidate;
    struct _sourcekit_uid_s *Description;
    struct _sourcekit_uid_s *TypeName;
    struct _sourcekit_uid_s *ModuleName;
    struct _sourcekit_uid_s *RuntimeName;
    struct _sourcekit_uid_s *SelectorName;
    struct _sourcekit_uid_s *AnnotatedDecl;
    struct _sourcekit_uid_s *DocBrief;
    struct _sourcekit_uid_s *Context;
    struct _sourcekit_uid_s *ModuleImportDepth;
    struct _sourcekit_uid_s *NumBytesToErase;
    struct _sourcekit_uid_s *NotRecommended;
    struct _sourcekit_uid_s *Overrides;
    struct _sourcekit_uid_s *AssociatedUSRs;
    struct _sourcekit_uid_s *DocFullAsXML;
    struct _sourcekit_uid_s *GenericParams;
    struct _sourcekit_uid_s *GenericRequirements;
    struct _sourcekit_uid_s *RelatedDecls;
    struct _sourcekit_uid_s *FilePath;
    struct _sourcekit_uid_s *FilePaths;
    struct _sourcekit_uid_s *PrevFilePath;
    struct _sourcekit_uid_s *MainFilePath;
    struct _sourcekit_uid_s *FileURLs;
    struct _sourcekit_uid_s *PlatformIdentifier;
    struct _sourcekit_uid_s *SupportedPlatforms;
    struct _sourcekit_uid_s *ModuleInterfaceName;
    struct _sourcekit_uid_s *Hash;
    struct _sourcekit_uid_s *Related;
    struct _sourcekit_uid_s *Inherits;
    struct _sourcekit_uid_s *Conforms;
    struct _sourcekit_uid_s *Extends;
    struct _sourcekit_uid_s *Dependencies;
    struct _sourcekit_uid_s *Entities;
    struct _sourcekit_uid_s *Diagnostics;
    struct _sourcekit_uid_s *CategoryName;
    struct _sourcekit_uid_s *Severity;
    struct _sourcekit_uid_s *Ranges;
    struct _sourcekit_uid_s *Range;
    struct _sourcekit_uid_s *Fixits;
    struct _sourcekit_uid_s *Annotations;
    struct _sourcekit_uid_s *DiagnosticStage;
    struct _sourcekit_uid_s *SyntaxMap;
    struct _sourcekit_uid_s *IsSystem;
    struct _sourcekit_uid_s *EnableStructure;
    struct _sourcekit_uid_s *SubStructure;
    struct _sourcekit_uid_s *Elements;
    struct _sourcekit_uid_s *BodyOffset;
    struct _sourcekit_uid_s *BodyLength;
    struct _sourcekit_uid_s *Accessibility;
    struct _sourcekit_uid_s *SetterAccessibility;
    struct _sourcekit_uid_s *ThrowOffset;
    struct _sourcekit_uid_s *ThrowLength;
    struct _sourcekit_uid_s *IsLocal;
    struct _sourcekit_uid_s *Attributes;
    struct _sourcekit_uid_s *Attribute;
    struct _sourcekit_uid_s *InheritedTypes;
    struct _sourcekit_uid_s *FormatOptions;
    struct _sourcekit_uid_s *CodeCompleteOptions;
    struct _sourcekit_uid_s *NextRequestStart;
    struct _sourcekit_uid_s *Popular;
    struct _sourcekit_uid_s *Unpopular;
    struct _sourcekit_uid_s *Parent;
    struct _sourcekit_uid_s *IncludedFiles;
    struct _sourcekit_uid_s *RenameFile;
    struct _sourcekit_uid_s *Category;
    struct _sourcekit_uid_s *ArgIndex;
    struct _sourcekit_uid_s *Simplified;
    struct _sourcekit_uid_s *CrossLanguage;
    struct _sourcekit_uid_s *Priority;
    struct _sourcekit_uid_s *IsDeprecated;
    struct _sourcekit_uid_s *IsUnavailable;
    struct _sourcekit_uid_s *Platform;
    struct _sourcekit_uid_s *Message;
    struct _sourcekit_uid_s *Introduced;
    struct _sourcekit_uid_s *Deprecated;
    struct _sourcekit_uid_s *Obsoleted;
    struct _sourcekit_uid_s *RemoveCache;
    struct _sourcekit_uid_s *TypeInterface;
    struct _sourcekit_uid_s *EnableLogNotification;
    struct _sourcekit_uid_s *LogLevel;
    struct _sourcekit_uid_s *Toolchains;
    struct _sourcekit_uid_s *IsDefault;
    struct _sourcekit_uid_s *DisableClientResponseHandling;
    struct _sourcekit_uid_s *ModuleGroups;
    struct _sourcekit_uid_s *GroupName;
    struct _sourcekit_uid_s *Edits;
    struct _sourcekit_uid_s *NewName;
    struct _sourcekit_uid_s *OldName;
    struct _sourcekit_uid_s *PercentCompleted;
    struct _sourcekit_uid_s *Error;
    struct _sourcekit_uid_s *IsFinished;
    struct _sourcekit_uid_s *FindFilesToken;
    struct _sourcekit_uid_s *SearchString;
    struct _sourcekit_uid_s *IsSupported;
    struct _sourcekit_uid_s *URLs;
    struct _sourcekit_uid_s *CompileID;
    struct _sourcekit_uid_s *ToolID;
    struct _sourcekit_uid_s *Title;
    struct _sourcekit_uid_s *ConsoleOutput;
    struct _sourcekit_uid_s *Value;
    struct _sourcekit_uid_s *AffectsAllCompilationsForTool;
    struct _sourcekit_uid_s *Symbols;
    struct _sourcekit_uid_s *Symbol;
    struct _sourcekit_uid_s *SymbolOccurrence;
    struct _sourcekit_uid_s *ContainingSymbol;
    struct _sourcekit_uid_s *Members;
    struct _sourcekit_uid_s *WorkspaceName;
    struct _sourcekit_uid_s *WorkspaceFile;
    struct _sourcekit_uid_s *IndexFolder;
    struct _sourcekit_uid_s *DatastoreFolder;
    struct _sourcekit_uid_s *DatabaseFolder;
    struct _sourcekit_uid_s *PchHeaderFolder;
    struct _sourcekit_uid_s *BuildConfig;
    struct _sourcekit_uid_s *DestinationTargetIdentifier;
    struct _sourcekit_uid_s *DestinationSDKVariant;
    struct _sourcekit_uid_s *IndexDatabasePath;
    struct _sourcekit_uid_s *ToolchainInvocationLoggingPath;
    struct _sourcekit_uid_s *DisableBackgroundIndexer;
    struct _sourcekit_uid_s *EnableExplicitOutputUnits;
    struct _sourcekit_uid_s *EnableFullStoreVisibility;
    struct _sourcekit_uid_s *EnablePCHCreation;
    struct _sourcekit_uid_s *DumpIndexables;
    struct _sourcekit_uid_s *InitialDBSize;
    struct _sourcekit_uid_s *ThrottleFactor;
    struct _sourcekit_uid_s *IndexerFilePath;
    struct _sourcekit_uid_s *IndexableInfo;
    struct _sourcekit_uid_s *IndexableList;
    struct _sourcekit_uid_s *IndexerToken;
    struct _sourcekit_uid_s *BuildOperationToken;
    struct _sourcekit_uid_s *RefactoringActionToken;
    struct _sourcekit_uid_s *DatabaseFile;
    struct _sourcekit_uid_s *IndexDataDump;
    struct _sourcekit_uid_s *WaitForProcessing;
    struct _sourcekit_uid_s *QueryName;
    struct _sourcekit_uid_s *DocLocation;
    struct _sourcekit_uid_s *FileContent;
    struct _sourcekit_uid_s *IsInComment;
    struct _sourcekit_uid_s *IsInFuncOrMethodBody;
    struct _sourcekit_uid_s *LooksLikeASetter;
    struct _sourcekit_uid_s *OnlyCurrentDeclarator;
    struct _sourcekit_uid_s *IncludeCurrentLoc;
    struct _sourcekit_uid_s *IsPrebuild;
    struct _sourcekit_uid_s *Result;
    struct _sourcekit_uid_s *Url;
    struct _sourcekit_uid_s *StartLine;
    struct _sourcekit_uid_s *StartCol;
    struct _sourcekit_uid_s *DocLocEndLine;
    struct _sourcekit_uid_s *DocLocEndCol;
    struct _sourcekit_uid_s *RangeLoc;
    struct _sourcekit_uid_s *RangeCount;
    struct _sourcekit_uid_s *TimeStamp;
    struct _sourcekit_uid_s *Encoding;
    struct _sourcekit_uid_s *Role;
    struct _sourcekit_uid_s *Location;
    struct _sourcekit_uid_s *LineNumber;
    struct _sourcekit_uid_s *IndexerColumn;
    struct _sourcekit_uid_s *File;
    struct _sourcekit_uid_s *ModuleUrlOpt;
    struct _sourcekit_uid_s *TargetName;
    struct _sourcekit_uid_s *SymbolLocation;
    struct _sourcekit_uid_s *Callers;
    struct _sourcekit_uid_s *TestCallers;
    struct _sourcekit_uid_s *Callees;
    struct _sourcekit_uid_s *SymbolName;
    struct _sourcekit_uid_s *DisplayName;
    struct _sourcekit_uid_s *SymbolKind;
    struct _sourcekit_uid_s *SymbolKinds;
    struct _sourcekit_uid_s *Language;
    struct _sourcekit_uid_s *Resolution;
    struct _sourcekit_uid_s *Resolutions;
    struct _sourcekit_uid_s *SymbolModuleName;
    struct _sourcekit_uid_s *IsInProject;
    struct _sourcekit_uid_s *IsVirtual;
    struct _sourcekit_uid_s *SymbolIsSystem;
    struct _sourcekit_uid_s *IsAnchorStart;
    struct _sourcekit_uid_s *IsAnchorEnd;
    struct _sourcekit_uid_s *IsSubsequence;
    struct _sourcekit_uid_s *IsIgnoreCase;
    struct _sourcekit_uid_s *WorkspaceOnly;
    struct _sourcekit_uid_s *TopLevelOnly;
    struct _sourcekit_uid_s *IndexableIdentifier;
    struct _sourcekit_uid_s *IndexableIsUnitTest;
    struct _sourcekit_uid_s *IndexableSettings;
    struct _sourcekit_uid_s *PreferredTargets;
    struct _sourcekit_uid_s *PriorityTargets;
    struct _sourcekit_uid_s *LinkedIndexableIds;
    struct _sourcekit_uid_s *IsBuiltForRun;
    struct _sourcekit_uid_s *IsImplicitDependency;
    struct _sourcekit_uid_s *CallbackKind;
    struct _sourcekit_uid_s *OnWillIndexWorkspaceDeferredReindexing;
    struct _sourcekit_uid_s *OnIsIndexingWorkspaceUserInfo;
    struct _sourcekit_uid_s *NotificationUserInfo;
    struct _sourcekit_uid_s *IndexableRootPaths;
    struct _sourcekit_uid_s *WorkspaceRootPaths;
    struct _sourcekit_uid_s *IndexableIndexHeaderMap;
};

struct IDESourceKitUIDRequests {
    struct _sourcekit_uid_s *TestMe;
    struct _sourcekit_uid_s *TestEcho;
    struct _sourcekit_uid_s *TestingInvalidateFilePath;
    struct _sourcekit_uid_s *SetLoggingSettings;
    struct _sourcekit_uid_s *SetEnableCompileNotifications;
    struct _sourcekit_uid_s *DemangleNames;
    struct _sourcekit_uid_s *MangleSimpleClasses;
    struct _sourcekit_uid_s *IndexOpenOrCreate;
    struct _sourcekit_uid_s *IndexStart;
    struct _sourcekit_uid_s *IndexClose;
    struct _sourcekit_uid_s *IndexRegisterObject;
    struct _sourcekit_uid_s *IndexUnregisterObject;
    struct _sourcekit_uid_s *IndexAddUnitOutFilePaths;
    struct _sourcekit_uid_s *IndexRemoveUnitOutFilePaths;
    struct _sourcekit_uid_s *IndexUpdatePreferredTargets;
    struct _sourcekit_uid_s *IndexSetThrottleFactor;
    struct _sourcekit_uid_s *IndexIsQuiescent;
    struct _sourcekit_uid_s *IndexSuspendIndexing;
    struct _sourcekit_uid_s *IndexResumeIndexing;
    struct _sourcekit_uid_s *CollectModuleGroups;
    struct _sourcekit_uid_s *RegisterToolchains;
    struct _sourcekit_uid_s *UnregisterToolchains;
    struct _sourcekit_uid_s *IndexJumpToExpressionDefinition;
    struct _sourcekit_uid_s *IndexJumpToImportedFile;
    struct _sourcekit_uid_s *IndexJumpToModuleImportHeaders;
    struct _sourcekit_uid_s *IndexCodeCompletionsAtLocation;
    struct _sourcekit_uid_s *IndexSymbolContains;
    struct _sourcekit_uid_s *IndexFileContains;
    struct _sourcekit_uid_s *IndexTestMethods;
    struct _sourcekit_uid_s *MainFilesForFile;
    struct _sourcekit_uid_s *WorkspaceCallersForSymbol;
    struct _sourcekit_uid_s *WorkspaceSymbolDeclarations;
    struct _sourcekit_uid_s *WorkspaceSymbolQualifiedDisplayName;
    struct _sourcekit_uid_s *WorkspaceSymbolDefinitions;
    struct _sourcekit_uid_s *WorkspaceSymbolOccurrences;
    struct _sourcekit_uid_s *WorkspaceSymbolReferences;
    struct _sourcekit_uid_s *WorkspaceSymbolSubclasses;
    struct _sourcekit_uid_s *WorkspaceSymbolSuperclasses;
    struct _sourcekit_uid_s *WorkspaceSymbolCategories;
    struct _sourcekit_uid_s *WorkspaceSymbolInterfaces;
    struct _sourcekit_uid_s *WorkspaceSymbolProtocols;
    struct _sourcekit_uid_s *WorkspaceSymbolAllProtocols;
    struct _sourcekit_uid_s *WorkspaceSymbolAllSuperclasses;
    struct _sourcekit_uid_s *WorkspaceSymbolAllSubclasses;
    struct _sourcekit_uid_s *WorkspaceSymbolImplementingClassesForProtocol;
    struct _sourcekit_uid_s *WorkspaceImplementingSymbolsForProtocol;
    struct _sourcekit_uid_s *WorkspaceSymbolReferencingFiles;
    struct _sourcekit_uid_s *WorkspaceSymbolModelOccurrence;
    struct _sourcekit_uid_s *WorkspaceSymbolContainer;
    struct _sourcekit_uid_s *WorkspaceSymbolContainers;
    struct _sourcekit_uid_s *WorkspaceSymbolOverriddenSymbols;
    struct _sourcekit_uid_s *WorkspaceSymbolProperty;
    struct _sourcekit_uid_s *WorkspaceSymbolRelatedClass;
    struct _sourcekit_uid_s *WorkspaceSymbolIBRelationClass;
    struct _sourcekit_uid_s *WorkspaceSymbolMembersMatchingKind;
    struct _sourcekit_uid_s *WorkspaceAllSymbolsMatchingName;
    struct _sourcekit_uid_s *WorkspaceAllClassesMatchingName;
    struct _sourcekit_uid_s *WorkspaceAllSymbolsMatchingKind;
    struct _sourcekit_uid_s *WorkspaceCountOfSymbolsMatchingKind;
    struct _sourcekit_uid_s *WorkspaceAllParentsOfSymbols;
    struct _sourcekit_uid_s *WorkspaceSymbolsForResolutions;
    struct _sourcekit_uid_s *WorkspaceFilesIncludingFile;
    struct _sourcekit_uid_s *WorkspaceFilesIncludedByFile;
    struct _sourcekit_uid_s *WorkspaceMembersMatchingKinds;
    struct _sourcekit_uid_s *WorkspaceAllSymbolNames;
    struct _sourcekit_uid_s *DocumentSymbolsMatchingName;
    struct _sourcekit_uid_s *DocumentSymbolOccurrences;
    struct _sourcekit_uid_s *DocumentReferencesToSymbol;
    struct _sourcekit_uid_s *DocumentCodeDiagnostics;
    struct _sourcekit_uid_s *DocumentParsedCodeComment;
    struct _sourcekit_uid_s *DocumentTypeSymbolForSymbol;
    struct _sourcekit_uid_s *DocumentImportedFiles;
    struct _sourcekit_uid_s *DocumentGeniusCallersCallees;
    struct _sourcekit_uid_s *RefactoringFindRenameRangesAtLocation;
    struct _sourcekit_uid_s *RefactoringRenameAtLocation;
    struct _sourcekit_uid_s *RefactoringLocalRefactoring;
    struct _sourcekit_uid_s *RefactoringActionCancel;
    struct _sourcekit_uid_s *RefactoringActionClose;
    struct _sourcekit_uid_s *RefactoringActionStart;
    struct _sourcekit_uid_s *RefactoringAvailableRefactorings;
    struct _sourcekit_uid_s *FilesContainingWordUpdate;
    struct _sourcekit_uid_s *TestFilesContainingWord;
    struct _sourcekit_uid_s *IndexPrebuildCompleted;
    struct _sourcekit_uid_s *IndexNotifyIndexableDidAddFile;
    struct _sourcekit_uid_s *IndexNotifyIndexableWillRemoveFile;
    struct _sourcekit_uid_s *IndexNotifyIndexableDidRenameFile;
    struct _sourcekit_uid_s *IndexNotifyIndexableChangedLinkedIndexables;
    struct _sourcekit_uid_s *IndexBuildSettingsChanged;
    struct _sourcekit_uid_s *IndexBuildOperationWillStart;
    struct _sourcekit_uid_s *IndexBuildOperationDidStop;
    struct _sourcekit_uid_s *IndexNotifyActiveRunDestinationDidChange;
    struct _sourcekit_uid_s *IndexEditorWillSaveFile;
    struct _sourcekit_uid_s *IndexEditorDidSaveFile;
    struct _sourcekit_uid_s *IndexRegisterFileForBuildSettingsNotifications;
    struct _sourcekit_uid_s *IndexUnregisterFileForBuildSettingsNotifications;
};

struct IDESourceKitUIDValues {
    struct _sourcekit_uid_s *NoteLogOutput;
    struct _sourcekit_uid_s *NoteToolchainCompilerCrashed;
    struct _sourcekit_uid_s *NoteIndexCompileWillStart;
    struct _sourcekit_uid_s *NoteIndexCompileDidFinish;
    struct _sourcekit_uid_s *IndexCallbackInitiatePrebuildKind;
    struct _sourcekit_uid_s *IndexCallbackOnDidChangeKind;
    struct _sourcekit_uid_s *IndexCallbackOnDidChangeStateKind;
    struct _sourcekit_uid_s *IndexCallbackOnWillIndexWorkspaceKind;
    struct _sourcekit_uid_s *IndexCallbackOnIsIndexingWorkspaceKind;
    struct _sourcekit_uid_s *IndexCallbackOnDidIndexWorkspaceKind;
    struct _sourcekit_uid_s *IndexCallbackOnDidSuspendIndexingWorkspaceKind;
    struct _sourcekit_uid_s *IndexCallbackOnDidResumeIndexingWorkspaceKind;
    struct _sourcekit_uid_s *IndexWillPopulateDatabaseNotificationKind;
    struct _sourcekit_uid_s *IndexIsPopulatingDatabaseNotificationKind;
    struct _sourcekit_uid_s *IndexDidPopulateDatabaseNotificationKind;
    struct _sourcekit_uid_s *IndexWillFastScanNotificationKind;
    struct _sourcekit_uid_s *IndexIsFastScanningNotificationKind;
    struct _sourcekit_uid_s *IndexDidFastScanNotificationKind;
    struct _sourcekit_uid_s *IndexUnitTestsDidChangeNotificationKind;
    struct _sourcekit_uid_s *BuildSettingsForFileNotificationKind;
    struct _sourcekit_uid_s *RefactoringStateChangedNotificationKind;
    struct _sourcekit_uid_s *RefactoringProgressUpdatedNotificationKind;
    struct _sourcekit_uid_s *RefactoringRenameRangesFoundNotificationKind;
    struct _sourcekit_uid_s *RefactoringUnhandledURLsNotificationKind;
    struct _sourcekit_uid_s *IndexCallbackWriteHeaderMap;
    struct _sourcekit_uid_s *IndexCallbackGatherProductHeaders;
    struct _sourcekit_uid_s *IndexCallbackSettingsForIndexable;
    struct _sourcekit_uid_s *IndexCallbackFilesContainingWord;
    struct _sourcekit_uid_s *IndexCallback;
    struct _sourcekit_uid_s *IndexCallbackPostNotificationKind;
    struct _sourcekit_uid_s *RefactoringCallback;
    struct _sourcekit_uid_s *CodeCompletionContextObjCClass;
    struct _sourcekit_uid_s *CodeCompletionContextObjCCategory;
    struct _sourcekit_uid_s *CodeCompletionContextObjCProtocol;
    struct _sourcekit_uid_s *CodeCompletionContextObjCInstanceMessage;
    struct _sourcekit_uid_s *CodeCompletionContextObjCClassMessage;
    struct _sourcekit_uid_s *CodeCompletionContextFunction;
    struct _sourcekit_uid_s *CodeCompletionContextEnumConstant;
    struct _sourcekit_uid_s *CodeCompletionContextDotMemberAccess;
    struct _sourcekit_uid_s *CodeCompletionContextArrowMemberAccess;
    struct _sourcekit_uid_s *CodeCompletionContextObjCPropertyAccess;
    struct _sourcekit_uid_s *CodeCompletionContextNamespace;
    struct _sourcekit_uid_s *CodeCompletionContextEnumTag;
    struct _sourcekit_uid_s *CodeCompletionContextUnionTag;
    struct _sourcekit_uid_s *CodeCompletionContextStructTag;
    struct _sourcekit_uid_s *CodeCompletionContextClassTag;
    struct _sourcekit_uid_s *CodeCompletionContextNestedNameSpecifier;
    struct _sourcekit_uid_s *CodeCompletionContextTypedef;
    struct _sourcekit_uid_s *CodeCompletionContextMacro;
    struct _sourcekit_uid_s *CodeCompletionContextNaturalLanguage;
    struct _sourcekit_uid_s *SymbolKindTypedef;
    struct _sourcekit_uid_s *SymbolKindStruct;
    struct _sourcekit_uid_s *SymbolKindUnion;
    struct _sourcekit_uid_s *SymbolKindField;
    struct _sourcekit_uid_s *SymbolKindEnum;
    struct _sourcekit_uid_s *SymbolKindEnumConstant;
    struct _sourcekit_uid_s *SymbolKindGlobalVar;
    struct _sourcekit_uid_s *SymbolKindParameter;
    struct _sourcekit_uid_s *SymbolKindInstanceVar;
    struct _sourcekit_uid_s *SymbolKindProperty;
    struct _sourcekit_uid_s *SymbolKindExtension;
    struct _sourcekit_uid_s *SymbolKindProtocol;
    struct _sourcekit_uid_s *SymbolKindFunction;
    struct _sourcekit_uid_s *SymbolKindInstanceMethod;
    struct _sourcekit_uid_s *SymbolKindClassMethod;
    struct _sourcekit_uid_s *SymbolKindFunctionTemplate;
    struct _sourcekit_uid_s *SymbolKindClass;
    struct _sourcekit_uid_s *SymbolKindClassTemplate;
    struct _sourcekit_uid_s *SymbolKindMacro;
    struct _sourcekit_uid_s *SymbolKindNamespace;
    struct _sourcekit_uid_s *SymbolKindUnknown;
    struct _sourcekit_uid_s *RefactoringActionStateRequested;
    struct _sourcekit_uid_s *RefactoringActionStateRunning;
    struct _sourcekit_uid_s *RefactoringActionStateSucceeded;
    struct _sourcekit_uid_s *RefactoringActionStateCancelled;
    struct _sourcekit_uid_s *RefactoringActionStateFailed;
    struct _sourcekit_uid_s *EditKindSourcecode;
    struct _sourcekit_uid_s *EditKindInactiveSourceCode;
    struct _sourcekit_uid_s *EditKindSelectorExpr;
    struct _sourcekit_uid_s *EditKindComment;
    struct _sourcekit_uid_s *EditKindFilename;
    struct _sourcekit_uid_s *EditKindStringLiteral;
    struct _sourcekit_uid_s *RenameRangeKindBase;
    struct _sourcekit_uid_s *RenameRangeKindKeywordBase;
    struct _sourcekit_uid_s *RenameRangeKindParam;
    struct _sourcekit_uid_s *RenameRangeKindParamAndWhitespace;
    struct _sourcekit_uid_s *RenameRangeKindNoncollapsibleParam;
    struct _sourcekit_uid_s *RenameRangeKindDeclArgLabel;
    struct _sourcekit_uid_s *RenameRangeKindCallArgLabel;
    struct _sourcekit_uid_s *RenameRangeKindCallArgColon;
    struct _sourcekit_uid_s *RenameRangeKindCallArgCombined;
    struct _sourcekit_uid_s *RenameRangeKindSelectorArgLabel;
    struct _sourcekit_uid_s *RenameRangeKindObjCSetter;
    struct _sourcekit_uid_s *RenameRangeKindObjCSelectorPiece;
    struct _sourcekit_uid_s *RenameRangeKindObjCUnderscoredIVar;
    struct _sourcekit_uid_s *AvailableRefactoringRename;
    struct _sourcekit_uid_s *AvailableRefactoringLocalRename;
    struct _sourcekit_uid_s *AvailableRefactoringLocal;
};

struct UIDContainer {
    struct IDESourceKitUIDKeys keys;
    struct IDESourceKitUIDRequests requests;
    struct IDESourceKitUIDValues values;
};

struct _IDEDataMatrixColumnDescriptor {
    char *_field1;
};

struct _IDEDataMatrixDescriptor {
    char *_field1;
    unsigned char _field2;
    unsigned char _field3;
    struct _IDEDataMatrixColumnDescriptor _field4[0];
};

struct _IDEDataMatrixRowOp {
    int _field1;
    struct _NSRange _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*> *__next_;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _sourcekit_uid_s;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<__NStatSource *, (anonymous namespace)::SourceInfo, std::__1::hash<__NStatSource *>, std::__1::equal_to<__NStatSource *>, std::__1::allocator<std::__1::pair<__NStatSource *const, (anonymous namespace)::SourceInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, std::__1::__unordered_map_hasher<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, std::__1::hash<__NStatSource *>, true>, std::__1::__unordered_map_equal<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, std::__1::equal_to<__NStatSource *>, true>, std::__1::allocator<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, std::__1::hash<__NStatSource *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, (anonymous namespace)::SourceInfo>, std::__1::equal_to<__NStatSource *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *, std::__1::hash<_sourcekit_uid_s *>, std::__1::equal_to<_sourcekit_uid_s *>, std::__1::allocator<std::__1::pair<_sourcekit_uid_s *const, DVTSourceCodeSymbolKind *>>> {
    struct __hash_table<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, std::__1::__unordered_map_hasher<_sourcekit_uid_s *, std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, std::__1::hash<_sourcekit_uid_s *>, true>, std::__1::__unordered_map_equal<_sourcekit_uid_s *, std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, std::__1::equal_to<_sourcekit_uid_s *>, true>, std::__1::allocator<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_sourcekit_uid_s *, std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, std::__1::hash<_sourcekit_uid_s *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<_sourcekit_uid_s *, std::__1::__hash_value_type<_sourcekit_uid_s *, DVTSourceCodeSymbolKind *>, std::__1::equal_to<_sourcekit_uid_s *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<int, (anonymous namespace)::ProcessInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, (anonymous namespace)::ProcessInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, std::__1::hash<int>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, (anonymous namespace)::ProcessInfo>, std::__1::equal_to<int>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long data[4];
} CDStruct_4c46f3f5;

