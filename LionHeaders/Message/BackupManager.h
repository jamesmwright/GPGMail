/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class MailboxUid, NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSString;

@interface BackupManager : NSObject
{
    MailboxUid *_topLevelRecoveryMailbox;
    NSDictionary *_lastSavedTableOfContents;
    NSMapTable *_mailboxBackupPaths;
    NSMutableDictionary *_mailboxesWithKnownContents;
    id _editableMessagesLock;
    BOOL _registeredForEditableMessageNotifications;
    NSArray *_messagePathsToRestore;
    NSString *_mailboxPathToRestore;
    NSString *_mailboxNameForRestoring;
    id _timeMachineRestoreLock;
}

+ (id)sharedManager;
- (id)init;
- (void)dealloc;
- (void)invalidateCaches;
- (void)editableMessagesWereAdded:(id)arg1;
- (void)editableMessagesWereDeleted:(id)arg1;
- (void)_setupDefaultTopLevelRecoveryMailbox;
- (void)performPendingRestore;
- (void)timeMachineRestoreFinished:(id)arg1;
- (BOOL)hasPendingRestoreIsMailbox:(char *)arg1;
- (id)mailboxNameToBeRestored;
- (long long)numberOfMessagesToBeRestored;
- (void)prepareToRestoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2;
- (id)restoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2;
- (id)restoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2 reuseMailbox:(BOOL)arg3 createdMailboxNamed:(id *)arg4 postNotification:(BOOL)arg5;
- (void)prepareToRestoreMailboxAtPath:(id)arg1 intoMailboxNamed:(id)arg2;
- (id)restoreMailboxAtPath:(id)arg1 intoMailboxNamed:(id)arg2 postNotification:(BOOL)arg3;
- (BOOL)restoreMailboxAtURL:(id)arg1 intoMailbox:(id)arg2;
- (BOOL)restoreMailboxesAtURL:(id)arg1 intoMailbox:(id)arg2 restoredMessages:(id)arg3;
- (BOOL)restoreMailboxAtPath:(id)arg1 intoArray:(id)arg2;
- (BOOL)_restoreMailboxesAtPath:(id)arg1 intoMailbox:(id)arg2 newMessages:(id)arg3;
- (BOOL)_restoreMailboxAtPath:(id)arg1 backedUpPath:(id *)arg2 intoMailbox:(id)arg3 newMessages:(id)arg4;
- (void)setTopLevelRecoveryMailbox:(id)arg1;
- (id)_topLevelRecoveryMailbox;
- (id)_recoveryMailboxWithSuggestedName:(id)arg1 reuseMailbox:(BOOL)arg2;
- (id)_reducedPathFromFullPath:(id)arg1 supportDirectory:(id)arg2;
- (id)_reducedPathFromFullPath:(id)arg1;
- (BOOL)shouldSaveMessagesForMailbox:(id)arg1;
- (BOOL)_shouldSaveDisplayNameForMailbox:(id)arg1;
- (id)_expandedMailboxes:(id)arg1;
- (id)_dictionaryForSection:(int)arg1;
- (id)_dictionaryForMailbox:(id)arg1 parent:(id)arg2 messagePool:(id)arg3;
- (id)_dictionaryForMessage:(id)arg1 includeRecipients:(BOOL)arg2;
- (int)_sectionForMailbox:(id)arg1;
- (void)_addMailbox:(id)arg1 toSection:(int)arg2 sections:(id)arg3 messagePool:(id)arg4;
- (id)tableOfContents;
- (BOOL)saveTableOfContents:(id)arg1;
- (id)backupPathForMailbox:(id)arg1;
- (id)_backupPathForMailbox:(id)arg1 withParentPath:(id)arg2 pathsCache:(id)arg3;
- (id)backupPathForMailbox:(id)arg1 pathsCache:(id)arg2;
- (id)backupMailboxesEnumerator;

@end
