//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/_TtP13IDEFoundation22IDEResultRootContainer_-Protocol.h>

@class IDEActivityLogSection, NSArray, NSString, _TtC13DVTFoundation14DVTFilePromise, _TtC13IDEFoundation18IDEResultReference;
@protocol _TtP13IDEFoundation28IDEResultRootContainerWriter_;

@protocol _TtP13IDEFoundation28IDEResultRootContainerReader_ <_TtP13IDEFoundation22IDEResultRootContainer_>
- (id <_TtP13IDEFoundation28IDEResultRootContainerWriter_>)writerAndReturnError:(id *)arg1;
- (_TtC13DVTFoundation14DVTFilePromise *)exportableDirectoryWithRef:(_TtC13IDEFoundation18IDEResultReference *)arg1 name:(NSString *)arg2 error:(id *)arg3;
- (_TtC13DVTFoundation14DVTFilePromise *)exportableFileWithRef:(_TtC13IDEFoundation18IDEResultReference *)arg1 name:(NSString *)arg2 error:(id *)arg3;
- (NSArray *)exportTestRunSummariesWithRef:(_TtC13IDEFoundation18IDEResultReference *)arg1 error:(id *)arg2;
- (IDEActivityLogSection *)exportActivityLogWithRef:(_TtC13IDEFoundation18IDEResultReference *)arg1 error:(id *)arg2;
@end

