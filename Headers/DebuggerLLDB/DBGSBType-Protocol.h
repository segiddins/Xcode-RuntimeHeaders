//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBType, DBGSBTypeMember;

@protocol DBGSBType <NSObject>
- (BOOL)IsReferenceType;
- (const char *)GetDisplayTypeName;
- (id <DBGSBTypeMember>)GetDirectBaseClassAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumberOfDirectBaseClasses;
- (const char *)GetName;
- (id <DBGSBType>)GetPointeeType;
- (unsigned int)GetTypeClass;
- (_Bool)IsPointerType;
- (_Bool)IsValid;
@end

