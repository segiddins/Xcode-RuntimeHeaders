//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUDebuggerController, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger27GPUMemoryReportDataProvider : NSObject
{
    MISSING_TYPE *debuggerController;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *topLevelResourceItems;
    MISSING_TYPE *resourceItemsMap;
    MISSING_TYPE *resourceIDIssuesMap;
    MISSING_TYPE *resourceItemTypeCount;
    MISSING_TYPE *isThumbnailGenerated;
}

- (void).cxx_destruct;
- (id)init;
- (id)apiTraceResourceItemFor:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (id)items;
@property(nonatomic, readonly) GPUDebuggerController *debuggerController; // @synthesize debuggerController;

@end
