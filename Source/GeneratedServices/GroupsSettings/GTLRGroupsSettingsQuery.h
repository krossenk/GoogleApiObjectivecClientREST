// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Groups Settings API (groupssettings/v1)
// Description:
//   Lets you manage permission levels and related settings of a group.
// Documentation:
//   https://developers.google.com/google-apps/groups-settings/get_started

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRGroupsSettings_Groups;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other GroupsSettings query classes.
 */
@interface GTLRGroupsSettingsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets one resource by id.
 *
 *  Method: groupsSettings.groups.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGroupsSettingsAppsGroupsSettings
 */
@interface GTLRGroupsSettingsQuery_GroupsGet : GTLRGroupsSettingsQuery
// Previous library name was
//   +[GTLQueryGroupsSettings queryForGroupsGetWithgroupUniqueId:]

/** The resource ID */
@property(nonatomic, copy, nullable) NSString *groupUniqueId;

/**
 *  Fetches a @c GTLRGroupsSettings_Groups.
 *
 *  Gets one resource by id.
 *
 *  @param groupUniqueId The resource ID
 *
 *  @returns GTLRGroupsSettingsQuery_GroupsGet
 */
+ (instancetype)queryWithGroupUniqueId:(NSString *)groupUniqueId;

@end

/**
 *  Updates an existing resource. This method supports patch semantics.
 *
 *  Method: groupsSettings.groups.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGroupsSettingsAppsGroupsSettings
 */
@interface GTLRGroupsSettingsQuery_GroupsPatch : GTLRGroupsSettingsQuery
// Previous library name was
//   +[GTLQueryGroupsSettings queryForGroupsPatchWithObject:groupUniqueId:]

/** The resource ID */
@property(nonatomic, copy, nullable) NSString *groupUniqueId;

/**
 *  Fetches a @c GTLRGroupsSettings_Groups.
 *
 *  Updates an existing resource. This method supports patch semantics.
 *
 *  @param object The @c GTLRGroupsSettings_Groups to include in the query.
 *  @param groupUniqueId The resource ID
 *
 *  @returns GTLRGroupsSettingsQuery_GroupsPatch
 */
+ (instancetype)queryWithObject:(GTLRGroupsSettings_Groups *)object
                  groupUniqueId:(NSString *)groupUniqueId;

@end

/**
 *  Updates an existing resource.
 *
 *  Method: groupsSettings.groups.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGroupsSettingsAppsGroupsSettings
 */
@interface GTLRGroupsSettingsQuery_GroupsUpdate : GTLRGroupsSettingsQuery
// Previous library name was
//   +[GTLQueryGroupsSettings queryForGroupsUpdateWithObject:groupUniqueId:]

/** The resource ID */
@property(nonatomic, copy, nullable) NSString *groupUniqueId;

/**
 *  Fetches a @c GTLRGroupsSettings_Groups.
 *
 *  Updates an existing resource.
 *
 *  @param object The @c GTLRGroupsSettings_Groups to include in the query.
 *  @param groupUniqueId The resource ID
 *
 *  @returns GTLRGroupsSettingsQuery_GroupsUpdate
 */
+ (instancetype)queryWithObject:(GTLRGroupsSettings_Groups *)object
                  groupUniqueId:(NSString *)groupUniqueId;

@end

NS_ASSUME_NONNULL_END
