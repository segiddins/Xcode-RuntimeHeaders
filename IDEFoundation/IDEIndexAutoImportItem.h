//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEAutoImportable-Protocol.h>

@class DVTFilePath, DVTSourceCodeSymbolKind, IDEIndexCollection, IDEIndexDatabase, NSString;

@interface IDEIndexAutoImportItem : NSObject <IDEAutoImportable>
{
    IDEIndexDatabase *_database;
    BOOL _checkedAutoImportability;
    long long _resolutionOffset;
    BOOL _inProject;
    BOOL _autoImportable;
    NSString *_name;
    NSString *_completionString;
    DVTFilePath *_filePathToHeaderToImport;
    NSString *_resolution;
    DVTSourceCodeSymbolKind *_symbolKind;
}

@property(readonly, nonatomic) DVTSourceCodeSymbolKind *symbolKind; // @synthesize symbolKind=_symbolKind;
@property(readonly, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic, getter=isInProject) BOOL inProject; // @synthesize inProject=_inProject;
@property(readonly, nonatomic) DVTFilePath *filePathToHeaderToImport; // @synthesize filePathToHeaderToImport=_filePathToHeaderToImport;
@property(readonly, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) IDEIndexCollection *definitions;
@property(readonly, nonatomic, getter=isAutoImportable) BOOL autoImportable; // @synthesize autoImportable=_autoImportable;
- (id)initWithName:(id)arg1 completionString:(id)arg2 resolution:(id)arg3 file:(id)arg4 inProject:(BOOL)arg5 symbolKind:(id)arg6 database:(id)arg7 resolutionOffset:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

