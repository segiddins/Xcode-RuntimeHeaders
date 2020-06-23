//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGDataType.h>

@class NSString;
@protocol DBGSBType;

@interface DBGLLDBDataType : DBGDataType
{
    id <DBGSBType> _lldbType;
    NSString *_pointeeTypeName;
    NSString *_displayTypeName;
    BOOL _isPointer;
}

@property(retain) NSString *pointeeTypeName; // @synthesize pointeeTypeName=_pointeeTypeName;
- (void).cxx_destruct;
- (BOOL)isUnknownType;
- (BOOL)isPointer;
- (id)displayTypeName;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)initWithTypename:(id)arg1 withType:(id)arg2;

@end

