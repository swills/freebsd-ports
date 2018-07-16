# Created by: Diederik de Groot
# $FreeBSD$

PORTNAME=		chan_sccp
PORTVERSION=		4.3.1
PORTREVISION=		2
CATEGORIES=		net

USE_GITHUB=		yes
GH_ACCOUNT=		chan-sccp
GH_PROJECT=		chan-sccp
GH_TAGNAME=		775238c8
GH_REV_NUM=		10450

DISTVERSIONPREFIX=	v
DISTVERSION=		${PORTVERSION}
PKGNAMEPREFIX=		asterisk-
DISTNAME=		Chan_SCCP-v${PORTVERSION}_r${GH_REV_NUM}

MAINTAINER=		ddegroot@talon.nl
COMMENT=		Replacement for the SCCP channel driver in Asterisk

LICENSE=		GPLv1

BUILD_DEPENDS=		asterisk:net/asterisk13
RUN_DEPENDS=		asterisk:net/asterisk13

GNU_CONFIGURE=		yes
USES=			iconv compiler libtool
CONFIGURE_ARGS+=	--enable-video \
			--enable-conference \
			--enable-advanced-functions \
			--with-hash-size=3001 \
			${ICONV_CONFIGURE_ARG}

CPPFLAGS+=		-I${ICONV_INCLUDE_PATH}
LDFLAGS+=		-L${LOCALBASE}/lib ${ICONV_LIB}

PLIST_FILES=		lib/asterisk/modules/chan_sccp.so \
			etc/asterisk/sccp.conf \
			share/doc/asterisk-chan_sccp/sccp.conf.annotated \
			share/doc/asterisk-chan_sccp/sccp.conf.minimal \
			share/doc/asterisk-chan_sccp/sccp_templated.conf \
			share/doc/asterisk-chan_sccp/mysql-v5_enum.sql \
			share/doc/asterisk-chan_sccp/postgres.sql \
			share/doc/asterisk-chan_sccp/sqlite3.sql \
			share/asterisk/documentation/thirdparty/chan_sccp-en_US.xml

post-build:
	${STRIP_CMD} ${WRKSRC}/src/.libs/chan_sccp.so

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/asterisk-chan_sccp
	(cd ${WRKSRC}/conf && ${CP} sccp.conf.annotated sccp.conf.minimal sccp_templated.conf mysql-v5_enum.sql postgres.sql sqlite3.sql ${STAGEDIR}${PREFIX}/share/doc/asterisk-chan_sccp/)
	${MKDIR} ${STAGEDIR}${PREFIX}/share/asterisk/documentation/thirdparty
	(cd ${WRKSRC} && ${CP} chan_sccp-en_US.xml ${STAGEDIR}${PREFIX}/share/asterisk/documentation/thirdparty)

.include <bsd.port.mk>
