# Created by: Jonas Kvinge <jonas@night-light.net>
# $FreeBSD$

PORTNAME=	ircproxy
PORTVERSION=	1.3.6
PORTREVISION=	4
CATEGORIES=	irc
MASTER_SITES=	https://BSDforge.com/projects/source/irc/ircproxy/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	IRC proxy/bouncer daemon

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcares.so:dns/c-ares

USES=		tar:bzip2 ssl
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib -lcrypto
CFLAGS+=	-I${LOCALBASE}/include

USERS=		ircproxyd
GROUPS=		ircproxyd

SUB_LIST=	IRC_USR=${USERS} IRC_GRP=${GROUPS}
SUB_FILES=	pkg-deinstall

OPTIONS_DEFINE=	IPV6 MEMDEBUG FDDEBUG
OPTIONS_DEFAULT=	MEMDEBUG FDDEBUG
MEMDEBUG_DESC=	Enable memory debugging
FDDEBUG_DESC=	Enable file descriptor debugging

MEMDEBUG_CONFIGURE_ENABLE=	memdebug
FDDEBUG_CONFIGURE_ENABLE=	fddebug
IPV6_CONFIGURE_ENABLE=		ipv6

post-patch:
	@${REINPLACE_CMD} -e 's|EUSER="ircproxy"|EUSER="ircproxyd"|g; \
		s|EGROUP="users"|EGROUP="ircproxyd"|g' ${WRKSRC}/data/${PORTNAME}d.conf

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/imkpasswd ${STAGEDIR}${PREFIX}/bin/ircproxyd

.include <bsd.port.mk>
