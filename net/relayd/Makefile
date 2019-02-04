# $FreeBSD$

PORTNAME=	relayd
PORTVERSION=	5.5.20140810
PORTREVISION=	4
CATEGORIES=	net

MAINTAINER=	mm@FreeBSD.org
COMMENT=	OpenBSD relay daemon

LICENSE=	ISCL

USES=		uidfix ssl
USE_GITHUB=	yes
USE_RC_SUBR=	relayd

GH_ACCOUNT=	mmatuska

WRKSRC_SUBDIR=	src/usr.sbin
CFLAGS+=	-Wall
MAKE_ARGS+=	BINDIR=${PREFIX}/sbin MANDIR=${PREFIX}/man/man

USERS=		_relayd
GROUPS=		_relayd

.include <bsd.port.pre.mk>

# OpenSSL 1.1.1 made into FreeBSD's base on OSVERSION 1200085 (r339270)
.if ${OSVERSION} >= 1200085
# using += here silents portlint.
BUILD_DEPENDS+=	${LOCALBASE}/bin/openssl:security/openssl
RUN_DEPENDS+=	${BUILD_DEPENDS}
# handle conflict against libevent: incomplete definition of type 'struct evbuffer'
CONFLICTS_BUILD=	libevent-2.*
# USES=localbase would add '-isystem' to these flags, and we do not want that.
CFLAGS+=	-I${LOCALBASE}/include
CPPFLAGS+=	-I${LOCALBASE}/include
CXXFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
# workaround changing DEFAULT_VERSIONS for SSL, only.
MAKE_ENV+=	SSL_DEFAULT=openssl USE_OPENSSL_RPATH=yes
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/relayd/relay.c \
		${WRKSRC}/relayd/relayd.h \
		${WRKSRC}/relayd/relayd.conf.5 \
		${WRKSRC}/relayd/relayd.8

post-install:
	${INSTALL_DATA} ${WRKSRC}/../etc/relayd.conf \
		${STAGEDIR}${PREFIX}/etc/relayd.conf.sample

.include <bsd.port.post.mk>
