//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTFileDataType, NSImage, NSString;

@interface _TtC6IDEKit40SourceControlReviewFilesDocumentLocation : DVTDocumentLocation <IDEKeyDrivenNavigableItemRepresentedObject>
{
    // Error parsing type: , name: name
    // Error parsing type: , name: filePath
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1 logItem:(id)arg2 filePath:(id)arg3;

@end

