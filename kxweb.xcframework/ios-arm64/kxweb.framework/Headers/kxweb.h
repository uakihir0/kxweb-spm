#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KxwebCoreAboutAccount, KxwebCoreAboutAccountCompanion, KxwebCoreAboutAccountResponse, KxwebCoreArticle, KxwebCoreArticleCompanion, KxwebCoreBookmarkFolderTimelineRequest, KxwebCoreBookmarkRequest, KxwebCoreCreateTweetRequest, KxwebCoreDeleteTweetRequest, KxwebCoreExploreTab, KxwebCoreFollowRequest, KxwebCoreFollowingRequest, KxwebCoreFollowingResponse, KxwebCoreGetBookmarksRequest, KxwebCoreGetBookmarksResponse, KxwebCoreGetCurrentUserResponse, KxwebCoreGetLikesRequest, KxwebCoreGetLikesResponse, KxwebCoreGetListsRequest, KxwebCoreGetNewsRequest, KxwebCoreGetNewsResponse, KxwebCoreGetRepliesRequest, KxwebCoreGetRepliesResponse, KxwebCoreGetThreadRequest, KxwebCoreGetThreadResponse, KxwebCoreGetTrendLocationsResponse, KxwebCoreGetTrendsRequest, KxwebCoreGetTrendsResponse, KxwebCoreGetUserAboutAccountRequest, KxwebCoreGetUserIdByUsernameRequest, KxwebCoreHomeTimelineRequest, KxwebCoreHomeTimelineResponse, KxwebCoreLikeRequest, KxwebCoreListTimelineRequest, KxwebCoreListTimelineResponse, KxwebCoreMedia, KxwebCoreMediaCompanion, KxwebCoreMutationResult, KxwebCoreMutationResultCompanion, KxwebCoreRateLimit, KxwebCoreRateLimitCompanion, KxwebCoreResponse<T>, KxwebCoreRetweetRequest, KxwebCoreSearchBookmarksRequest, KxwebCoreSearchSearchRequest, KxwebCoreSearchSearchResponse, KxwebCoreSearchType, KxwebCoreSearchUsersRequest, KxwebCoreSearchUsersResponse, KxwebCoreTrend, KxwebCoreTrendCompanion, KxwebCoreTrendLocation, KxwebCoreTrendLocationCompanion, KxwebCoreTweet, KxwebCoreTweetCompanion, KxwebCoreTweetDetailRequest, KxwebCoreTweetDetailResponse, KxwebCoreUploadMediaRequest, KxwebCoreUploadMediaResult, KxwebCoreUploadMediaResultCompanion, KxwebCoreUser, KxwebCoreUserByScreenNameRequest, KxwebCoreUserCompanion, KxwebCoreUserTweetsRequest, KxwebCoreUserTweetsResponse, KxwebCoreXWebConfig, KxwebCoreXWebSession, KxwebCoreXWebSessionCompanion, KxwebCoreXWebSessionPool, KxwebKotlinArray<T>, KxwebKotlinByteArray, KxwebKotlinByteIterator, KxwebKotlinEnum<E>, KxwebKotlinEnumCompanion, KxwebKotlinException, KxwebKotlinIllegalStateException, KxwebKotlinNothing, KxwebKotlinRuntimeException, KxwebKotlinThrowable, KxwebKotlinx_serialization_coreSerialKind, KxwebKotlinx_serialization_coreSerializersModule, KxwebKxwebFactory;

@protocol KxwebCoreAccountResource, KxwebCoreBookmarkResource, KxwebCoreEngagementResource, KxwebCoreExploreResource, KxwebCoreFollowResource, KxwebCoreHomeResource, KxwebCoreListResource, KxwebCoreMediaResource, KxwebCorePostResource, KxwebCoreSearchResource, KxwebCoreTimelineResource, KxwebCoreTrendResource, KxwebCoreTweetResource, KxwebCoreUserResource, KxwebCoreXWeb, KxwebKotlinAnnotation, KxwebKotlinComparable, KxwebKotlinIterator, KxwebKotlinKAnnotatedElement, KxwebKotlinKClass, KxwebKotlinKClassifier, KxwebKotlinKDeclarationContainer, KxwebKotlinx_serialization_coreCompositeDecoder, KxwebKotlinx_serialization_coreCompositeEncoder, KxwebKotlinx_serialization_coreDecoder, KxwebKotlinx_serialization_coreDeserializationStrategy, KxwebKotlinx_serialization_coreEncoder, KxwebKotlinx_serialization_coreKSerializer, KxwebKotlinx_serialization_coreSerialDescriptor, KxwebKotlinx_serialization_coreSerializationStrategy, KxwebKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KxwebBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KxwebBase (KxwebBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KxwebMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KxwebMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKxwebKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KxwebNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KxwebByte : KxwebNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KxwebUByte : KxwebNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KxwebShort : KxwebNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KxwebUShort : KxwebNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KxwebInt : KxwebNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KxwebUInt : KxwebNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KxwebLong : KxwebNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KxwebULong : KxwebNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KxwebFloat : KxwebNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KxwebDouble : KxwebNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KxwebBoolean : KxwebNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KxwebFactory")))
@interface KxwebKxwebFactory : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kxwebFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebKxwebFactory *shared __attribute__((swift_name("shared")));
- (id<KxwebCoreXWeb>)instanceConfig:(KxwebCoreXWebConfig *)config __attribute__((swift_name("instance(config:)")));
- (id<KxwebCoreXWeb>)instanceAuthToken:(NSString *)authToken csrfToken:(NSString *)csrfToken __attribute__((swift_name("instance(authToken:csrfToken:)")));
- (id<KxwebCoreXWeb>)instanceFromCookieStringCookieString:(NSString *)cookieString __attribute__((swift_name("instanceFromCookieString(cookieString:)")));
- (id<KxwebCoreXWeb>)instanceOAuthOauthToken:(NSString *)oauthToken oauthSecret:(NSString *)oauthSecret __attribute__((swift_name("instanceOAuth(oauthToken:oauthSecret:)")));
- (id<KxwebCoreXWeb>)instancePooledSessions:(NSArray<KxwebCoreXWebSession *> *)sessions __attribute__((swift_name("instancePooled(sessions:)")));
- (id<KxwebCoreXWeb>)instancePooledPool:(KxwebCoreXWebSessionPool *)pool __attribute__((swift_name("instancePooled(pool:)")));
- (id<KxwebCoreXWeb>)instancePooledFromJsonLinesJsonLines:(NSString *)jsonLines __attribute__((swift_name("instancePooledFromJsonLines(jsonLines:)")));
@end

__attribute__((swift_name("CoreXWeb")))
@protocol KxwebCoreXWeb
@required
- (id<KxwebCoreAccountResource>)account __attribute__((swift_name("account()")));
- (id<KxwebCoreBookmarkResource>)bookmark __attribute__((swift_name("bookmark()")));
- (id<KxwebCoreEngagementResource>)engagement __attribute__((swift_name("engagement()")));
- (id<KxwebCoreExploreResource>)explore __attribute__((swift_name("explore()")));
- (id<KxwebCoreFollowResource>)follow __attribute__((swift_name("follow()")));
- (id<KxwebCoreHomeResource>)home __attribute__((swift_name("home()")));
- (id<KxwebCoreListResource>)list __attribute__((swift_name("list()")));
- (id<KxwebCoreMediaResource>)media __attribute__((swift_name("media()")));
- (id<KxwebCorePostResource>)post __attribute__((swift_name("post()")));
- (id<KxwebCoreSearchResource>)search __attribute__((swift_name("search()")));
- (id<KxwebCoreTimelineResource>)timeline __attribute__((swift_name("timeline()")));
- (id<KxwebCoreTrendResource>)trend __attribute__((swift_name("trend()")));
- (id<KxwebCoreTweetResource>)tweet __attribute__((swift_name("tweet()")));
- (id<KxwebCoreUserResource>)user __attribute__((swift_name("user()")));
@end

__attribute__((swift_name("CoreXWebConfig")))
@interface KxwebCoreXWebConfig : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Resolve the effective authentication from the session pool (if set)
 * or from the static config fields.
 *
 * @param endpoint The API endpoint name for rate limit selection.
 * @return A resolved [XWebConfig] snapshot with credentials set.
 */
- (KxwebCoreXWebConfig *)resolveSessionEndpoint:(NSString *)endpoint __attribute__((swift_name("resolveSession(endpoint:)")));

/**
 * Base URI for X (Twitter) GraphQL API.
 */
@property NSString *apiBaseUri __attribute__((swift_name("apiBaseUri")));

/**
 * Cookie: auth_token value from X (Twitter) web browser session.
 */
@property NSString * _Nullable authToken __attribute__((swift_name("authToken")));

/**
 * Explicit x-client-transaction-id header value.
 * This is consumed by the next eligible request and then cleared.
 */
@property NSString * _Nullable clientTransactionId __attribute__((swift_name("clientTransactionId")));

/**
 * Supplies an x-client-transaction-id for each request.
 * The arguments are the HTTP method and URL path.
 */
@property NSString *(^ _Nullable clientTransactionIdProvider)(NSString *, NSString *) __attribute__((swift_name("clientTransactionIdProvider")));

/**
 * Specifies a connection timeout in milliseconds.
 */
@property KxwebLong * _Nullable connectTimeoutMillis __attribute__((swift_name("connectTimeoutMillis")));

/**
 * Full browser cookie string.
 * When set, this is sent as the Cookie header directly,
 * overriding the auth_token/ct0 individual fields for the cookie header.
 * auth_token and csrfToken are still used for x-csrf-token header.
 */
@property NSString * _Nullable cookieString __attribute__((swift_name("cookieString")));

/**
 * Cookie: ct0 value (CSRF token) from X (Twitter) web browser session.
 */
@property NSString * _Nullable csrfToken __attribute__((swift_name("csrfToken")));

/**
 * The currently active session resolved from the pool.
 * Set internally before each request when using a session pool.
 * Do not set this manually.
 */
@property KxwebCoreXWebSession * _Nullable currentSession __attribute__((swift_name("currentSession")));

/**
 * Enable x-client-transaction-id header generation.
 */
@property BOOL enableClientTransaction __attribute__((swift_name("enableClientTransaction")));

/**
 * Force guest mode. When true, requests use guest-token authentication
 * even if no other credentials are set. Guest auth is also used
 * transparently when no cookie/OAuth credentials are present.
 */
@property BOOL guestMode __attribute__((swift_name("guestMode")));

/**
 * Guest token value. When set, it is used directly instead of activating
 * a new one. Leave null to acquire and cache a token automatically.
 */
@property NSString * _Nullable guestToken __attribute__((swift_name("guestToken")));

/**
 * OAuth1 access token secret for X (Twitter) API.
 */
@property NSString * _Nullable oauthSecret __attribute__((swift_name("oauthSecret")));

/**
 * OAuth1 access token for X (Twitter) API.
 */
@property NSString * _Nullable oauthToken __attribute__((swift_name("oauthToken")));

/**
 * Specifies a request timeout in milliseconds.
 */
@property KxwebLong * _Nullable requestTimeoutMillis __attribute__((swift_name("requestTimeoutMillis")));

/**
 * Session pool for managing multiple authenticated sessions.
 * When set, credentials are resolved from the pool instead of
 * the static authToken/csrfToken/oauthToken/oauthSecret fields.
 *
 * @see XWebSessionPool
 */
@property KxwebCoreXWebSessionPool * _Nullable sessionPool __attribute__((swift_name("sessionPool")));

/**
 * Skip SSL Validation (Kotlin/JVM Only)
 */
@property BOOL skipSSLValidation __attribute__((swift_name("skipSSLValidation")));

/**
 * Specifies a socket timeout (read and write) in milliseconds.
 */
@property KxwebLong * _Nullable socketTimeoutMillis __attribute__((swift_name("socketTimeoutMillis")));
@end


/**
 * Represents a single authenticated session for X (Twitter) API.
 * Used with [XWebSessionPool] for managing multiple sessions.
 *
 * Reference: Nitter's session management (auth.nim)
 */
__attribute__((swift_name("CoreXWebSession")))
@interface KxwebCoreXWebSession : KxwebBase
@property (class, readonly, getter=companion) KxwebCoreXWebSessionCompanion *companion __attribute__((swift_name("companion")));

/**
 * Optional label for identifying this session (e.g., username).
 */
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@end


/**
 * Manages a pool of [XWebSession]s with per-session, per-endpoint rate limit tracking.
 * Automatically selects the best available session for each request,
 * avoiding rate-limited or invalidated sessions.
 *
 * Reference: Nitter's session pool management (auth.nim)
 *
 * Usage:
 * ```kotlin
 * val pool = XWebSessionPool(
 *     listOf(
 *         XWebSession.cookie(authToken1, csrfToken1),
 *         XWebSession.cookie(authToken2, csrfToken2),
 *         XWebSession.oauth(oauthToken1, oauthSecret1),
 *     )
 * )
 * val xweb = XWebFactory.instancePooled(pool)
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreXWebSessionPool")))
@interface KxwebCoreXWebSessionPool : KxwebBase
- (instancetype)initWithSessions:(NSArray<KxwebCoreXWebSession *> *)sessions __attribute__((swift_name("init(sessions:)"))) __attribute__((objc_designated_initializer));

/**
 * Select the best available session for the given endpoint.
 * Returns null if all sessions are rate-limited or invalidated.
 *
 * Selection strategy:
 * 1. Skip invalidated sessions
 * 2. Skip globally limited sessions
 * 3. Skip sessions that are rate-limited for this endpoint
 * 4. Among remaining, prefer the session with the most remaining requests
 * 5. If all sessions are limited, return the one that resets soonest
 */
- (KxwebCoreXWebSession * _Nullable)acquireSessionEndpoint:(NSString *)endpoint __attribute__((swift_name("acquireSession(endpoint:)")));

/**
 * Add a new session to the pool.
 */
- (void)addSessionSession:(KxwebCoreXWebSession *)session __attribute__((swift_name("addSession(session:)")));

/**
 * Get rate limit info for a session and endpoint.
 */
- (KxwebCoreRateLimit * _Nullable)getRateLimitSession:(KxwebCoreXWebSession *)session endpoint:(NSString *)endpoint __attribute__((swift_name("getRateLimit(session:endpoint:)")));

/**
 * Mark a session as permanently invalidated (e.g., X error codes 89, 239, 326).
 * The session will no longer be selected.
 */
- (void)invalidateSessionSession:(KxwebCoreXWebSession *)session __attribute__((swift_name("invalidateSession(session:)")));

/**
 * Check if a specific session is currently available for the given endpoint.
 */
- (BOOL)isSessionAvailableSession:(KxwebCoreXWebSession *)session endpoint:(NSString *)endpoint __attribute__((swift_name("isSessionAvailable(session:endpoint:)")));

/**
 * Mark a session as globally rate-limited (e.g., X error code 88).
 */
- (void)markGloballyLimitedSession:(KxwebCoreXWebSession *)session __attribute__((swift_name("markGloballyLimited(session:)")));

/**
 * Remove a session from the pool.
 */
- (void)removeSessionSession:(KxwebCoreXWebSession *)session __attribute__((swift_name("removeSession(session:)")));

/**
 * Update rate limit information for a session after a response.
 */
- (void)updateRateLimitSession:(KxwebCoreXWebSession *)session endpoint:(NSString *)endpoint rateLimit:(KxwebCoreRateLimit *)rateLimit __attribute__((swift_name("updateRateLimit(session:endpoint:rateLimit:)")));

/**
 * Number of currently available (non-invalidated) sessions.
 */
@property (readonly) int32_t availableCount __attribute__((swift_name("availableCount")));

/** Duration in seconds to mark a session as globally limited. */
@property int64_t globalLimitDurationSeconds __attribute__((swift_name("globalLimitDurationSeconds")));

/**
 * Total number of sessions in the pool (including invalidated ones).
 */
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("CoreAccountResource")))
@protocol KxwebCoreAccountResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentUserWithCompletionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetCurrentUserResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentUser(completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetCurrentUserResponse *> *)getCurrentUserBlocking __attribute__((swift_name("getCurrentUserBlocking()")));
@end

__attribute__((swift_name("CoreBookmarkResource")))
@protocol KxwebCoreBookmarkResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarkRequest:(KxwebCoreBookmarkRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmark(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)bookmarkBlockingRequest:(KxwebCoreBookmarkRequest *)request __attribute__((swift_name("bookmarkBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBookmarkFolderTimelineRequest:(KxwebCoreBookmarkFolderTimelineRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetBookmarksResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBookmarkFolderTimeline(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetBookmarksResponse *> *)getBookmarkFolderTimelineBlockingRequest:(KxwebCoreBookmarkFolderTimelineRequest *)request __attribute__((swift_name("getBookmarkFolderTimelineBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBookmarksRequest:(KxwebCoreGetBookmarksRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetBookmarksResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBookmarks(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetBookmarksResponse *> *)getBookmarksBlockingRequest:(KxwebCoreGetBookmarksRequest *)request __attribute__((swift_name("getBookmarksBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchBookmarksRequest:(KxwebCoreSearchBookmarksRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreSearchSearchResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchBookmarks(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreSearchSearchResponse *> *)searchBookmarksBlockingRequest:(KxwebCoreSearchBookmarksRequest *)request __attribute__((swift_name("searchBookmarksBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unbookmarkRequest:(KxwebCoreBookmarkRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unbookmark(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)unbookmarkBlockingRequest:(KxwebCoreBookmarkRequest *)request __attribute__((swift_name("unbookmarkBlocking(request:)")));
@end

__attribute__((swift_name("CoreEngagementResource")))
@protocol KxwebCoreEngagementResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeRequest:(KxwebCoreLikeRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("like(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)likeBlockingRequest:(KxwebCoreLikeRequest *)request __attribute__((swift_name("likeBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)retweetRequest:(KxwebCoreRetweetRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("retweet(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)retweetBlockingRequest:(KxwebCoreRetweetRequest *)request __attribute__((swift_name("retweetBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unlikeRequest:(KxwebCoreLikeRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unlike(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)unlikeBlockingRequest:(KxwebCoreLikeRequest *)request __attribute__((swift_name("unlikeBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unretweetRequest:(KxwebCoreRetweetRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unretweet(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)unretweetBlockingRequest:(KxwebCoreRetweetRequest *)request __attribute__((swift_name("unretweetBlocking(request:)")));
@end

__attribute__((swift_name("CoreExploreResource")))
@protocol KxwebCoreExploreResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNewsRequest:(KxwebCoreGetNewsRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetNewsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNews(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetNewsResponse *> *)getNewsBlockingRequest:(KxwebCoreGetNewsRequest *)request __attribute__((swift_name("getNewsBlocking(request:)")));
@end

__attribute__((swift_name("CoreFollowResource")))
@protocol KxwebCoreFollowResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followRequest:(KxwebCoreFollowRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)followBlockingRequest:(KxwebCoreFollowRequest *)request __attribute__((swift_name("followBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowRequest:(KxwebCoreFollowRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)unfollowBlockingRequest:(KxwebCoreFollowRequest *)request __attribute__((swift_name("unfollowBlocking(request:)")));
@end

__attribute__((swift_name("CoreHomeResource")))
@protocol KxwebCoreHomeResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHomeLatestTimelineRequest:(KxwebCoreHomeTimelineRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreHomeTimelineResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHomeLatestTimeline(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreHomeTimelineResponse *> *)getHomeLatestTimelineBlockingRequest:(KxwebCoreHomeTimelineRequest *)request __attribute__((swift_name("getHomeLatestTimelineBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHomeTimelineRequest:(KxwebCoreHomeTimelineRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreHomeTimelineResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHomeTimeline(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreHomeTimelineResponse *> *)getHomeTimelineBlockingRequest:(KxwebCoreHomeTimelineRequest *)request __attribute__((swift_name("getHomeTimelineBlocking(request:)")));
@end

__attribute__((swift_name("CoreListResource")))
@protocol KxwebCoreListResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListMembershipsRequest:(KxwebCoreGetListsRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreListTimelineResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListMemberships(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreListTimelineResponse *> *)getListMembershipsBlockingRequest:(KxwebCoreGetListsRequest *)request __attribute__((swift_name("getListMembershipsBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListTimelineRequest:(KxwebCoreListTimelineRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreListTimelineResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListTimeline(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreListTimelineResponse *> *)getListTimelineBlockingRequest:(KxwebCoreListTimelineRequest *)request __attribute__((swift_name("getListTimelineBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnedListsRequest:(KxwebCoreGetListsRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreListTimelineResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnedLists(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreListTimelineResponse *> *)getOwnedListsBlockingRequest:(KxwebCoreGetListsRequest *)request __attribute__((swift_name("getOwnedListsBlocking(request:)")));
@end

__attribute__((swift_name("CoreMediaResource")))
@protocol KxwebCoreMediaResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadMediaRequest:(KxwebCoreUploadMediaRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreUploadMediaResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadMedia(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreUploadMediaResult *> *)uploadMediaBlockingRequest:(KxwebCoreUploadMediaRequest *)request __attribute__((swift_name("uploadMediaBlocking(request:)")));
@end

__attribute__((swift_name("CorePostResource")))
@protocol KxwebCorePostResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createTweetRequest:(KxwebCoreCreateTweetRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreTweet *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createTweet(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreTweet *> *)createTweetBlockingRequest:(KxwebCoreCreateTweetRequest *)request __attribute__((swift_name("createTweetBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteTweetRequest:(KxwebCoreDeleteTweetRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreMutationResult *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteTweet(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreMutationResult *> *)deleteTweetBlockingRequest:(KxwebCoreDeleteTweetRequest *)request __attribute__((swift_name("deleteTweetBlocking(request:)")));
@end

__attribute__((swift_name("CoreSearchResource")))
@protocol KxwebCoreSearchResource
@required

/**
 * Search for tweets matching the given query.
 * Uses X (Twitter) GraphQL SearchTimeline endpoint.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchTweetsRequest:(KxwebCoreSearchSearchRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreSearchSearchResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchTweets(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreSearchSearchResponse *> *)searchTweetsBlockingRequest:(KxwebCoreSearchSearchRequest *)request __attribute__((swift_name("searchTweetsBlocking(request:)")));

/**
 * Search for users matching the given query.
 * Uses X (Twitter) GraphQL SearchTimeline endpoint with the "People" product.
 *
 * Note: requires a logged-in session (cookie or OAuth); guest access is
 * not permitted for search.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchUsersRequest:(KxwebCoreSearchUsersRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreSearchUsersResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchUsers(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreSearchUsersResponse *> *)searchUsersBlockingRequest:(KxwebCoreSearchUsersRequest *)request __attribute__((swift_name("searchUsersBlocking(request:)")));
@end

__attribute__((swift_name("CoreTimelineResource")))
@protocol KxwebCoreTimelineResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLikesRequest:(KxwebCoreGetLikesRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetLikesResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLikes(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetLikesResponse *> *)getLikesBlockingRequest:(KxwebCoreGetLikesRequest *)request __attribute__((swift_name("getLikesBlocking(request:)")));
@end

__attribute__((swift_name("CoreTrendResource")))
@protocol KxwebCoreTrendResource
@required

/**
 * Get the list of locations for which trends are available.
 * Uses X (Twitter) REST v1.1 trends/available.json endpoint.
 * Works with guest authentication.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTrendLocationsWithCompletionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetTrendLocationsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTrendLocations(completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetTrendLocationsResponse *> *)getTrendLocationsBlocking __attribute__((swift_name("getTrendLocationsBlocking()")));

/**
 * Get the trends for a specific location (by WOEID).
 * Uses X (Twitter) REST v1.1 trends/place.json endpoint.
 * Works with guest authentication.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTrendsRequest:(KxwebCoreGetTrendsRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetTrendsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTrends(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetTrendsResponse *> *)getTrendsBlockingRequest:(KxwebCoreGetTrendsRequest *)request __attribute__((swift_name("getTrendsBlocking(request:)")));
@end

__attribute__((swift_name("CoreTweetResource")))
@protocol KxwebCoreTweetResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRepliesRequest:(KxwebCoreGetRepliesRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetRepliesResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReplies(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetRepliesResponse *> *)getRepliesBlockingRequest:(KxwebCoreGetRepliesRequest *)request __attribute__((swift_name("getRepliesBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getThreadRequest:(KxwebCoreGetThreadRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreGetThreadResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThread(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreGetThreadResponse *> *)getThreadBlockingRequest:(KxwebCoreGetThreadRequest *)request __attribute__((swift_name("getThreadBlocking(request:)")));

/**
 * Get a single tweet by ID.
 *
 * @param tweetId The tweet ID.
 * @param withArticle When true, request embedded X Article content
 *   (title/preview/plain text). Defaults to false to keep payloads small.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTweetTweetId:(NSString *)tweetId withArticle:(BOOL)withArticle completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreTweet *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTweet(tweetId:withArticle:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreTweet *> *)getTweetBlockingTweetId:(NSString *)tweetId withArticle:(BOOL)withArticle __attribute__((swift_name("getTweetBlocking(tweetId:withArticle:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTweetDetailRequest:(KxwebCoreTweetDetailRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreTweetDetailResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTweetDetail(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreTweetDetailResponse *> *)getTweetDetailBlockingRequest:(KxwebCoreTweetDetailRequest *)request __attribute__((swift_name("getTweetDetailBlocking(request:)")));
@end

__attribute__((swift_name("CoreUserResource")))
@protocol KxwebCoreUserResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowersRequest:(KxwebCoreFollowingRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreFollowingResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowers(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreFollowingResponse *> *)getFollowersBlockingRequest:(KxwebCoreFollowingRequest *)request __attribute__((swift_name("getFollowersBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowingRequest:(KxwebCoreFollowingRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreFollowingResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowing(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreFollowingResponse *> *)getFollowingBlockingRequest:(KxwebCoreFollowingRequest *)request __attribute__((swift_name("getFollowingBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserAboutAccountRequest:(KxwebCoreGetUserAboutAccountRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreAboutAccountResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAboutAccount(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreAboutAccountResponse *> *)getUserAboutAccountBlockingRequest:(KxwebCoreGetUserAboutAccountRequest *)request __attribute__((swift_name("getUserAboutAccountBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByScreenNameRequest:(KxwebCoreUserByScreenNameRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByScreenName(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreUser *> *)getUserByScreenNameBlockingRequest:(KxwebCoreUserByScreenNameRequest *)request __attribute__((swift_name("getUserByScreenNameBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserIdByUsernameRequest:(KxwebCoreGetUserIdByUsernameRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserIdByUsername(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreUser *> *)getUserIdByUsernameBlockingRequest:(KxwebCoreGetUserIdByUsernameRequest *)request __attribute__((swift_name("getUserIdByUsernameBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserTweetsRequest:(KxwebCoreUserTweetsRequest *)request completionHandler:(void (^)(KxwebCoreResponse<KxwebCoreUserTweetsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserTweets(request:completionHandler:)")));
- (KxwebCoreResponse<KxwebCoreUserTweetsResponse *> *)getUserTweetsBlockingRequest:(KxwebCoreUserTweetsRequest *)request __attribute__((swift_name("getUserTweetsBlocking(request:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreXWebSession.Companion")))
@interface KxwebCoreXWebSessionCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreXWebSessionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create a cookie-based session.
 */
- (KxwebCoreXWebSession *)cookieAuthToken:(NSString *)authToken csrfToken:(NSString *)csrfToken cookieString:(NSString * _Nullable)cookieString label:(NSString * _Nullable)label __attribute__((swift_name("cookie(authToken:csrfToken:cookieString:label:)")));

/**
 * Create an OAuth1-based session.
 */
- (KxwebCoreXWebSession *)oauthOauthToken:(NSString *)oauthToken oauthSecret:(NSString *)oauthSecret label:(NSString * _Nullable)label __attribute__((swift_name("oauth(oauthToken:oauthSecret:label:)")));

/**
 * Parse sessions from a JSONL string (one JSON object per line).
 * Compatible with Nitter's sessions.jsonl format.
 *
 * Cookie format: {"kind":"cookie","auth_token":"...","ct0":"...","username":"..."}
 * OAuth format:  {"oauth_token":"...","oauth_token_secret":"..."}
 */
- (NSArray<KxwebCoreXWebSession *> *)parseJsonLinesJsonLines:(NSString *)jsonLines __attribute__((swift_name("parseJsonLines(jsonLines:)")));
@end


/**
 * Rate limit information from X (Twitter) API response headers.
 *
 * X returns rate limit info via:
 * - x-rate-limit-limit: Maximum requests per window
 * - x-rate-limit-remaining: Remaining requests in current window
 * - x-rate-limit-reset: Unix timestamp when the window resets
 *
 * Reference: Nitter's rate limit tracking (auth.nim)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface KxwebCoreRateLimit : KxwebBase
- (instancetype)initWithLimit:(int32_t)limit remaining:(int32_t)remaining resetEpochSeconds:(int64_t)resetEpochSeconds __attribute__((swift_name("init(limit:remaining:resetEpochSeconds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreRateLimitCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreRateLimit *)doCopyLimit:(int32_t)limit remaining:(int32_t)remaining resetEpochSeconds:(int64_t)resetEpochSeconds __attribute__((swift_name("doCopy(limit:remaining:resetEpochSeconds:)")));

/**
 * Rate limit information from X (Twitter) API response headers.
 *
 * X returns rate limit info via:
 * - x-rate-limit-limit: Maximum requests per window
 * - x-rate-limit-remaining: Remaining requests in current window
 * - x-rate-limit-reset: Unix timestamp when the window resets
 *
 * Reference: Nitter's rate limit tracking (auth.nim)
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Rate limit information from X (Twitter) API response headers.
 *
 * X returns rate limit info via:
 * - x-rate-limit-limit: Maximum requests per window
 * - x-rate-limit-remaining: Remaining requests in current window
 * - x-rate-limit-reset: Unix timestamp when the window resets
 *
 * Reference: Nitter's rate limit tracking (auth.nim)
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Whether this rate limit is currently exhausted.
 * A threshold of 2 remaining requests is used to avoid edge cases.
 */
- (BOOL)isLimited __attribute__((swift_name("isLimited()")));

/**
 * Seconds until the rate limit resets, or 0 if already reset.
 */
- (int64_t)secondsUntilReset __attribute__((swift_name("secondsUntilReset()")));

/**
 * Rate limit information from X (Twitter) API response headers.
 *
 * X returns rate limit info via:
 * - x-rate-limit-limit: Maximum requests per window
 * - x-rate-limit-remaining: Remaining requests in current window
 * - x-rate-limit-reset: Unix timestamp when the window resets
 *
 * Reference: Nitter's rate limit tracking (auth.nim)
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Maximum number of requests allowed per window. */
@property (readonly) int32_t limit __attribute__((swift_name("limit")));

/** Number of requests remaining in the current window. */
@property (readonly) int32_t remaining __attribute__((swift_name("remaining")));

/** Unix timestamp (seconds) when the rate limit window resets. */
@property (readonly) int64_t resetEpochSeconds __attribute__((swift_name("resetEpochSeconds")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KxwebKotlinThrowable : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KxwebKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KxwebKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KxwebKotlinException : KxwebKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KxwebKotlinRuntimeException : KxwebKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KxwebKotlinIllegalStateException : KxwebKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KxwebKotlinCancellationException : KxwebKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KxwebKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetCurrentUserResponse")))
@interface KxwebCoreGetCurrentUserResponse : KxwebBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId screenName:(NSString * _Nullable)screenName name:(NSString * _Nullable)name user:(KxwebCoreUser * _Nullable)user __attribute__((swift_name("init(userId:screenName:name:user:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetCurrentUserResponse *)doCopyUserId:(NSString * _Nullable)userId screenName:(NSString * _Nullable)screenName name:(NSString * _Nullable)name user:(KxwebCoreUser * _Nullable)user __attribute__((swift_name("doCopy(userId:screenName:name:user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property KxwebCoreUser * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KxwebCoreResponse<T> : KxwebBase
- (instancetype)initWithData:(T _Nullable)data json:(NSString *)json __attribute__((swift_name("init(data:json:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreResponse<T> *)doCopyData:(T _Nullable)data json:(NSString *)json __attribute__((swift_name("doCopy(data:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarkRequest")))
@interface KxwebCoreBookmarkRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutationResult")))
@interface KxwebCoreMutationResult : KxwebBase
- (instancetype)initWithSuccess:(BOOL)success error:(NSString * _Nullable)error __attribute__((swift_name("init(success:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreMutationResultCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreMutationResult *)doCopySuccess:(BOOL)success error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(success:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable error __attribute__((swift_name("error")));
@property BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarkFolderTimelineRequest")))
@interface KxwebCoreBookmarkFolderTimelineRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable folderId __attribute__((swift_name("folderId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetBookmarksResponse")))
@interface KxwebCoreGetBookmarksResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetBookmarksResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetBookmarksRequest")))
@interface KxwebCoreGetBookmarksRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchBookmarksRequest")))
@interface KxwebCoreSearchBookmarksRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchSearchResponse")))
@interface KxwebCoreSearchSearchResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreSearchSearchResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLikeRequest")))
@interface KxwebCoreLikeRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRetweetRequest")))
@interface KxwebCoreRetweetRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetNewsRequest")))
@interface KxwebCoreGetNewsRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KxwebCoreExploreTab * _Nullable tab __attribute__((swift_name("tab")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetNewsResponse")))
@interface KxwebCoreGetNewsResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetNewsResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowRequest")))
@interface KxwebCoreFollowRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHomeTimelineRequest")))
@interface KxwebCoreHomeTimelineRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHomeTimelineResponse")))
@interface KxwebCoreHomeTimelineResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreHomeTimelineResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetListsRequest")))
@interface KxwebCoreGetListsRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListTimelineResponse")))
@interface KxwebCoreListTimelineResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreListTimelineResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListTimelineRequest")))
@interface KxwebCoreListTimelineRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUploadMediaRequest")))
@interface KxwebCoreUploadMediaRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable altText __attribute__((swift_name("altText")));
@property KxwebKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUploadMediaResult")))
@interface KxwebCoreUploadMediaResult : KxwebBase
- (instancetype)initWithSuccess:(BOOL)success mediaId:(NSString * _Nullable)mediaId error:(NSString * _Nullable)error __attribute__((swift_name("init(success:mediaId:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreUploadMediaResultCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreUploadMediaResult *)doCopySuccess:(BOOL)success mediaId:(NSString * _Nullable)mediaId error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(success:mediaId:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable error __attribute__((swift_name("error")));
@property NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));
@property BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCreateTweetRequest")))
@interface KxwebCoreCreateTweetRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSArray<NSString *> *mediaIds __attribute__((swift_name("mediaIds")));
@property NSString * _Nullable replyToTweetId __attribute__((swift_name("replyToTweetId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTweet")))
@interface KxwebCoreTweet : KxwebBase
- (instancetype)initWithId:(NSString * _Nullable)id text:(NSString * _Nullable)text createdAt:(NSString * _Nullable)createdAt user:(KxwebCoreUser * _Nullable)user replyCount:(KxwebInt * _Nullable)replyCount retweetCount:(KxwebInt * _Nullable)retweetCount favoriteCount:(KxwebInt * _Nullable)favoriteCount bookmarkCount:(KxwebInt * _Nullable)bookmarkCount quoteCount:(KxwebInt * _Nullable)quoteCount media:(NSArray<KxwebCoreMedia *> *)media viewCount:(KxwebLong * _Nullable)viewCount inReplyToStatusId:(NSString * _Nullable)inReplyToStatusId conversationId:(NSString * _Nullable)conversationId lang:(NSString * _Nullable)lang article:(KxwebCoreArticle * _Nullable)article retweetedTweet:(KxwebCoreTweet * _Nullable)retweetedTweet __attribute__((swift_name("init(id:text:createdAt:user:replyCount:retweetCount:favoriteCount:bookmarkCount:quoteCount:media:viewCount:inReplyToStatusId:conversationId:lang:article:retweetedTweet:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreTweetCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreTweet *)doCopyId:(NSString * _Nullable)id text:(NSString * _Nullable)text createdAt:(NSString * _Nullable)createdAt user:(KxwebCoreUser * _Nullable)user replyCount:(KxwebInt * _Nullable)replyCount retweetCount:(KxwebInt * _Nullable)retweetCount favoriteCount:(KxwebInt * _Nullable)favoriteCount bookmarkCount:(KxwebInt * _Nullable)bookmarkCount quoteCount:(KxwebInt * _Nullable)quoteCount media:(NSArray<KxwebCoreMedia *> *)media viewCount:(KxwebLong * _Nullable)viewCount inReplyToStatusId:(NSString * _Nullable)inReplyToStatusId conversationId:(NSString * _Nullable)conversationId lang:(NSString * _Nullable)lang article:(KxwebCoreArticle * _Nullable)article retweetedTweet:(KxwebCoreTweet * _Nullable)retweetedTweet __attribute__((swift_name("doCopy(id:text:createdAt:user:replyCount:retweetCount:favoriteCount:bookmarkCount:quoteCount:media:viewCount:inReplyToStatusId:conversationId:lang:article:retweetedTweet:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KxwebCoreArticle * _Nullable article __attribute__((swift_name("article")));
@property KxwebInt * _Nullable bookmarkCount __attribute__((swift_name("bookmarkCount")));
@property NSString * _Nullable conversationId __attribute__((swift_name("conversationId")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property KxwebInt * _Nullable favoriteCount __attribute__((swift_name("favoriteCount")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable inReplyToStatusId __attribute__((swift_name("inReplyToStatusId")));
@property NSString * _Nullable lang __attribute__((swift_name("lang")));
@property NSArray<KxwebCoreMedia *> *media __attribute__((swift_name("media")));
@property KxwebInt * _Nullable quoteCount __attribute__((swift_name("quoteCount")));
@property KxwebInt * _Nullable replyCount __attribute__((swift_name("replyCount")));
@property KxwebInt * _Nullable retweetCount __attribute__((swift_name("retweetCount")));
@property KxwebCoreTweet * _Nullable retweetedTweet __attribute__((swift_name("retweetedTweet")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KxwebCoreUser * _Nullable user __attribute__((swift_name("user")));
@property KxwebLong * _Nullable viewCount __attribute__((swift_name("viewCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteTweetRequest")))
@interface KxwebCoreDeleteTweetRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchSearchRequest")))
@interface KxwebCoreSearchSearchRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@property KxwebCoreSearchType *searchType __attribute__((swift_name("searchType")));
@end


/**
 * Request for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 * Maps to the SearchTimeline GraphQL operation with the "People" product.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchUsersRequest")))
@interface KxwebCoreSearchUsersRequest : KxwebBase

/**
 * Request for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 * Maps to the SearchTimeline GraphQL operation with the "People" product.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Request for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 * Maps to the SearchTimeline GraphQL operation with the "People" product.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Maximum number of users to return per page. Defaults to 20. */
@property int32_t count __attribute__((swift_name("count")));

/** Pagination cursor from a previous response; null for the first page. */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The search query string. */
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end


/**
 * Response for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchUsersResponse")))
@interface KxwebCoreSearchUsersResponse : KxwebBase
- (instancetype)initWithUsers:(NSArray<KxwebCoreUser *> *)users cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(users:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreSearchUsersResponse *)doCopyUsers:(NSArray<KxwebCoreUser *> *)users cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(users:cursor:)")));

/**
 * Response for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Response for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Response for [work.socialhub.kxweb.api.SearchResource.searchUsers].
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Cursor for the next page, or null if there are no more results. */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** Users matching the query for this page. */
@property NSArray<KxwebCoreUser *> *users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetLikesRequest")))
@interface KxwebCoreGetLikesRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetLikesResponse")))
@interface KxwebCoreGetLikesResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetLikesResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end


/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrendLocations].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetTrendLocationsResponse")))
@interface KxwebCoreGetTrendLocationsResponse : KxwebBase
- (instancetype)initWithLocations:(NSArray<KxwebCoreTrendLocation *> *)locations __attribute__((swift_name("init(locations:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetTrendLocationsResponse *)doCopyLocations:(NSArray<KxwebCoreTrendLocation *> *)locations __attribute__((swift_name("doCopy(locations:)")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrendLocations].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrendLocations].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrendLocations].
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Locations for which trends are available, each with its WOEID. */
@property NSArray<KxwebCoreTrendLocation *> *locations __attribute__((swift_name("locations")));
@end


/**
 * Request for [work.socialhub.kxweb.api.TrendResource.getTrends].
 * Maps to the v1.1 trends/place.json endpoint.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetTrendsRequest")))
@interface KxwebCoreGetTrendsRequest : KxwebBase

/**
 * Request for [work.socialhub.kxweb.api.TrendResource.getTrends].
 * Maps to the v1.1 trends/place.json endpoint.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Request for [work.socialhub.kxweb.api.TrendResource.getTrends].
 * Maps to the v1.1 trends/place.json endpoint.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Yahoo! Where On Earth ID of the location. 1 = Worldwide. */
@property int64_t woeid __attribute__((swift_name("woeid")));
@end


/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrends].
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetTrendsResponse")))
@interface KxwebCoreGetTrendsResponse : KxwebBase
- (instancetype)initWithTrends:(NSArray<KxwebCoreTrend *> *)trends asOf:(NSString * _Nullable)asOf createdAt:(NSString * _Nullable)createdAt locationName:(NSString * _Nullable)locationName __attribute__((swift_name("init(trends:asOf:createdAt:locationName:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetTrendsResponse *)doCopyTrends:(NSArray<KxwebCoreTrend *> *)trends asOf:(NSString * _Nullable)asOf createdAt:(NSString * _Nullable)createdAt locationName:(NSString * _Nullable)locationName __attribute__((swift_name("doCopy(trends:asOf:createdAt:locationName:)")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrends].
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrends].
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Response for [work.socialhub.kxweb.api.TrendResource.getTrends].
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Timestamp when the trends were queried (ISO-8601), as reported by X. */
@property NSString * _Nullable asOf __attribute__((swift_name("asOf")));

/** Timestamp when the trends were generated (ISO-8601), as reported by X. */
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/** Human-readable name of the location the trends apply to. */
@property NSString * _Nullable locationName __attribute__((swift_name("locationName")));

/** Trending topics for the requested location. */
@property NSArray<KxwebCoreTrend *> *trends __attribute__((swift_name("trends")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetRepliesRequest")))
@interface KxwebCoreGetRepliesRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetRepliesResponse")))
@interface KxwebCoreGetRepliesResponse : KxwebBase
- (instancetype)initWithReplies:(NSArray<KxwebCoreTweet *> *)replies cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(replies:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetRepliesResponse *)doCopyReplies:(NSArray<KxwebCoreTweet *> *)replies cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(replies:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *replies __attribute__((swift_name("replies")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetThreadRequest")))
@interface KxwebCoreGetThreadRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetThreadResponse")))
@interface KxwebCoreGetThreadResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreGetThreadResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTweetDetailRequest")))
@interface KxwebCoreTweetDetailRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable tweetId __attribute__((swift_name("tweetId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTweetDetailResponse")))
@interface KxwebCoreTweetDetailResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreTweetDetailResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingRequest")))
@interface KxwebCoreFollowingRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowingResponse")))
@interface KxwebCoreFollowingResponse : KxwebBase
- (instancetype)initWithUsers:(NSArray<KxwebCoreUser *> *)users cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(users:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreFollowingResponse *)doCopyUsers:(NSArray<KxwebCoreUser *> *)users cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(users:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreUser *> *users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetUserAboutAccountRequest")))
@interface KxwebCoreGetUserAboutAccountRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAboutAccountResponse")))
@interface KxwebCoreAboutAccountResponse : KxwebBase
- (instancetype)initWithAboutAccount:(KxwebCoreAboutAccount * _Nullable)aboutAccount __attribute__((swift_name("init(aboutAccount:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreAboutAccountResponse *)doCopyAboutAccount:(KxwebCoreAboutAccount * _Nullable)aboutAccount __attribute__((swift_name("doCopy(aboutAccount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KxwebCoreAboutAccount * _Nullable aboutAccount __attribute__((swift_name("aboutAccount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserByScreenNameRequest")))
@interface KxwebCoreUserByScreenNameRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser")))
@interface KxwebCoreUser : KxwebBase
- (instancetype)initWithId:(NSString * _Nullable)id screenName:(NSString * _Nullable)screenName name:(NSString * _Nullable)name description:(NSString * _Nullable)description profileImageUrl:(NSString * _Nullable)profileImageUrl profileBannerUrl:(NSString * _Nullable)profileBannerUrl followersCount:(KxwebInt * _Nullable)followersCount followingCount:(KxwebInt * _Nullable)followingCount statusesCount:(KxwebInt * _Nullable)statusesCount listedCount:(KxwebInt * _Nullable)listedCount verified:(KxwebBoolean * _Nullable)verified createdAt:(NSString * _Nullable)createdAt location:(NSString * _Nullable)location url:(NSString * _Nullable)url __attribute__((swift_name("init(id:screenName:name:description:profileImageUrl:profileBannerUrl:followersCount:followingCount:statusesCount:listedCount:verified:createdAt:location:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreUserCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreUser *)doCopyId:(NSString * _Nullable)id screenName:(NSString * _Nullable)screenName name:(NSString * _Nullable)name description:(NSString * _Nullable)description profileImageUrl:(NSString * _Nullable)profileImageUrl profileBannerUrl:(NSString * _Nullable)profileBannerUrl followersCount:(KxwebInt * _Nullable)followersCount followingCount:(KxwebInt * _Nullable)followingCount statusesCount:(KxwebInt * _Nullable)statusesCount listedCount:(KxwebInt * _Nullable)listedCount verified:(KxwebBoolean * _Nullable)verified createdAt:(NSString * _Nullable)createdAt location:(NSString * _Nullable)location url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(id:screenName:name:description:profileImageUrl:profileBannerUrl:followersCount:followingCount:statusesCount:listedCount:verified:createdAt:location:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KxwebInt * _Nullable followersCount __attribute__((swift_name("followersCount")));
@property KxwebInt * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KxwebInt * _Nullable listedCount __attribute__((swift_name("listedCount")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable profileBannerUrl __attribute__((swift_name("profileBannerUrl")));
@property NSString * _Nullable profileImageUrl __attribute__((swift_name("profileImageUrl")));
@property NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property KxwebInt * _Nullable statusesCount __attribute__((swift_name("statusesCount")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KxwebBoolean * _Nullable verified __attribute__((swift_name("verified")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreGetUserIdByUsernameRequest")))
@interface KxwebCoreGetUserIdByUsernameRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserTweetsRequest")))
@interface KxwebCoreUserTweetsRequest : KxwebBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserTweetsResponse")))
@interface KxwebCoreUserTweetsResponse : KxwebBase
- (instancetype)initWithTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("init(tweets:cursor:)"))) __attribute__((objc_designated_initializer));
- (KxwebCoreUserTweetsResponse *)doCopyTweets:(NSArray<KxwebCoreTweet *> *)tweets cursor:(NSString * _Nullable)cursor __attribute__((swift_name("doCopy(tweets:cursor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSArray<KxwebCoreTweet *> *tweets __attribute__((swift_name("tweets")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.Companion")))
@interface KxwebCoreRateLimitCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreRateLimitCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse rate limit from HTTP response headers.
 * Returns null if the required headers are not present.
 */
- (KxwebCoreRateLimit * _Nullable)fromHeadersHeaders:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers __attribute__((swift_name("fromHeaders(headers:)")));

/** Consider rate-limited when remaining drops to this threshold. */
@property (readonly) int32_t REMAINING_THRESHOLD __attribute__((swift_name("REMAINING_THRESHOLD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KxwebKotlinArray<T> : KxwebBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KxwebInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KxwebKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMutationResult.Companion")))
@interface KxwebCoreMutationResultCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreMutationResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KxwebKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KxwebKotlinEnum<E> : KxwebBase <KxwebKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreExploreTab")))
@interface KxwebCoreExploreTab : KxwebKotlinEnum<KxwebCoreExploreTab *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KxwebCoreExploreTab *forYou __attribute__((swift_name("forYou")));
@property (class, readonly) KxwebCoreExploreTab *trending __attribute__((swift_name("trending")));
@property (class, readonly) KxwebCoreExploreTab *news __attribute__((swift_name("news")));
@property (class, readonly) KxwebCoreExploreTab *sports __attribute__((swift_name("sports")));
@property (class, readonly) KxwebCoreExploreTab *entertainment __attribute__((swift_name("entertainment")));
+ (KxwebKotlinArray<KxwebCoreExploreTab *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KxwebCoreExploreTab *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *timelineId __attribute__((swift_name("timelineId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KxwebKotlinByteArray : KxwebBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KxwebByte *(^)(KxwebInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KxwebKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUploadMediaResult.Companion")))
@interface KxwebCoreUploadMediaResultCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreUploadMediaResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMedia")))
@interface KxwebCoreMedia : KxwebBase
- (instancetype)initWithType:(NSString * _Nullable)type url:(NSString * _Nullable)url width:(KxwebInt * _Nullable)width height:(KxwebInt * _Nullable)height __attribute__((swift_name("init(type:url:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreMediaCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreMedia *)doCopyType:(NSString * _Nullable)type url:(NSString * _Nullable)url width:(KxwebInt * _Nullable)width height:(KxwebInt * _Nullable)height __attribute__((swift_name("doCopy(type:url:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KxwebInt * _Nullable height __attribute__((swift_name("height")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KxwebInt * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreArticle")))
@interface KxwebCoreArticle : KxwebBase
- (instancetype)initWithId:(NSString * _Nullable)id title:(NSString * _Nullable)title previewText:(NSString * _Nullable)previewText plainText:(NSString * _Nullable)plainText coverImageUrl:(NSString * _Nullable)coverImageUrl __attribute__((swift_name("init(id:title:previewText:plainText:coverImageUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreArticleCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreArticle *)doCopyId:(NSString * _Nullable)id title:(NSString * _Nullable)title previewText:(NSString * _Nullable)previewText plainText:(NSString * _Nullable)plainText coverImageUrl:(NSString * _Nullable)coverImageUrl __attribute__((swift_name("doCopy(id:title:previewText:plainText:coverImageUrl:)")));

/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** URL of the article's cover image. */
@property NSString * _Nullable coverImageUrl __attribute__((swift_name("coverImageUrl")));

/** Article identifier. */
@property NSString * _Nullable id __attribute__((swift_name("id")));

/** Full article body as plain text (present only when requested). */
@property NSString * _Nullable plainText __attribute__((swift_name("plainText")));

/** Short preview/summary text. */
@property NSString * _Nullable previewText __attribute__((swift_name("previewText")));

/** Article title. */
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTweet.Companion")))
@interface KxwebCoreTweetCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreTweetCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchType")))
@interface KxwebCoreSearchType : KxwebKotlinEnum<KxwebCoreSearchType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KxwebCoreSearchType *latest __attribute__((swift_name("latest")));
@property (class, readonly) KxwebCoreSearchType *top __attribute__((swift_name("top")));
@property (class, readonly) KxwebCoreSearchType *people __attribute__((swift_name("people")));
@property (class, readonly) KxwebCoreSearchType *media __attribute__((swift_name("media")));
@property (class, readonly) KxwebCoreSearchType *photos __attribute__((swift_name("photos")));
@property (class, readonly) KxwebCoreSearchType *videos __attribute__((swift_name("videos")));
+ (KxwebKotlinArray<KxwebCoreSearchType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KxwebCoreSearchType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *product __attribute__((swift_name("product")));
@end


/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendLocation")))
@interface KxwebCoreTrendLocation : KxwebBase
- (instancetype)initWithName:(NSString * _Nullable)name woeid:(KxwebLong * _Nullable)woeid country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode placeType:(NSString * _Nullable)placeType parentId:(KxwebLong * _Nullable)parentId url:(NSString * _Nullable)url __attribute__((swift_name("init(name:woeid:country:countryCode:placeType:parentId:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreTrendLocationCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreTrendLocation *)doCopyName:(NSString * _Nullable)name woeid:(KxwebLong * _Nullable)woeid country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode placeType:(NSString * _Nullable)placeType parentId:(KxwebLong * _Nullable)parentId url:(NSString * _Nullable)url __attribute__((swift_name("doCopy(name:woeid:country:countryCode:placeType:parentId:url:)")));

/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Country name, or empty for supernational locations. */
@property NSString * _Nullable country __attribute__((swift_name("country")));

/** ISO country code, or null when not applicable. */
@property NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));

/** Display name of the location (e.g. "Worldwide", "Tokyo"). */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** WOEID of the parent location, or null. */
@property KxwebLong * _Nullable parentId __attribute__((swift_name("parentId")));

/** Type of place (e.g. "Town", "Country", "Supername"). */
@property NSString * _Nullable placeType __attribute__((swift_name("placeType")));

/** Yahoo! GeoPlanet URL describing the location. */
@property NSString * _Nullable url __attribute__((swift_name("url")));

/** Yahoo! Where On Earth ID; pass to getTrends to fetch its trends. */
@property KxwebLong * _Nullable woeid __attribute__((swift_name("woeid")));
@end


/**
 * A single trending topic on X (Twitter).
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend")))
@interface KxwebCoreTrend : KxwebBase
- (instancetype)initWithName:(NSString * _Nullable)name query:(NSString * _Nullable)query url:(NSString * _Nullable)url tweetVolume:(KxwebLong * _Nullable)tweetVolume __attribute__((swift_name("init(name:query:url:tweetVolume:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreTrendCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreTrend *)doCopyName:(NSString * _Nullable)name query:(NSString * _Nullable)query url:(NSString * _Nullable)url tweetVolume:(KxwebLong * _Nullable)tweetVolume __attribute__((swift_name("doCopy(name:query:url:tweetVolume:)")));

/**
 * A single trending topic on X (Twitter).
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A single trending topic on X (Twitter).
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A single trending topic on X (Twitter).
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Display name of the trend (e.g. a hashtag or phrase). */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Search query string used to open the trend. */
@property NSString * _Nullable query __attribute__((swift_name("query")));

/** Approximate number of tweets, or null when unavailable. */
@property KxwebLong * _Nullable tweetVolume __attribute__((swift_name("tweetVolume")));

/** URL to the trend's search results. */
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAboutAccount")))
@interface KxwebCoreAboutAccount : KxwebBase
- (instancetype)initWithId:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt location:(NSString * _Nullable)location description:(NSString * _Nullable)description __attribute__((swift_name("init(id:createdAt:location:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KxwebCoreAboutAccountCompanion *companion __attribute__((swift_name("companion")));
- (KxwebCoreAboutAccount *)doCopyId:(NSString * _Nullable)id createdAt:(NSString * _Nullable)createdAt location:(NSString * _Nullable)location description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(id:createdAt:location:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KxwebCoreUserCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KxwebKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KxwebKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KxwebKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KxwebKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KxwebKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KxwebKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KxwebKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KxwebKotlinx_serialization_coreKSerializer <KxwebKotlinx_serialization_coreSerializationStrategy, KxwebKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KxwebKotlinEnumCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KxwebKotlinByteIterator : KxwebBase <KxwebKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KxwebByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMedia.Companion")))
@interface KxwebCoreMediaCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreMediaCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreArticle.Companion")))
@interface KxwebCoreArticleCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreArticleCompanion *shared __attribute__((swift_name("shared")));

/**
 * An X (Twitter) long-form Article attached to a tweet.
 *
 * Article content is delivered embedded in tweet results when the article
 * field toggles are enabled (see TweetResource.getTweet withArticle=true).
 */
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendLocation.Companion")))
@interface KxwebCoreTrendLocationCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreTrendLocationCompanion *shared __attribute__((swift_name("shared")));

/**
 * A location for which trends are available, identified by its WOEID
 * (Yahoo! Where On Earth ID).
 */
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A single trending topic on X (Twitter).
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend.Companion")))
@interface KxwebCoreTrendCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A single trending topic on X (Twitter).
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreTrendCompanion *shared __attribute__((swift_name("shared")));

/**
 * A single trending topic on X (Twitter).
 */
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAboutAccount.Companion")))
@interface KxwebCoreAboutAccountCompanion : KxwebBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KxwebCoreAboutAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KxwebKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KxwebKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KxwebKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KxwebKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KxwebKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KxwebKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KxwebKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KxwebKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KxwebKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KxwebKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KxwebKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KxwebKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KxwebKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KxwebKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KxwebKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KxwebKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KxwebKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KxwebKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KxwebKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KxwebKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KxwebKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KxwebKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KxwebKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KxwebKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KxwebKotlinx_serialization_coreSerializersModule : KxwebBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KxwebKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KxwebKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KxwebKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KxwebKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KxwebKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KxwebKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KxwebKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KxwebKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KxwebKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KxwebKotlinx_serialization_coreSerialKind : KxwebBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KxwebKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KxwebKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KxwebKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KxwebKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KxwebKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KxwebKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KxwebKotlinNothing : KxwebBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KxwebKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KxwebKotlinKClass>)kClass provider:(id<KxwebKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KxwebKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KxwebKotlinKClass>)kClass serializer:(id<KxwebKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KxwebKotlinKClass>)baseClass actualClass:(id<KxwebKotlinKClass>)actualClass actualSerializer:(id<KxwebKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KxwebKotlinKClass>)baseClass defaultDeserializerProvider:(id<KxwebKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KxwebKotlinKClass>)baseClass defaultDeserializerProvider:(id<KxwebKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KxwebKotlinKClass>)baseClass defaultSerializerProvider:(id<KxwebKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KxwebKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KxwebKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KxwebKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KxwebKotlinKClass <KxwebKotlinKDeclarationContainer, KxwebKotlinKAnnotatedElement, KxwebKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
