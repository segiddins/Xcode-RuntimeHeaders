//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SKIndex/IDEIndexQueryProvider-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, DVTSourceCodeSymbolKind, IDEIndex, IDEIndexCallableSymbol, IDEIndexCategorySymbol, IDEIndexClassSymbol, IDEIndexCollection, IDEIndexContainerSymbol, IDEIndexPropertySymbol, IDEIndexProtocolSymbol, IDEIndexSymbol, IDEIndexSymbolOccurrence, NSArray, NSObject, NSString;
@protocol NSFastEnumeration;

@protocol IDEIndexGlobalQueryProvider <IDEIndexQueryProvider>
- (BOOL)isProjectSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)parametersForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexCollection *)membersMatchingKind:(DVTSourceCodeSymbolKind *)arg1 forSymbol:(IDEIndexSymbol *)arg2;
- (IDEIndexCollection *)calleesForSymbolOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (DVTDocumentLocation *)locationForSymbolOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexSymbol *)containingSymbolForOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexSymbol *)correspondingSymbolForOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexClassSymbol *)relatedClassForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)implementingSymbolsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)implementingClassesForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)interfacesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allProtocolsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)protocolsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allSubClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)subClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allSuperClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)superClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)categoriesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexPropertySymbol *)propertyForIVar:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)iVarsForProperty:(IDEIndexPropertySymbol *)arg1;
- (IDEIndexCallableSymbol *)getterForProperty:(IDEIndexPropertySymbol *)arg1;
- (IDEIndexCallableSymbol *)setterForProperty:(IDEIndexPropertySymbol *)arg1;
- (IDEIndexCollection *)callsForCallable:(IDEIndexCallableSymbol *)arg1 cancelWhen:(BOOL (^)(void))arg2;
- (IDEIndexSymbol *)typeOfArgument:(unsigned long long)arg1 forCallable:(IDEIndexCallableSymbol *)arg2;
- (IDEIndexPropertySymbol *)propertyForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexCollection *)specializationsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)specializesSymbolsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)overridingOccurrencesForSymbol:(IDEIndexSymbol *)arg1 bySymbol:(IDEIndexSymbol *)arg2;
- (IDEIndexCollection *)overridingSymbolsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)overriddenSymbolsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)referencesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)referencingFilesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexContainerSymbol *)containerSymbolForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)containerSymbolsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)definitionsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)declarationsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)occurrencesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexSymbolOccurrence *)modelOccurrenceForSymbol:(IDEIndexSymbol *)arg1;
- (void)allSymbolNames:(void (^)(char *, char *))arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allMethodsMatchingMethod:(IDEIndexCallableSymbol *)arg1 forReceiver:(IDEIndexSymbol *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)membersMatchingKinds:(NSObject<NSFastEnumeration> *)arg1 forInterfaces:(NSObject<NSFastEnumeration> *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)symbolsForResolutions:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (unsigned long long)countOfSymbolsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 workspaceOnly:(BOOL)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allSymbolsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(BOOL (^)(void))arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)testMethodsForClasses:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allSubClassesForClasses:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allSymbolsMatchingNames:(NSObject<NSFastEnumeration> *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allSymbolsMatchingName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allClassesMatchingName:(NSString *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)symbolsContaining:(NSString *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(BOOL (^)(void))arg6 forIndex:(IDEIndex *)arg7;
- (IDEIndexCollection *)topLevelSymbolsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(BOOL (^)(void))arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)filesContaining:(NSString *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(BOOL (^)(void))arg6 forIndex:(IDEIndex *)arg7;
- (IDEIndexCollection *)filesIncludedByFile:(DVTFilePath *)arg1 forIndex:(IDEIndex *)arg2;
- (NSArray *)includesOfFile:(DVTFilePath *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)filesIncludingFile:(DVTFilePath *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allParentsOfSymbols:(NSObject<NSFastEnumeration> *)arg1 cancelWhen:(BOOL (^)(void))arg2 forIndex:(IDEIndex *)arg3;
@end

