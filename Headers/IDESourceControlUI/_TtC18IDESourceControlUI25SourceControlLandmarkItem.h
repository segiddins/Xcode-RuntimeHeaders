//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTSourceLandmarkItem.h>

@class DVTSourceControlLogItemFile, DVTSourceControlVisualLogItem;

@interface _TtC18IDESourceControlUI25SourceControlLandmarkItem : DVTSourceLandmarkItem
{
    // Error parsing type: , name: ideTypeIdentifier
    // Error parsing type: , name: logItem
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: logItemFile
    // Error parsing type: , name: internalLandmark
    // Error parsing type: , name: innerChildren
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithItem:(id)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithItemReference:(void *)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, retain) DVTSourceControlLogItemFile *logItemFile; // @synthesize logItemFile;
@property(nonatomic, retain) DVTSourceControlVisualLogItem *logItem; // @synthesize logItem;
- (id)landmarkItemTypeName;
- (unsigned long long)landmarkItemType;
- (struct _NSRange)landmarkItemNameRange;
- (struct _NSRange)landmarkItemRange;
- (id)landmarkItemName;
- (id)childLandmarkItems;
- (long long)numberOfChildLandmarkItems;
- (id)parentLandmarkItem;

@end

