//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LOCFileDescription, NSString;

@interface LOCImportComparisonFileSet : NSObject
{
    NSString *_projectDirectoryPath;
    NSString *_xclocPath;
    LOCFileDescription *_projectSourceFile;
    NSString *_projectTargetFile;
    NSString *_sourceContentsFile;
    NSString *_localizedContentsFile;
}

@property(copy) NSString *localizedContentsFile; // @synthesize localizedContentsFile=_localizedContentsFile;
@property(copy) NSString *sourceContentsFile; // @synthesize sourceContentsFile=_sourceContentsFile;
@property(copy) NSString *projectTargetFile; // @synthesize projectTargetFile=_projectTargetFile;
@property(copy) LOCFileDescription *projectSourceFile; // @synthesize projectSourceFile=_projectSourceFile;
@property(readonly, copy) NSString *xclocPath; // @synthesize xclocPath=_xclocPath;
@property(readonly, copy) NSString *projectDirectoryPath; // @synthesize projectDirectoryPath=_projectDirectoryPath;
- (void).cxx_destruct;
- (id)initWithProjectDirectoryPath:(id)arg1 xclocPath:(id)arg2;

@end

