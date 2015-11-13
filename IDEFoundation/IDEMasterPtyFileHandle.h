//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@interface IDEMasterPtyFileHandle : NSFileHandle
{
    NSFileHandle *_masterFileHandle;
    BOOL _readObserverAdded;
    BOOL _isInGotData;
    NSFileHandle *_slaveFileHandle;
}

@property(readonly) NSFileHandle *slaveFileHandle; // @synthesize slaveFileHandle=_slaveFileHandle;
- (void).cxx_destruct;
- (int)fileDescriptor;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotify;
- (void)_gotData:(id)arg1;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)closeFile;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (void)writeData:(id)arg1;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
- (id)availableData;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 slaveFileDescriptor:(int)arg2 ownsSlaveFileDescriptor:(BOOL)arg3;

@end

