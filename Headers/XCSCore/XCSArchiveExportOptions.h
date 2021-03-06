//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSDate, NSDictionary, NSString;

@interface XCSArchiveExportOptions : XCSObject
{
    NSDate *_createdAt;
    NSString *_name;
    NSDictionary *_exportOptions;
}

+ (id)archiveExportOptionsWithName:(id)arg1 exportOptions:(id)arg2 validationErrors:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *exportOptions; // @synthesize exportOptions=_exportOptions;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (BOOL)_validateName:(id)arg1 createdAt:(id)arg2 exportOptions:(id)arg3 validationErrors:(id *)arg4;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithName:(id)arg1 createdAt:(id)arg2 exportOptions:(id)arg3 validationErrors:(id *)arg4;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

@end

