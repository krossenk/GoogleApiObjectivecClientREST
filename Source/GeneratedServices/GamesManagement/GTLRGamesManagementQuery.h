// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Game Services Management API (gamesManagement/v1management)
// Description:
//   The Management API for Google Play Game Services.
// Documentation:
//   https://developers.google.com/games/services

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRGamesManagement_AchievementResetMultipleForAllRequest;
@class GTLRGamesManagement_EventsResetMultipleForAllRequest;
@class GTLRGamesManagement_QuestsResetMultipleForAllRequest;
@class GTLRGamesManagement_ScoresResetMultipleForAllRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Games Management query classes.
 */
@interface GTLRGamesManagementQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Resets the achievement with the given ID for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.achievements.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_AchievementsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetWithachievementId:]

/** The ID of the achievement used by this method. */
@property(nonatomic, copy, nullable) NSString *achievementId;

/**
 *  Fetches a @c GTLRGamesManagement_AchievementResetResponse.
 *
 *  Resets the achievement with the given ID for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @param achievementId The ID of the achievement used by this method.
 *
 *  @returns GTLRGamesManagementQuery_AchievementsReset
 */
+ (instancetype)queryWithAchievementId:(NSString *)achievementId;

@end

/**
 *  Resets all achievements for the currently authenticated player for your
 *  application. This method is only accessible to whitelisted tester accounts
 *  for your application.
 *
 *  Method: gamesManagement.achievements.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_AchievementsResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetAll]

/**
 *  Fetches a @c GTLRGamesManagement_AchievementResetAllResponse.
 *
 *  Resets all achievements for the currently authenticated player for your
 *  application. This method is only accessible to whitelisted tester accounts
 *  for your application.
 *
 *  @returns GTLRGamesManagementQuery_AchievementsResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets all draft achievements for all players. This method is only available
 *  to user accounts for your developer console.
 *
 *  Method: gamesManagement.achievements.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_AchievementsResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all draft achievements for all players. This method is only available
 *  to user accounts for your developer console.
 *
 *  @returns GTLRGamesManagementQuery_AchievementsResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets the achievement with the given ID for all players. This method is
 *  only available to user accounts for your developer console. Only draft
 *  achievements can be reset.
 *
 *  Method: gamesManagement.achievements.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_AchievementsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetForAllPlayersWithachievementId:]

/** The ID of the achievement used by this method. */
@property(nonatomic, copy, nullable) NSString *achievementId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets the achievement with the given ID for all players. This method is
 *  only available to user accounts for your developer console. Only draft
 *  achievements can be reset.
 *
 *  @param achievementId The ID of the achievement used by this method.
 *
 *  @returns GTLRGamesManagementQuery_AchievementsResetForAllPlayers
 */
+ (instancetype)queryWithAchievementId:(NSString *)achievementId;

@end

/**
 *  Resets achievements with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft
 *  achievements may be reset.
 *
 *  Method: gamesManagement.achievements.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_AchievementsResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets achievements with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft
 *  achievements may be reset.
 *
 *  @param object The @c
 *    GTLRGamesManagement_AchievementResetMultipleForAllRequest to include in
 *    the query.
 *
 *  @returns GTLRGamesManagementQuery_AchievementsResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_AchievementResetMultipleForAllRequest *)object;

@end

/**
 *  Get the list of players hidden from the given application. This method is
 *  only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.applications.listHidden
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ApplicationsListHidden : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForApplicationsListHiddenWithapplicationId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  The maximum number of player resources to return in the response, used for
 *  paging. For any response, the actual number of player resources returned may
 *  be less than the specified maxResults.
 *
 *  @note The documented range is 1..50.
 */
@property(nonatomic, assign) NSInteger maxResults;

/** The token returned by the previous request. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRGamesManagement_HiddenPlayerList.
 *
 *  Get the list of players hidden from the given application. This method is
 *  only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *
 *  @returns GTLRGamesManagementQuery_ApplicationsListHidden
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId;

@end

/**
 *  Resets all player progress on the event with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application. All quests for this player that use the event
 *  will also be reset.
 *
 *  Method: gamesManagement.events.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_EventsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetWitheventId:]

/** The ID of the event. */
@property(nonatomic, copy, nullable) NSString *eventId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on the event with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application. All quests for this player that use the event
 *  will also be reset.
 *
 *  @param eventId The ID of the event.
 *
 *  @returns GTLRGamesManagementQuery_EventsReset
 */
+ (instancetype)queryWithEventId:(NSString *)eventId;

@end

/**
 *  Resets all player progress on all events for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application. All quests for this player will also be reset.
 *
 *  Method: gamesManagement.events.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_EventsResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetAll]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on all events for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application. All quests for this player will also be reset.
 *
 *  @returns GTLRGamesManagementQuery_EventsResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets all draft events for all players. This method is only available to
 *  user accounts for your developer console. All quests that use any of these
 *  events will also be reset.
 *
 *  Method: gamesManagement.events.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_EventsResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all draft events for all players. This method is only available to
 *  user accounts for your developer console. All quests that use any of these
 *  events will also be reset.
 *
 *  @returns GTLRGamesManagementQuery_EventsResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets the event with the given ID for all players. This method is only
 *  available to user accounts for your developer console. Only draft events can
 *  be reset. All quests that use the event will also be reset.
 *
 *  Method: gamesManagement.events.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_EventsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetForAllPlayersWitheventId:]

/** The ID of the event. */
@property(nonatomic, copy, nullable) NSString *eventId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets the event with the given ID for all players. This method is only
 *  available to user accounts for your developer console. Only draft events can
 *  be reset. All quests that use the event will also be reset.
 *
 *  @param eventId The ID of the event.
 *
 *  @returns GTLRGamesManagementQuery_EventsResetForAllPlayers
 */
+ (instancetype)queryWithEventId:(NSString *)eventId;

@end

/**
 *  Resets events with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft events may
 *  be reset. All quests that use any of the events will also be reset.
 *
 *  Method: gamesManagement.events.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_EventsResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets events with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft events may
 *  be reset. All quests that use any of the events will also be reset.
 *
 *  @param object The @c GTLRGamesManagement_EventsResetMultipleForAllRequest to
 *    include in the query.
 *
 *  @returns GTLRGamesManagementQuery_EventsResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_EventsResetMultipleForAllRequest *)object;

@end

/**
 *  Hide the given player's leaderboard scores from the given application. This
 *  method is only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.players.hide
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_PlayersHide : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForPlayersHideWithapplicationId:playerId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  A player ID. A value of me may be used in place of the authenticated
 *  player's ID.
 */
@property(nonatomic, copy, nullable) NSString *playerId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Hide the given player's leaderboard scores from the given application. This
 *  method is only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *  @param playerId A player ID. A value of me may be used in place of the
 *    authenticated player's ID.
 *
 *  @returns GTLRGamesManagementQuery_PlayersHide
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId
                              playerId:(NSString *)playerId;

@end

/**
 *  Unhide the given player's leaderboard scores from the given application.
 *  This method is only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.players.unhide
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_PlayersUnhide : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForPlayersUnhideWithapplicationId:playerId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  A player ID. A value of me may be used in place of the authenticated
 *  player's ID.
 */
@property(nonatomic, copy, nullable) NSString *playerId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Unhide the given player's leaderboard scores from the given application.
 *  This method is only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *  @param playerId A player ID. A value of me may be used in place of the
 *    authenticated player's ID.
 *
 *  @returns GTLRGamesManagementQuery_PlayersUnhide
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId
                              playerId:(NSString *)playerId;

@end

/**
 *  Resets all player progress on the quest with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  Method: gamesManagement.quests.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_QuestsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForQuestsResetWithquestId:]

/** The ID of the quest. */
@property(nonatomic, copy, nullable) NSString *questId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on the quest with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  @param questId The ID of the quest.
 *
 *  @returns GTLRGamesManagementQuery_QuestsReset
 */
+ (instancetype)queryWithQuestId:(NSString *)questId;

@end

/**
 *  Resets all player progress on all quests for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.quests.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_QuestsResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForQuestsResetAll]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on all quests for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @returns GTLRGamesManagementQuery_QuestsResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets all draft quests for all players. This method is only available to
 *  user accounts for your developer console.
 *
 *  Method: gamesManagement.quests.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_QuestsResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForQuestsResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all draft quests for all players. This method is only available to
 *  user accounts for your developer console.
 *
 *  @returns GTLRGamesManagementQuery_QuestsResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets all player progress on the quest with the given ID for all players.
 *  This method is only available to user accounts for your developer console.
 *  Only draft quests can be reset.
 *
 *  Method: gamesManagement.quests.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_QuestsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForQuestsResetForAllPlayersWithquestId:]

/** The ID of the quest. */
@property(nonatomic, copy, nullable) NSString *questId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on the quest with the given ID for all players.
 *  This method is only available to user accounts for your developer console.
 *  Only draft quests can be reset.
 *
 *  @param questId The ID of the quest.
 *
 *  @returns GTLRGamesManagementQuery_QuestsResetForAllPlayers
 */
+ (instancetype)queryWithQuestId:(NSString *)questId;

@end

/**
 *  Resets quests with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft quests may
 *  be reset.
 *
 *  Method: gamesManagement.quests.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_QuestsResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForQuestsResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets quests with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft quests may
 *  be reset.
 *
 *  @param object The @c GTLRGamesManagement_QuestsResetMultipleForAllRequest to
 *    include in the query.
 *
 *  @returns GTLRGamesManagementQuery_QuestsResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_QuestsResetMultipleForAllRequest *)object;

@end

/**
 *  Reset all rooms for the currently authenticated player for your application.
 *  This method is only accessible to whitelisted tester accounts for your
 *  application.
 *
 *  Method: gamesManagement.rooms.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_RoomsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForRoomsReset]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Reset all rooms for the currently authenticated player for your application.
 *  This method is only accessible to whitelisted tester accounts for your
 *  application.
 *
 *  @returns GTLRGamesManagementQuery_RoomsReset
 */
+ (instancetype)query;

@end

/**
 *  Deletes rooms where the only room participants are from whitelisted tester
 *  accounts for your application. This method is only available to user
 *  accounts for your developer console.
 *
 *  Method: gamesManagement.rooms.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_RoomsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForRoomsResetForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes rooms where the only room participants are from whitelisted tester
 *  accounts for your application. This method is only available to user
 *  accounts for your developer console.
 *
 *  @returns GTLRGamesManagementQuery_RoomsResetForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets scores for the leaderboard with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  Method: gamesManagement.scores.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ScoresReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetWithleaderboardId:]

/** The ID of the leaderboard. */
@property(nonatomic, copy, nullable) NSString *leaderboardId;

/**
 *  Fetches a @c GTLRGamesManagement_PlayerScoreResetResponse.
 *
 *  Resets scores for the leaderboard with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  @param leaderboardId The ID of the leaderboard.
 *
 *  @returns GTLRGamesManagementQuery_ScoresReset
 */
+ (instancetype)queryWithLeaderboardId:(NSString *)leaderboardId;

@end

/**
 *  Resets all scores for all leaderboards for the currently authenticated
 *  players. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.scores.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ScoresResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetAll]

/**
 *  Fetches a @c GTLRGamesManagement_PlayerScoreResetAllResponse.
 *
 *  Resets all scores for all leaderboards for the currently authenticated
 *  players. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @returns GTLRGamesManagementQuery_ScoresResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets scores for all draft leaderboards for all players. This method is
 *  only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.scores.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ScoresResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for all draft leaderboards for all players. This method is
 *  only available to user accounts for your developer console.
 *
 *  @returns GTLRGamesManagementQuery_ScoresResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets scores for the leaderboard with the given ID for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards can be reset.
 *
 *  Method: gamesManagement.scores.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ScoresResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetForAllPlayersWithleaderboardId:]

/** The ID of the leaderboard. */
@property(nonatomic, copy, nullable) NSString *leaderboardId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for the leaderboard with the given ID for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards can be reset.
 *
 *  @param leaderboardId The ID of the leaderboard.
 *
 *  @returns GTLRGamesManagementQuery_ScoresResetForAllPlayers
 */
+ (instancetype)queryWithLeaderboardId:(NSString *)leaderboardId;

@end

/**
 *  Resets scores for the leaderboards with the given IDs for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards may be reset.
 *
 *  Method: gamesManagement.scores.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_ScoresResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for the leaderboards with the given IDs for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards may be reset.
 *
 *  @param object The @c GTLRGamesManagement_ScoresResetMultipleForAllRequest to
 *    include in the query.
 *
 *  @returns GTLRGamesManagementQuery_ScoresResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_ScoresResetMultipleForAllRequest *)object;

@end

/**
 *  Reset all turn-based match data for a user. This method is only accessible
 *  to whitelisted tester accounts for your application.
 *
 *  Method: gamesManagement.turnBasedMatches.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_TurnBasedMatchesReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForTurnBasedMatchesReset]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Reset all turn-based match data for a user. This method is only accessible
 *  to whitelisted tester accounts for your application.
 *
 *  @returns GTLRGamesManagementQuery_TurnBasedMatchesReset
 */
+ (instancetype)query;

@end

/**
 *  Deletes turn-based matches where the only match participants are from
 *  whitelisted tester accounts for your application. This method is only
 *  available to user accounts for your developer console.
 *
 *  Method: gamesManagement.turnBasedMatches.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 *    @c kGTLRAuthScopeGamesManagementPlusLogin
 */
@interface GTLRGamesManagementQuery_TurnBasedMatchesResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForTurnBasedMatchesResetForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes turn-based matches where the only match participants are from
 *  whitelisted tester accounts for your application. This method is only
 *  available to user accounts for your developer console.
 *
 *  @returns GTLRGamesManagementQuery_TurnBasedMatchesResetForAllPlayers
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END
