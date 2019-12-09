# Created by: Euan Thoms <euan@potensol.com>
# $FreeBSD$

PORTNAME=		opensips
DISTVERSION=		3.0.1
PORTREVISION=		0
CATEGORIES=		net
MASTER_SITES=		http://opensips.org/pub/opensips/${PORTVERSION}/

MAINTAINER=		euan@potensol.com
COMMENT=		Open SIP Server

LICENSE=		GPLv2
LICENSE_FILE=		${WRKSRC}/COPYING

LIB_DEPENDS=		libxml2.so:textproc/libxml2 \
			libxmlrpc.so:net/xmlrpc-c \
			libexpat.so:textproc/expat2 \
			libjson-c.so:devel/json-c \
			libpcre.so:devel/pcre

BUILD_DEPENDS=		flex:textproc/flex \
			ginstall:sysutils/coreutils \
			gtar:archivers/gtar \
			gm4:devel/m4

RUN_DEPENDS=		${LOCALBASE}/bin/bash:shells/bash \
			${LOCALBASE}/bin/grep:textproc/gnugrep

USERS=			opensips
GROUPS=			opensips

OPENSIPS_RUNDIR?=       /var/run/${PORTNAME}

USES+=			bison gmake ncurses pkgconfig shebangfix
USE_RC_SUBR=		opensips
USE_GCC=		yes
USE_LDCONFIG=		yes

NOPRECIOUSMAKEVARS=	yes

OPTIONS_DEFINE=		DEBUG DOCS EXAMPLES HTTP DBHTTP LDAP MEMCACHED MYSQL \
			PGSQL RADIUS TESTS TLS UNIXODBC SQLITE REDIS \
			CASSANDRA COUCHBASE \
                        CARRIERROUTE CGRATES COMPRESSION CPLC\
                        MMGEOIP PYTHON PERL SIPREC

OPTIONS_DEFAULT=	MYSQL PGSQL SQLITE REDIS PERL TLS \
			CARRIERROUTE CGRATES COMPRESSION CPLC \
			SIPREC DBHTTP MEMCACHED

OPTIONS_SUB=		yes

HTTP_DESC=		HTTP transport via libmicrohttpd
DBHTTP_DESC=		Access to database as an HTTP server
LDAP_DESC=		Store SIP accounts in LDAP containing H.350
MEMCACHED_DESC=		Build with memcached support
MYSQL_DESC=		MySQL connectivity
PGSQL_DESC=		Postgres connectivity
RADIUS_DESC=		Radius implementation for the AAA API
TESTS_DESC=		Build and/or run tests
TLS_DESC=		Support TLS listeners
UNIXODBC_DESC=		unixodbc connectivity
SQLITE_DESC=		SQLite connectivity
REDIS_DESC=		cache system with REDIS servers
CASSANDRA_DESC=		cache system with Cassandra servers
COUCHBASE_DESC=		cache system with CouchBase servers
MMGEOIP_DESC=		Wrapper for the MaxMind GeoIP API
SIPREC_DESC=		SIP Recording to external/passive recorder
CARRIERROUTE_DESC=	routing, balancing and blacklisting capabilities
CGRATES_DESC=		integration with CGRateS billing/rating engine
COMPRESSION_DESC=	SIP message compression and base64 encoding
CPLC_DESC=		CPL (Call Processing Language) interpreter

MYSQL_USES+=		mysql:client
PGSQL_USES+=		pgsql
PYTHON_USES+=		python:2.7
PERL_USES+=		perl5
TLS_USES+=		ssl

REDIS_LIB_DEPENDS=		libhiredis.so:databases/hiredis
CARRIERROUTE_LIB_DEPENDS=		libconfuse.so:devel/libconfuse
CGRATES_LIB_DEPENDS=		libjson-c.so:devel/json-c
CASSANDRA_LIB_DEPENDS=	libcassandra.so:databases/cassandra-cpp-driver
COUCHBASE_LIB_DEPENDS=	libcouchbase.so:databases/libcouchbase
MMGEOIP_LIB_DEPENDS=		libmaxminddb.so:net/libmaxminddb
SIPREC_LIB_DEPENDS=		libuuid.so:misc/e2fsprogs-libuuid
RADIUS_LIB_DEPENDS=	libradiusclient-ng.so:net/radiusclient
HTTP_LIB_DEPENDS=	libmicrohttpd.so:www/libmicrohttpd
DBHTTP_LIB_DEPENDS=	libcurl.so:ftp/curl
MEMCACHED_LIB_DEPENDS=	libmemcached.so:databases/libmemcached
UNIXODBC_LIB_DEPENDS=	libodbc.so:databases/unixODBC
SQLITE_LIB_DEPENDS=	libsqlite3.so:databases/sqlite3

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MHTTP}
EXTRA_MODULES+=		httpd
.endif

.if ${PORT_OPTIONS:MDBHTTP}
EXTRA_MODULES+=		db_http
.endif

.if ${PORT_OPTIONS:MLDAP}
EXTRA_MODULES+=		ldap h350
USE_OPENLDAP=		yes
.endif

.if ${PORT_OPTIONS:MMEMCACHED}
EXTRA_MODULES+=		cachedb_memcached
.endif

.if ${PORT_OPTIONS:MCARRIERROUTE}
EXTRA_MODULES+=		carrierroute
.endif

.if ${PORT_OPTIONS:MCGRATES}
EXTRA_MODULES+=		cgrates
.endif

.if ${PORT_OPTIONS:MCOMPRESSION}
EXTRA_MODULES+=		compression
.endif

.if ${PORT_OPTIONS:MCPLC}
EXTRA_MODULES+=		cpl_c
.endif

.if ${PORT_OPTIONS:MREDIS}
EXTRA_MODULES+=		cachedb_redis
.endif

.if ${PORT_OPTIONS:MCASSANDRA}
EXTRA_MODULES+=		cachedb_cassandra
.endif

.if ${PORT_OPTIONS:MCOUCHBASE}
EXTRA_MODULES+=		cachedb_couchbase
.endif

.if ${PORT_OPTIONS:MMMGEOIP}
EXTRA_MODULES+=		mmgeoip
.endif

.if ${PORT_OPTIONS:MPYTHON}
EXTRA_MODULES+=		python
BINARY_ALIAS=		python=${PYTHON_VERSION}
.endif

.if ${PORT_OPTIONS:MPERL}
EXTRA_MODULES+=		perl db_perlvdb
.endif

.if ${PORT_OPTIONS:MSIPREC}
EXTRA_MODULES+=		siprec
.endif

.if ${PORT_OPTIONS:MMYSQL}
EXTRA_MODULES+=		db_mysql
.endif

.if ${PORT_OPTIONS:MPGSQL}
EXTRA_MODULES+=		db_postgres
.endif

.if ${PORT_OPTIONS:MRADIUS}
EXTRA_MODULES+=		aaa_radius
.endif

.if ${PORT_OPTIONS:MUNIXODBC}
EXTRA_MODULES+=		db_unixodbc
.endif

.if ${PORT_OPTIONS:MTLS}
EXTRA_MODULES+=		proto_tls proto_wss tls_mgm
.endif

.if ${PORT_OPTIONS:MSQLITE}
EXTRA_MODULES+=		db_sqlite
.endif

MAKE_ENV+=	FASTER=1
LDFLAGS+=	-pthread
CFLAGS+=	-I${LOCALBASE}/include/libxml2

do-configure:
	@(cp files/Makefile.conf ${WRKSRC})
	@${REINPLACE_CMD} -e "s|_PREFIX_|${PREFIX}|" ${WRKSRC}/Makefile.conf
	@${REINPLACE_CMD} -e "s|_STAGE_DIR_|${STAGEDIR}|" ${WRKSRC}/Makefile.conf

.for i in ${EXTRA_MODULES}
	@${REINPLACE_CMD} -e "s/\(^include_modules.*\)/\1 ${i}/" ${WRKSRC}/Makefile.conf
.endfor

do-configure-RADIUS-on:
	@${REINPLACE_CMD} -e "s|ldconfig -p|ldconfig -r|" ${WRKSRC}/modules/aaa_radius/Makefile

do-configure-DEBUG-off:
	@${REINPLACE_CMD} -e "s/^#DEFS+= -DNO_DEBUG/DEFS+= -DNO_DEBUG/" ${WRKSRC}/Makefile.conf

do-build:
	@${MKDIR} ${STAGEDIR}${OPENSIPS_RUNDIR}
	cd ${WRKSRC} && ${MAKE_ENV} ${GMAKE} ${_MAKE_JOBS} ${ALL_TARGET}

do-install:
	@cd ${WRKSRC} && ${MAKE_ENV} ${GMAKE} ${INSTALL_TARGET}
	@(cd ${STAGEDIR}${ETCDIR}; for i in `${FIND} . -type f`; do ${MV} $$i $$i.sample; done)
	(cp ${FILESDIR}/opensips.cfg.sample ${STAGEDIR}${ETCDIR}/opensips.cfg.sample)

do-install-TESTS-on:
	(cp -r ${WRKSRC}/test ${STAGEDIR}${PREFIX}/tests/opensips)

do-install-EXAMPLES-on:
	(cp -r ${WRKSRC}/examples ${STAGEDIR}${PREFIX}/share/examples/opensips)

post-install-RADIUS-on:
	(${MV} ${WRKSRC}/etc/dictionary.opensips ${STAGEDIR}${ETCDIR}/dictionary.opensips.sample)

post-install:
	@${ECHO_CMD} "Stripping binaries in ${STAGEDIR}${PREFIX}/lib/opensips/modules/"
	@${FIND} ${STAGEDIR}${PREFIX}/lib/opensips/modules/ -type f -name '*.so' -exec ${STRIP_CMD} {} +
	@${ECHO_CMD} "Stripping binaries in ${STAGEDIR}${PREFIX}/sbin/"
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/opensips;
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/osipsconfig;

.include <bsd.port.mk>
