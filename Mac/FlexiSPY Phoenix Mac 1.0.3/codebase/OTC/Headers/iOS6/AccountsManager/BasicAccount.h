/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "AccountFullAccountProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface BasicAccount : NSObject //<AccountFullAccountProtocol>
{
    NSDictionary *_originalProperties;
    NSMutableDictionary *_properties;
//    id <AccountFullAccountProtocol> _fullAccount;
//    id <AccountRefreshProtocol> _syncAccount;
    BasicAccount *_parentAccount;
}

+ (BOOL)userConfirmationIsRequiredByDataclass:(id)arg1;
+ (BOOL)displayToggleForDataclass:(id)arg1;
+ (BOOL)multipleStoresSupportedByDataclass:(id)arg1;
+ (BOOL)showRemindersSeparatelyForAccountType:(id)arg1;
+ (id)deleteAccountActionsForAccountType:(id)arg1;
+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;
+ (id)supportedDataclassesForAccountType:(id)arg1;
+ (id)allSupportedDataclasses;
+ (id)accountWithProperties:(id)arg1;
+ (id)accountWithType:(id)arg1 class:(id)arg2;
+ (void)initialize;
+ (BOOL)isMultitaskingEnabled;
+ (id)_dataclassesProperties;
+ (id)_creatorsInfo;
+ (BOOL)_isValidAccountType:(id)arg1;
+ (id)_accountCreationMap;
+ (id)createNewAccountUID;
@property(retain, nonatomic) NSDictionary *originalProperties; // @synthesize originalProperties=_originalProperties;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
- (BOOL)refreshContainersForDataclass:(id)arg1;
- (BOOL)refreshContainerListForDataclass:(id)arg1;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;
- (id)fullAccountUsingLoader:(id)arg1;
- (void)setEnabledForDataclasses:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (id)enabledDataclasses;
- (id)provisionedDataclasses;
- (id)supportedDataclasses;
- (id)shortTypeString;
- (id)typeString;
- (id)displayName;
- (void)setAccountClass:(id)arg1;
- (id)accountClass;
- (id)syncStoreIdentifier;
- (void)setParentAccount:(id)arg1;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)identifier;
- (id)type;
- (id)propertiesToSave;
- (id)properties;
- (id)accountPropertyForKey:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)_profileRestrictedDataclasses;
- (id)_orderedDataclasses:(id)arg1;
- (id)_cachedSyncAccount;
- (id)_initWithType:(id)arg1 class:(id)arg2;
- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;
- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;
- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;
- (void)setFullAccount:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;

@end

