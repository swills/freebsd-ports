# Created by: walt
# $FreeBSD: head/sysutils/monitord/Makefile 406622 2016-01-18 23:08:10Z bapt $

PORTNAME=	monitord
PORTVERSION=	0.4.1
PORTREVISION=	4
CATEGORIES=	sysutils
MASTER_SITES=	http://lissyara.su/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Service that restarts other standalone services

USE_RC_SUBR=	monitord

post-patch:
	@${REINPLACE_CMD} -e 's|syslodg|syslogd|' ${WRKSRC}/${PORTNAME}.8
	@${REINPLACE_CMD} -e 's|-pipe||' ${WRKSRC}/Makefile

post-install:
	@${INSTALL_DATA} ${WRKSRC}/monitord.conf.sample \
		${STAGEDIR}${PREFIX}/etc/monitord.conf.sample

.include <bsd.port.mk>
